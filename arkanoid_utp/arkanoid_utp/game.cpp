#include <iostream>
#include <SDL.h>
#include <cmath>

using namespace std;
extern void PutTexture(char*, int, int);
extern void GameInProgress();
extern SDL_Window * Main_Window;
extern SDL_Renderer * Main_Renderer;
int Level = 1; //numer poziomu
bool LevelIsLoaded = false;
extern int Mouse_X, Mouse_Y;
int Platform_X=250, Platform_Y = 550;
extern char *ChosenPlatform;
extern bool Mouse_left_click; //Troche Ÿle dzia³a. Zmienia siê na true wtedy gdy puœcimy. Do menu siê nada, ale nie do gry
extern double FrameTime; //Wa¿ne! Czas klatki

struct Brick
{
	char *type;
	int points;
	bool IsDestroyed;
	bool IsVisible;
	int hp;

};

Brick Map[19][19];

class Ball
{
private:
	bool landed;
	double dir_x;
	double dir_y;
	double velocity;
	double posx_2; //pozycja pi³ki wzglêdem platformy
	bool CanBounceP; //Czy pi³ka mo¿e odbiæ siê od platformy
	bool CanBounceW; //Czy pi³ka mo¿e odbiæ siê od œciany
	bool CanBounceB; //Czy pi³ka mo¿e odbiæ siê od klocka
	double pointX[8]; //8 punktów zwi¹zanych z kolizj¹
	double pointY[8]; //8 punktów zwi¹zanych z kolizj¹
public:
	double posx, posy;
	Ball(double pos_x, double pos_y, bool b_landed, double dir_x, double dir_y); 
	void BallEvents();
};

//Konstruktor
Ball::Ball(double pos_x, double pos_y, bool b_landed, double d_dir_x, double d_dir_y)
{
	dir_x = d_dir_x;
	dir_y = d_dir_y;
	landed = b_landed;
	posx = pos_x;
	posy = pos_y;
	velocity = 400;
	posx_2 = pos_x-Platform_X;
	CanBounceP = true;
}
//G³ówne akcje zwi¹zane z pi³k¹
void Ball::BallEvents()
{
	if (landed == true) //jeœli wyl¹dowa³a, to pod¹¿aj za platform¹
	{
		posx = Platform_X + posx_2;
	}
	else //wszystkie akcje, gdy pi³ka nie jest na platformie
	{
		posx_2 = posx - Platform_X; //wyliczanie pozycji wzglêdem platformy - potrzebne gdy pi³ka wyl¹dowa³a

		double oldposx = posx; //jestem geniuszem
		double oldposy = posy;

		double movespeed = FrameTime*velocity;
		posx = posx + dir_x * movespeed; //Ruchy pi³ki w powietrzu
		posy = posy + dir_y * movespeed;

		int blockX, blockY;

		//odbicie od klocków (hitbox pi³ki sklada sie z 8 punktów na okrêgu):

			//z równania parametrycznego:
		double alfa = 0;
		for (int a = 0; a < 8; a++)
		{
			pointX[a] = posx + 7.5 + 7.5*cos(alfa);
			pointY[a] = posy + 7.5 + 7.5*sin(alfa);
			alfa = alfa + (2 * M_PI / 8); //hyhy powodzenia w rozkodowaniu tego
		}

		for (int a = 0; a < 19; a++)
		{
			for (int b = 0; b < 19; b++)
			{
				if (!Map[a][b].IsVisible) continue;
				//pozycje lewego gornego rogu klocka:
				blockX = 20 + a * 40;
				blockY = 35 + b * 20;
				for (int c = 0; c < 8; c++) //te 8 punktów hitboxa pi³ki
				{
					if (pointX[c] > blockX && pointX[c] < blockX + 40 && pointY[c]> blockY && pointY[c] < blockY + 20)
					{
						if (CanBounceB)
						{
							CanBounceB = false;
							Map[a][b].IsVisible = false; //lub hp-1. Do poprawy

							//uderzenie z góry albo do³u
							if (oldposy + 15 < blockY || oldposy > blockY + 20) dir_y *= -1;
							else dir_x *= -1; //odbicie z lewej lub prawej


						}
						break; //jak ju¿ pi³ka w coœ wybombi, to ma nie sprawdzaæ reszty punktów hitboxa
					}
				}
			}
		}
		if (posx > blockX - 15 && posx < blockX + 40 && posy + 15 > blockY && posy < blockY + 20)
		{//xD
		}
		else CanBounceB = true;

		//odbicia od œcian:

		if ((posx < 20 || posx > 765) && CanBounceW)//odbicie o lewy lub prawy bok
		{
			CanBounceW = false;
			dir_x *= -1;
		}
		else if (posy < 0 && CanBounceW)
		{
			CanBounceW = false;
			dir_y *= -1;
		}
		else CanBounceW = true;

		//odbicia od platformy:
													
		if (posx > Platform_X - 15 && posx < Platform_X + 125 //Je¿eli pi³ka jest w hitboxie platformy
			&& posy > Platform_Y-15 && posy < Platform_Y)// -15 bo kulka(jej y jest w lewym gornym rogu)

		{
			if (CanBounceP) //Chodzi o to, by po dotkniêciu platformy mog³a odbiæ siê tylko raz
			{
				CanBounceP = false;
				double posC = (posx_2 - 60)/80;
				dir_x = posC;
				dir_y = -cos(posC);
			}
			//landed = true; //Dobre miejsce, by wstawiæ kod odpowiadaj¹cy za l¹dowanie pi³ki i przetrzymywanie
		}
		else CanBounceP = true; //Jeœli pi³ka wyjdzie z pola platformy
		oldposx = posx;
		oldposy = posy;
	}
	if (Mouse_left_click) //mo¿na tu dodaæ te¿ np. strzelanie
	{
		landed = false;
	}
}

Ball Main_Ball(Platform_X+60, Platform_Y-15, true, cos(M_PI/4), -sin(M_PI/4)); //Przypominam, ¿e góra ekranu to 0px, a dó³ 800px. Dlatego jest minus.

void LoadMap()
{
	LevelIsLoaded = true;

	for (int a = 0; a < 19; a++)
	{
		if (a % 2)
		{
			for (int b = 0; b < 19; b += 2)
			{
				Map[a][b] = { "k7",500,false,true,1 };
			}
		}/*
		else
		{
			for (int b = 1; b < 19; b += 2)
			{
				Map[a][b] = { "k7", 500, false, true, 1 };
			}
		}*/
		
	}
	for (int a = 0; a < 19; a++)
	{
		if (a % 2)
		{
			for (int b = 1; b < 19; b += 2)
			{
				Map[a][b] = { "k17",500,false,true,1 };
			}
		}/*
		else
		{
			for (int b = 0; b < 19; b += 2)
			{
				Map[a][b] = { "k17", 500, false, true, 1 };
			}
		}
		*/
	}


	cout << "Zaladowano mape nr " << Level << endl;
}

void ShowMap()
{
	for (int a = 0; a < 19; a++) //poziomo
	{
		for (int b = 0; b < 19; b++) //pionowo
		{
			if(Map[a][b].IsVisible) 
				PutTexture(Map[a][b].type, 20 + a * 40, 35 + b * 20); //wyœwietlanie ca³ego Map[][].
		}
	}
	PutTexture(ChosenPlatform, Platform_X, Platform_Y);
	PutTexture("pilka1", Main_Ball.posx, Main_Ball.posy);
}

void PlatformPosition()
{
	int windowX, windowY;
	SDL_GetWindowPosition(Main_Window, &windowX, &windowY); 
	Platform_X = Platform_X + (Mouse_X - 400); //poruszanie
	if (Platform_X < 20)Platform_X = 20; //¿eby nie wysz³o poza ekran
	else if (Platform_X > 660)Platform_X = 660; //-120, bo taka dlugosc platformy
	if (SDL_GetWindowFlags(Main_Window) & SDL_WINDOW_INPUT_FOCUS) //jesli nasza gra jest g³ównym oknem
		SDL_WarpMouseGlobal(windowX + 400, windowY + 300); //kursor wraca na œrodek ekranu gry
}
/*
void BallPosition()
{
	int windowX, windowY;
	SDL_GetWindowPosition(Main_Window, &windowX, &windowY);
	Ball_X = Ball_X + (Mouse_X - 400);
	if (Ball_X < 70)Ball_X = 70;
	else if (Ball_X > 710)Ball_X = 710; 
	if (SDL_GetWindowFlags(Main_Window) & SDL_WINDOW_INPUT_FOCUS)
		SDL_WarpMouseGlobal(windowX + 400, windowY + 300);
}*/

void GameInProgress()
{
	if (!LevelIsLoaded)
	{
		LoadMap();
		SDL_ShowCursor(0);
	}
	Main_Ball.BallEvents(); //wszystkie zdarzenia zwi¹zane z pi³k¹
	PlatformPosition();//aktualizacja pozycji platformy dla ruchów myszy
	PutTexture("background", 0, 0); //tekstura t³a
	ShowMap(); //wyœwietlanie wszystkiego na ekranie

	//BallPosition();

}
