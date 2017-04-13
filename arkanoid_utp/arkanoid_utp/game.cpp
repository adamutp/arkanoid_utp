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
extern bool Mouse_left_click; //Troche �le dzia�a. Zmienia si� na true wtedy gdy pu�cimy. Do menu si� nada, ale nie do gry
extern double FrameTime; //Wa�ne! Czas klatki

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
	double posx_2; //pozycja pi�ki wzgl�dem platformy
	bool CanBounceP; //Czy pi�ka mo�e odbi� si� od platformy
	bool CanBounceW; //Czy pi�ka mo�e odbi� si� od �ciany
	bool CanBounceB; //Czy pi�ka mo�e odbi� si� od klocka
	double pointX[8]; //8 punkt�w zwi�zanych z kolizj�
	double pointY[8]; //8 punkt�w zwi�zanych z kolizj�
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
//G��wne akcje zwi�zane z pi�k�
void Ball::BallEvents()
{
	if (landed == true) //je�li wyl�dowa�a, to pod��aj za platform�
	{
		posx = Platform_X + posx_2;
	}
	else //wszystkie akcje, gdy pi�ka nie jest na platformie
	{
		posx_2 = posx - Platform_X; //wyliczanie pozycji wzgl�dem platformy - potrzebne gdy pi�ka wyl�dowa�a

		double oldposx = posx; //jestem geniuszem
		double oldposy = posy;

		double movespeed = FrameTime*velocity;
		posx = posx + dir_x * movespeed; //Ruchy pi�ki w powietrzu
		posy = posy + dir_y * movespeed;

		int blockX, blockY;

		//odbicie od klock�w (hitbox pi�ki sklada sie z 8 punkt�w na okr�gu):

			//z r�wnania parametrycznego:
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
				for (int c = 0; c < 8; c++) //te 8 punkt�w hitboxa pi�ki
				{
					if (pointX[c] > blockX && pointX[c] < blockX + 40 && pointY[c]> blockY && pointY[c] < blockY + 20)
					{
						if (CanBounceB)
						{
							CanBounceB = false;
							Map[a][b].IsVisible = false; //lub hp-1. Do poprawy

							//uderzenie z g�ry albo do�u
							if (oldposy + 15 < blockY || oldposy > blockY + 20) dir_y *= -1;
							else dir_x *= -1; //odbicie z lewej lub prawej


						}
						break; //jak ju� pi�ka w co� wybombi, to ma nie sprawdza� reszty punkt�w hitboxa
					}
				}
			}
		}
		if (posx > blockX - 15 && posx < blockX + 40 && posy + 15 > blockY && posy < blockY + 20)
		{//xD
		}
		else CanBounceB = true;

		//odbicia od �cian:

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
													
		if (posx > Platform_X - 15 && posx < Platform_X + 125 //Je�eli pi�ka jest w hitboxie platformy
			&& posy > Platform_Y-15 && posy < Platform_Y)// -15 bo kulka(jej y jest w lewym gornym rogu)

		{
			if (CanBounceP) //Chodzi o to, by po dotkni�ciu platformy mog�a odbi� si� tylko raz
			{
				CanBounceP = false;
				double posC = (posx_2 - 60)/80;
				dir_x = posC;
				dir_y = -cos(posC);
			}
			//landed = true; //Dobre miejsce, by wstawi� kod odpowiadaj�cy za l�dowanie pi�ki i przetrzymywanie
		}
		else CanBounceP = true; //Je�li pi�ka wyjdzie z pola platformy
		oldposx = posx;
		oldposy = posy;
	}
	if (Mouse_left_click) //mo�na tu doda� te� np. strzelanie
	{
		landed = false;
	}
}

Ball Main_Ball(Platform_X+60, Platform_Y-15, true, cos(M_PI/4), -sin(M_PI/4)); //Przypominam, �e g�ra ekranu to 0px, a d� 800px. Dlatego jest minus.

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
				PutTexture(Map[a][b].type, 20 + a * 40, 35 + b * 20); //wy�wietlanie ca�ego Map[][].
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
	if (Platform_X < 20)Platform_X = 20; //�eby nie wysz�o poza ekran
	else if (Platform_X > 660)Platform_X = 660; //-120, bo taka dlugosc platformy
	if (SDL_GetWindowFlags(Main_Window) & SDL_WINDOW_INPUT_FOCUS) //jesli nasza gra jest g��wnym oknem
		SDL_WarpMouseGlobal(windowX + 400, windowY + 300); //kursor wraca na �rodek ekranu gry
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
	Main_Ball.BallEvents(); //wszystkie zdarzenia zwi�zane z pi�k�
	PlatformPosition();//aktualizacja pozycji platformy dla ruch�w myszy
	PutTexture("background", 0, 0); //tekstura t�a
	ShowMap(); //wy�wietlanie wszystkiego na ekranie

	//BallPosition();

}
