#include <iostream>
#include <SDL.h>
#include <cmath>

using namespace std;
extern void PutTexture(char*, int, int);
extern void GameInProgress();
extern SDL_Window * Main_Window;
int Level = 1; //numer poziomu
bool LevelIsLoaded = false;
extern int Mouse_X, Mouse_Y;
int Platform_X=250, Platform_Y = 550;
extern char *ChosenPlatform;
extern bool Mouse_left_click;
extern double FrameTime;

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
public:
	double posx, posy;
	Ball(double pos_x, double pos_y, bool b_landed, double dir_x, double dir_y); 
	void BallEvents();
};

Ball::Ball(double pos_x, double pos_y, bool b_landed, double d_dir_x, double d_dir_y)
{
	dir_x = d_dir_x;
	dir_y = d_dir_y;
	landed = b_landed;
	posx = pos_x;
	posy = pos_y;
	velocity = 220;
	posx_2 = pos_x-Platform_X;
}

void Ball::BallEvents()
{
	if (landed == true) //je�li wyl�dowa�a, to pod��aj za platform�
	{
		posx = Platform_X + posx_2;
	}
	else //wszystkie akcje, gdy pi�ka nie jest na platformie
	{
		posx_2 = posx - Platform_X; //wyliczanie pozycji wzgl�dem platformy - potrzebne gdy pi�ka wyl�dowa�a

		double movespeed = FrameTime*velocity;
		posx = posx + dir_x * movespeed; //Ruchy pi�ki w powietrzu
		posy = posy + dir_y * movespeed;

		//odbicie od klock�w (kwadratowy hitbox)(trzeba zrobi� hitbox o kszta�cie ko�a):

		//odbicia od �cian:

		if (posx < 20 || posx > 765)//odbicie o lewy lub bok
		{
			dir_x *= -1;
		}
		else if (posy < 0)
		{
			dir_y *= -1;
		}

		//odbicia od platformy:

		if (posx > Platform_X - 15 && posx < Platform_X + 135 && posy > Platform_Y-15)
		{
			std::cout << posx_2 << endl;
			dir_x *= -1;
			dir_y *= -1;
		}

	}
	if (Mouse_left_click) //mo�na tu doda� te� np. strzelanie
	{
		landed = false;
	}
}

Ball Main_Ball(Platform_X+60, Platform_Y-15, true, 1, -cos(1/2)); //Przypominam, �e g�ra ekranu to 0px, a d� 800px. Dlatego jest minus.

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
		}
		else
		{
			for (int b = 1; b < 19; b += 2)
			{
				Map[a][b] = { "k7", 500, false, true, 1 };
			}
		}
		
	}
	for (int a = 0; a < 19; a++)
	{
		if (a % 2)
		{
			for (int b = 1; b < 19; b += 2)
			{
				Map[a][b] = { "k17",500,false,true,1 };
			}
		}
		else
		{
			for (int b = 0; b < 19; b += 2)
			{
				Map[a][b] = { "k17", 500, false, true, 1 };
			}
		}

	}


	cout << "Zaladowano mape nr " << Level << endl;
}

void ShowMap()
{
	for (int a = 0; a < 19; a++) //pionowo
	{
		for (int b = 0; b < 19; b++) //poziomo
		{
			PutTexture(Map[a][b].type, 20 + b * 40, 35 + a * 20); //wy�wietlanie ca�ego Map[][].
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
