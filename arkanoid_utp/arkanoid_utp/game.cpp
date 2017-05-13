#include <iostream>
#include <SDL.h>
#include <cmath>
#include "game.h"

using namespace std;
void PutTexture(char*, int, int, double);
extern SDL_Window * Main_Window;

int Level = 1; //numer poziomu
void LoadMap();

extern int Mouse_X, Mouse_Y; //pozycja myszy
extern char *ChosenPlatform; //kolor wybranej platformy

extern bool Mouse_left_click; //Troche �le dzia�a. Zmienia si� na true wtedy gdy pu�cimy. Do menu si� nada, ale nie do gry
extern double FrameTime; //Wa�ne! Czas klatki

int Points;
#define degtorad(angleDegrees) (angleDegrees * M_PI / 180.0)

void NewBonus(int, int);
void ResetSomeStats();

Brick Map[19][19];
cPlatform Platform;
cLifeBar LifeBar;

class cBonus;
/*************************************
				Pi�ka
**************************************/
class Ball
{
private:
	bool landed;
	double dir_x;
	double dir_y;
	double posx_2; //pozycja pi�ki wzgl�dem platformy
	bool CanBounceP; //Czy pi�ka mo�e odbi� si� od platformy
public:
	bool CanLand;
	double velocity;
	double pointX[8]; //8 punkt�w zwi�zanych z kolizj�
	double pointY[8]; //8 punkt�w zwi�zanych z kolizj�
	double posx, posy;
	Ball(double pos_x, double pos_y, bool b_landed, double dir_x, double dir_y); 
	void BallEvents();
	void Faster();
	void Slower();
	void ResetPositon();
};

void Ball::Faster()
{
	velocity = velocity + 100;
	if (velocity > 800)velocity = 800;
}

void Ball::Slower()
{
	velocity = velocity - 100;
	if (velocity < 400)velocity = 400;
}

void Ball::ResetPositon()
{
	Platform.x = 250;
	Platform.y = 550;
	posx = Platform.x + 60;
	posy = Platform.y - 15;
	posx_2 = posx - Platform.x;
	dir_x = cos(M_PI / 4);
	dir_y = -sin(M_PI / 4);
	landed = true;
}


//Konstruktor
Ball::Ball(double pos_x, double pos_y, bool b_landed, double d_dir_x, double d_dir_y)
{
	dir_x = d_dir_x;
	dir_y = d_dir_y;
	landed = b_landed;
	posx = pos_x;
	posy = pos_y;
	velocity = 500;
	posx_2 = pos_x-Platform.x;
	CanBounceP = true;
	CanLand = false;
}
//G��wne akcje zwi�zane z pi�k�
extern SDL_Renderer * Main_Renderer;
void Ball::BallEvents()
{
	if (landed == true) //je�li wyl�dowa�a, to pod��aj za platform�
	{
		posx = Platform.x + posx_2;
		posy = Platform.y - 15;
	}
	else //wszystkie akcje, gdy pi�ka nie jest na platformie
	{
		posx_2 = posx - Platform.x; //wyliczanie pozycji wzgl�dem platformy - potrzebne gdy pi�ka wyl�dowa�a

		double oldposx = posx; //jestem geniuszem
		double oldposy = posy;

		double movespeed = FrameTime * velocity;
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
			SDL_RenderDrawPoint(Main_Renderer, pointX[a], pointY[a]);
		}

		for (int a = 0; a < 19; a++)
		{
			for (int b = 0; b < 19; b++)
			{
				if (Map[a][b].IsDestroyed) continue;
				//pozycje lewego gornego rogu klocka:
				blockX = 20 + a * 40;
				blockY = 35 + b * 20;
				for (int c = 0; c < 8; c++) //te 8 punkt�w hitboxa pi�ki
				{
					if ((pointX[c] >= blockX) && 
						(pointX[c] < blockX + 40) && 
						(pointY[c] >= blockY) && 
						(pointY[c] < blockY + 20))
					{
						double centerX = blockX + 20, centerY = blockY + 10; //pozycja �rodka klocka
						double ballX = oldposx + 7.5, ballY = oldposy + 7.5; //�rodek pi�ki

						if ((centerY - ballY > 0) && (abs(ballX - centerX)/2 <= (centerY - ballY))) dir_y *= -1; //uderzenie z g�ry
						else if ((centerY - ballY <= 0) && (abs(ballX - centerX)/2 <= (ballY - centerY))) dir_y *= -1; //z do�u
						else if ((centerX - ballX > 0) && (abs(ballY - centerY) < (centerX - ballX) / 2)) dir_x *= -1; //z lewej
						else dir_x *= -1; //z prawej

						//Stw�rz bonus, gdy uderzy w zniszczalny klocek
						if(Map[a][b].MustBeDestroyed) NewBonus(blockX, blockY);
						posx = oldposx;
						posy = oldposy;
						posx = posx + dir_x * movespeed;
						posy = posy + dir_y * movespeed;

						Map[a][b].hp--;
						if (Map[a][b].hp < 1)Map[a][b].IsDestroyed = true;
						else if (Map[a][b].hp < 2) Map[a][b].IsVisible = true;
						if (Map[a][b].IsDestroyed)Map[a][b].IsVisible = false;
						goto wyjscie; //break; //jak ju� pi�ka w co� uderzy, to ma nie sprawdza� reszty punkt�w hitboxa, ani czy uderzy�o w inny klocek
					}
				}
			}
		}
		wyjscie: //zapobiega zbijaniu dw�ch klock�w na raz

		bool EmptyLevel = true;
		//sprawdzanie czy s� klocki na mapie
		for (int a = 0; a < 19; a++)
		{
			for (int b = 0; b < 19; b++)
			{
				if (!Map[a][b].IsDestroyed && Map[a][b].MustBeDestroyed) EmptyLevel = false;
			}
		}
		if (EmptyLevel)
		{
			TransitionEffect();
			Level++;
			LoadMap();
		}
		/*
		
			W TYM MIEJSCU SPRAWDZI�, CZY JEST 0 KLOCK�W NA MAPIE. JAK TAK TO DAJ EFEKTY PRZEJSCIA + ZA�ADUJ NAST�PN� MAP�
		
		*/


		//odbicia od �cian:

		if (posx < 20 || posx > 765)//odbicie o lewy lub prawy bok
		{
			dir_x *= -1;
			posx = oldposx;
			posy = oldposy;
		}
		if (posy < 0)
		{
			dir_y *= -1;

			posx = oldposx;
			posy = oldposy;
		}
		//spad�a:
		if (posy > 600)
		{
			LifeBar.LoseLife(); 
			Platform.x = 250;
			Platform.y = 550;
			posx = Platform.x + 60;
			posy = Platform.y - 15;
			posx_2 = posx - Platform.x;
			dir_x = cos(M_PI / 4);
			dir_y = -sin(M_PI / 4);
			landed = true;
			ResetSomeStats();
		}

		//odbicia od platformy:
		if (posx > Platform.x - 10 &&
			posx < Platform.x + Platform.width &&
			posy > Platform.y - 15 &&
			posy < Platform.y + Platform.height - 10)
		{
			
			if (CanBounceP) //Chodzi o to, by po dotkni�ciu platformy mog�a odbi� si� tylko raz
			{
				CanBounceP = false;
				
				double posC = 1.260*(120 - posx_2) + 13.95; 
				if (posx_2 < 1)posC = 165;
				if (posx_2 > 120)posC = 15;
				if (posC < 90 && posC>70) posC = 70;
				else if (posC >= 90 && posC < 110) posC = 110;
				dir_x = cos(degtorad(posC));
				dir_y = -sin(degtorad(posC));
			}
			if(CanLand) landed = true; //Dobre miejsce, by wstawi� kod odpowiadaj�cy za l�dowanie pi�ki i przetrzymywanie
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


Ball Main_Ball(Platform.x+60, Platform.y, true, cos(M_PI/4), -sin(M_PI/4)); //Przypominam, �e g�ra ekranu to 0px, a d� 800px. Dlatego jest minus.

 /*************************************
		   Bonusy
**************************************/
#include <ctime>
#include <cstdlib>
class cBonus
{
private:
	double velocityX, velocityY;
	double x, y;
	double time;
	bool IsVisible;
	char * type;
public:
	void Reset();
	void GenerateBonus(int px, int py);
	void Events();

};


void cBonus::GenerateBonus(int px, int py)
{
	//je�li nie stworzono nowego bonusa, to stw�rz go (z jak�� szans�):
	if (IsVisible == false)
	{
		double RandNumber1 = rand() % 400 - 200; //losowa szybko�� X
		double RandNumber2 = rand() % 300 + 200; //losowa szybko�� Y
		int a = rand() % 10;
		if (a == 1) //10% szans
		{
			int b = rand() % 6;
			IsVisible = true;
			if (b == 0)type = "add_points";
			else if (b == 1)type = "expand";
			else if (b == 2)type = "glue";
			else if (b == 3)type = "reduce";
			else if (b == 4)type = "slow";
			else type = "speed";
			x = px;
			y = py;
			velocityX = RandNumber1;
			velocityY = RandNumber2;
			time = 0;
		}
	}
}

void cBonus::Events()
{
	if (IsVisible == true)
	{
		PutTexture(type, x, y, 1);
		double oldX = x, oldY = y;
		time = time + FrameTime;
		double velY = -(velocityY - 400 * time);

		x = x + velocityX * FrameTime;
		y = y + velY * FrameTime;

		if (x < 20 || x > 745) //obicie o lew�/praw� stron�
		{
			x = oldX;
			y = oldY;
			velocityX *= -1;
		}
		if (y < 0) //odbicie o g�r�
		{
			while (y < 0)
			{
				time = time + FrameTime;
				velY = -(velocityY - 400 * time);

				x = x + velocityX * FrameTime;
				y = y + velY * FrameTime;
			}
			x = oldX;
			y = oldY;
		}

		//usuni�cie bonusu gdy wypadnie na d� ekran
		if (y > 600)
		{
			IsVisible = false;
		}
		if ((x + 40 > Platform.x) &&
			(x< Platform.x + Platform.width) &&
			(y + 15 > Platform.y) &&
			(y < Platform.y + Platform.height))
		{
			IsVisible = false;
			//d�wi�k
			if (type == "add_points") Points = Points + 500;
			else if (type == "expand") Platform.Expand();
			else if (type == "glue") Main_Ball.CanLand = true;
			else if (type == "reduce") Platform.Reduce();
			else if (type == "slow") Main_Ball.Slower();
			else Main_Ball.Faster(); 
		}
	}
}

void cBonus::Reset()
{
	IsVisible = false;
}

cBonus Bonus;

void NewBonus(int x, int y)
{
	Bonus.GenerateBonus(x, y);
}

#include <fstream>

char *BrickList[20] = { "k1", "k2", "k3", "k4", "k5", "k6", "k7", "k8", "k9", "k10", "k11", "k12", "k13", "k14", "k15", "k16", "k17", "k18", "k19", "k20" };

void LoadMap()
{
	if (Level == 1)
	{
		ifstream read;
		read.open("level1.lvl");

		for(int a=0; a<19; a++)
			for (int b = 0; b < 19; b++)
			{
				int x;
				read >> x;
				Map[a][b].type = BrickList[x];
				read >> Map[a][b].points;
				read >> Map[a][b].IsDestroyed;
				read >> Map[a][b].IsVisible;
				read >> Map[a][b].MustBeDestroyed;
				read >> Map[a][b].hp;
			}
		read.close();
		cout << "Zaladowano mape nr " << Level << endl;
		ResetSomeStats();
	}
	else if (Level == 2)
	{
		ifstream read;
		read.open("level2.lvl");

		for (int a = 0; a<19; a++)
			for (int b = 0; b < 19; b++)
			{
				int x;
				read >> x;
				Map[a][b].type = BrickList[x];
				read >> Map[a][b].points;
				read >> Map[a][b].IsDestroyed;
				read >> Map[a][b].IsVisible;
				read >> Map[a][b].MustBeDestroyed;
				read >> Map[a][b].hp;
			}
		read.close();
		cout << "Zaladowano mape nr " << Level << endl;
		ResetSomeStats();
	}
	else if (Level == 3)
	{
		ifstream read;
		read.open("level3.lvl");

		for (int a = 0; a<19; a++)
			for (int b = 0; b < 19; b++)
			{
				int x;
				read >> x;
				Map[a][b].type = BrickList[x];
				read >> Map[a][b].points;
				read >> Map[a][b].IsDestroyed;
				read >> Map[a][b].IsVisible;
				read >> Map[a][b].MustBeDestroyed;
				read >> Map[a][b].hp;
			}
		read.close();
		cout << "Zaladowano mape nr " << Level << endl;
		ResetSomeStats();
	}
	else if (Level == 4)
	{
		ifstream read;
		read.open("level4.lvl");

		for (int a = 0; a<19; a++)
			for (int b = 0; b < 19; b++)
			{
				int x;
				read >> x;
				Map[a][b].type = BrickList[x];
				read >> Map[a][b].points;
				read >> Map[a][b].IsDestroyed;
				read >> Map[a][b].IsVisible;
				read >> Map[a][b].MustBeDestroyed;
				read >> Map[a][b].hp;
			}
		read.close();
		cout << "Zaladowano mape nr " << Level << endl;
		ResetSomeStats();
	}
	else
	{
		TransitionEffect();
		GameState = 1;
		SDL_ShowCursor(1); //poka� kursor
	}
}

void ShowMap()
{
	PutTexture("background", 0, 0, 1); //tekstura t�a

	//wy�wietlanie ca�ego Map[][].
	for (int a = 0; a < 19; a++) //poziomo
	{
		for (int b = 0; b < 19; b++) //pionowo
		{
			if(Map[a][b].IsVisible && Map[a][b].hp>=1) 
				PutTexture(Map[a][b].type, 20 + a * 40, 35 + b * 20, 1); 
		}
	}

	PutTexture(ChosenPlatform, Platform.x, Platform.y, 0.50 + (0.25*Platform.length) ); //wy�wietlanie platformy
	PutTexture("pilka1", Main_Ball.posx, Main_Ball.posy, 1); //wy�wietlanie pi�ki
	LifeBar.DrawLifeBar();
}

//Ustalanie warto�ci gdy zacz�to now� gr�
void ResetStats()
{
	srand(time(NULL));
	LifeBar.SetLifes(3);
	Level = 1;
	LoadMap();
	Bonus.Reset();
	Points = 0;
	ResetSomeStats();
}

void ResetSomeStats()
{
	Main_Ball.ResetPositon();
	Main_Ball.velocity = 500;
	Platform.Reduce();
	Platform.Reduce();
	Platform.Expand(); //to powinno przywr�ci� platform� do normalnej d�ugo�ci
	Main_Ball.CanLand = false;
	SDL_ShowCursor(0); //ukrywanie kursora myszy
}


//ta funkcja jest w niesko�czonej p�tli
void GameInProgress()
{
	ShowMap(); //wy�wietlanie wszystkiego na ekranie
	Platform.PlatformPosition();//aktualizacja pozycji platformy dla ruch�w myszy
	Main_Ball.BallEvents(); //wszystkie zdarzenia zwi�zane z pi�k�
	Bonus.Events();
	LifeBar.IsOver(); //sprawdzanie, czy przegrali�my
}
