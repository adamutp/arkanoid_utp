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

extern bool Mouse_left_click; //Troche Ÿle dzia³a. Zmienia siê na true wtedy gdy puœcimy. Do menu siê nada, ale nie do gry
extern double FrameTime; //Wa¿ne! Czas klatki

int Points;
#define degtorad(angleDegrees) (angleDegrees * M_PI / 180.0)

void NewBonus(int, int);
void ResetSomeStats();

Brick Map[19][19];
cPlatform Platform;
cLifeBar LifeBar;

class cBonus;
/*************************************
				Pi³ka
**************************************/
class Ball
{
private:
	bool landed;
	double dir_x;
	double dir_y;
	double posx_2; //pozycja pi³ki wzglêdem platformy
	bool CanBounceP; //Czy pi³ka mo¿e odbiæ siê od platformy
public:
	bool CanLand;
	double velocity;
	double pointX[8]; //8 punktów zwi¹zanych z kolizj¹
	double pointY[8]; //8 punktów zwi¹zanych z kolizj¹
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
//G³ówne akcje zwi¹zane z pi³k¹
extern SDL_Renderer * Main_Renderer;
void Ball::BallEvents()
{
	if (landed == true) //jeœli wyl¹dowa³a, to pod¹¿aj za platform¹
	{
		posx = Platform.x + posx_2;
		posy = Platform.y - 15;
	}
	else //wszystkie akcje, gdy pi³ka nie jest na platformie
	{
		posx_2 = posx - Platform.x; //wyliczanie pozycji wzglêdem platformy - potrzebne gdy pi³ka wyl¹dowa³a

		double oldposx = posx; //jestem geniuszem
		double oldposy = posy;

		double movespeed = FrameTime * velocity;
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
				for (int c = 0; c < 8; c++) //te 8 punktów hitboxa pi³ki
				{
					if ((pointX[c] >= blockX) && 
						(pointX[c] < blockX + 40) && 
						(pointY[c] >= blockY) && 
						(pointY[c] < blockY + 20))
					{
						double centerX = blockX + 20, centerY = blockY + 10; //pozycja œrodka klocka
						double ballX = oldposx + 7.5, ballY = oldposy + 7.5; //œrodek pi³ki

						if ((centerY - ballY > 0) && (abs(ballX - centerX)/2 <= (centerY - ballY))) dir_y *= -1; //uderzenie z góry
						else if ((centerY - ballY <= 0) && (abs(ballX - centerX)/2 <= (ballY - centerY))) dir_y *= -1; //z do³u
						else if ((centerX - ballX > 0) && (abs(ballY - centerY) < (centerX - ballX) / 2)) dir_x *= -1; //z lewej
						else dir_x *= -1; //z prawej

						//Stwórz bonus, gdy uderzy w zniszczalny klocek
						if(Map[a][b].MustBeDestroyed) NewBonus(blockX, blockY);
						posx = oldposx;
						posy = oldposy;
						posx = posx + dir_x * movespeed;
						posy = posy + dir_y * movespeed;

						Map[a][b].hp--;
						if (Map[a][b].hp < 1)Map[a][b].IsDestroyed = true;
						else if (Map[a][b].hp < 2) Map[a][b].IsVisible = true;
						if (Map[a][b].IsDestroyed)Map[a][b].IsVisible = false;
						goto wyjscie; //break; //jak ju¿ pi³ka w coœ uderzy, to ma nie sprawdzaæ reszty punktów hitboxa, ani czy uderzy³o w inny klocek
					}
				}
			}
		}
		wyjscie: //zapobiega zbijaniu dwóch klocków na raz

		bool EmptyLevel = true;
		//sprawdzanie czy s¹ klocki na mapie
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
		
			W TYM MIEJSCU SPRAWDZIÆ, CZY JEST 0 KLOCKÓW NA MAPIE. JAK TAK TO DAJ EFEKTY PRZEJSCIA + ZA£ADUJ NASTÊPN¥ MAPÊ
		
		*/


		//odbicia od œcian:

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
		//spad³a:
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
			
			if (CanBounceP) //Chodzi o to, by po dotkniêciu platformy mog³a odbiæ siê tylko raz
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
			if(CanLand) landed = true; //Dobre miejsce, by wstawiæ kod odpowiadaj¹cy za l¹dowanie pi³ki i przetrzymywanie
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


Ball Main_Ball(Platform.x+60, Platform.y, true, cos(M_PI/4), -sin(M_PI/4)); //Przypominam, ¿e góra ekranu to 0px, a dó³ 800px. Dlatego jest minus.

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
	//jeœli nie stworzono nowego bonusa, to stwórz go (z jak¹œ szans¹):
	if (IsVisible == false)
	{
		double RandNumber1 = rand() % 400 - 200; //losowa szybkoœæ X
		double RandNumber2 = rand() % 300 + 200; //losowa szybkoœæ Y
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

		if (x < 20 || x > 745) //obicie o lew¹/praw¹ stronê
		{
			x = oldX;
			y = oldY;
			velocityX *= -1;
		}
		if (y < 0) //odbicie o górê
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

		//usuniêcie bonusu gdy wypadnie na dó³ ekran
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
			//dŸwiêk
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
		SDL_ShowCursor(1); //poka¿ kursor
	}
}

void ShowMap()
{
	PutTexture("background", 0, 0, 1); //tekstura t³a

	//wyœwietlanie ca³ego Map[][].
	for (int a = 0; a < 19; a++) //poziomo
	{
		for (int b = 0; b < 19; b++) //pionowo
		{
			if(Map[a][b].IsVisible && Map[a][b].hp>=1) 
				PutTexture(Map[a][b].type, 20 + a * 40, 35 + b * 20, 1); 
		}
	}

	PutTexture(ChosenPlatform, Platform.x, Platform.y, 0.50 + (0.25*Platform.length) ); //wyœwietlanie platformy
	PutTexture("pilka1", Main_Ball.posx, Main_Ball.posy, 1); //wyœwietlanie pi³ki
	LifeBar.DrawLifeBar();
}

//Ustalanie wartoœci gdy zaczêto now¹ grê
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
	Platform.Expand(); //to powinno przywróciæ platformê do normalnej d³ugoœci
	Main_Ball.CanLand = false;
	SDL_ShowCursor(0); //ukrywanie kursora myszy
}


//ta funkcja jest w nieskoñczonej pêtli
void GameInProgress()
{
	ShowMap(); //wyœwietlanie wszystkiego na ekranie
	Platform.PlatformPosition();//aktualizacja pozycji platformy dla ruchów myszy
	Main_Ball.BallEvents(); //wszystkie zdarzenia zwi¹zane z pi³k¹
	Bonus.Events();
	LifeBar.IsOver(); //sprawdzanie, czy przegraliœmy
}
