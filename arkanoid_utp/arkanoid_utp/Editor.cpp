#include <SDL.h>
#include <iostream>
#include <fstream>
extern SDL_Renderer * Main_Renderer;

void PutTexture(char *, int, int, double);

struct E_Brick {
	int type = 50; //50 to ¿aden
	int points=0;
	bool IsDestroyed=true;
	bool IsVisible=false;
	bool MustBeDestroyed=false;
	int hp=0;
}E_Map[19][19];

int Chosen = 0;

void Editor()
{
	PutTexture("background", 0, 0, 1); //tekstura t³a

	extern int Mouse_X;
	extern int Mouse_Y;
	extern bool Mouse_left_click;
	extern bool Mouse_right_click;
	extern bool PressedF10;
	extern bool PressedLeft;
	extern bool PressedRight;

	char *ChosenBrick[20] = {"k1", "k2", "k3", "k4", "k5", "k6", "k7", "k8", "k9", "k10", "k11", "k12", "k13", "k14", "k15", "k16", "k17", "k18", "k19", "k20"};

	PutTexture(ChosenBrick[Chosen], Mouse_X - 20, Mouse_Y - 10, 1);

	//wyœwietlanie ca³ego E_Map[][].
	for (int a = 0; a < 19; a++) //poziomo
	{
		for (int b = 0; b < 19; b++) //pionowo
		{
			//wyœwietlanie klocka
			if (E_Map[a][b].type != 50)
				PutTexture(ChosenBrick[E_Map[a][b].type], 20 + a * 40, 35 + b * 20, 1);
			
			//dodawanie/usuwanie
			if (Mouse_X > 20 + a * 40 &&
				Mouse_X < 20 + a * 40 + 40 &&
				Mouse_Y > 35 + b * 20 &&
				Mouse_Y < 35 + b * 20 + 20)
			{
				if(Mouse_left_click)
				{
					//dodaj
					E_Map[a][b].type = Chosen;
					E_Map[a][b].points = 100;
					E_Map[a][b].IsDestroyed = false;
					E_Map[a][b].IsVisible = true;
					E_Map[a][b].MustBeDestroyed = true;
					E_Map[a][b].hp = 1;

					if (Chosen == 0) //niezniszczalny
					{
						E_Map[a][b].IsDestroyed = false;
						E_Map[a][b].IsVisible = true;
						E_Map[a][b].MustBeDestroyed = false;
						E_Map[a][b].hp = 1000;
					}
					if (Chosen >= 7 && Chosen <= 10) //niewidzialny
					{
						E_Map[a][b].IsDestroyed = false;
						E_Map[a][b].IsVisible = false;
						E_Map[a][b].MustBeDestroyed = true;
						E_Map[a][b].hp = 2;
					}
				}
				if (Mouse_right_click)
				{
					//usuñ
					E_Map[a][b].type = 50;
					E_Map[a][b].points = 0;
					E_Map[a][b].IsDestroyed = true;
					E_Map[a][b].IsVisible = false;
					E_Map[a][b].MustBeDestroyed = false;
					E_Map[a][b].hp = 0;
				}
			}

			//siatka
			SDL_SetRenderDrawColor(Main_Renderer, 255, 255, 255, 255);
			SDL_RenderDrawLine(Main_Renderer, 20 + a * 40, 35 + b * 20, 20 + a * 40, 35 + 19 * 20);
		}
		SDL_RenderDrawLine(Main_Renderer, 20, 35 + a*20, 20 + 19*40, 35+a*20);
	}


	if (PressedLeft)
	{
		Chosen--;
		if (Chosen < 0)Chosen = 19;
		SDL_Delay(100);
		PressedLeft = false;
	}
	if (PressedRight)
	{
		Chosen++;
		if (Chosen > 19)Chosen = 0;
		SDL_Delay(100);
		PressedRight = false;
	}
	if (PressedF10)
	{
		using namespace std;
		ofstream file;
		file.open("levelX.lvl");
		for (int a = 0; a < 19; a++)
		{
			for (int b = 0; b < 19; b++)
			{
				file << E_Map[a][b].type << " ";
				file << E_Map[a][b].points << " ";
				file << E_Map[a][b].IsDestroyed << " ";
				file << E_Map[a][b].IsVisible << " ";
				file << E_Map[a][b].MustBeDestroyed << " ";
				file << E_Map[a][b].hp;
				file << endl;
			}
			
		}
		file.close();
		//zapisywanie do pliku
		cout << "Zapisano pomyslnie (oby)";
		SDL_Delay(1000);
		PressedF10 = false;
	}
}