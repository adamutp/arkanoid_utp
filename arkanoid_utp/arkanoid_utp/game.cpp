#include <iostream>
using namespace std;
extern void PutTexture(char *, int, int);
extern void GameInProgress();

int Level = 1; //numer poziomu
bool LevelIsLoaded = false;

struct Brick
{
	char *type;
	int points;
	bool IsDestroyed;

};

Brick Map[19][19];

void LoadMap()
{
	LevelIsLoaded = true;
	for (int a = 0; a < 19; a++)
	{
		for (int b = 0; b < 19; b++)
		{
			Map[a][b] = { "k13", 500, false };
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
			PutTexture(Map[a][b].type, 20 + b * 40, 35 + a * 20);
		}
	}
}

void GameInProgress()
{
	if (!LevelIsLoaded)
	{
		LoadMap();
	}
	PutTexture("background", 0, 0);
	ShowMap();
}
