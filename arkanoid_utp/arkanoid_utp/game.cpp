#include <iostream>
#include <SDL.h>
using namespace std;
extern void PutTexture(char*, int, int);
extern void GameInProgress();
extern SDL_Window * Main_Window;
int Level = 1; //numer poziomu
bool LevelIsLoaded = false;
extern int Mouse_X, Mouse_Y;
int Platform_X=250, Platform_Y = 550;
extern char *ChosenPlatform;
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
	PutTexture(ChosenPlatform, Platform_X, Platform_Y);
}

void PlatformPosition()
{
	int windowX, windowY;
	SDL_GetWindowPosition(Main_Window, &windowX, &windowY);
	//cout << "X: " << Mouse_X << " Y:" << Mouse_Y << endl;
	Platform_X = Platform_X + (Mouse_X - 400);
	if (Platform_X < 20)Platform_X = 20;
	else if (Platform_X > 660)Platform_X = 660; //-120, bo taka dlugosc platformy
	if (SDL_GetWindowFlags(Main_Window) & SDL_WINDOW_INPUT_FOCUS)
		SDL_WarpMouseGlobal(windowX + 400, windowY + 300);
}

void GameInProgress()
{
	if (!LevelIsLoaded)
	{
		LoadMap();
		SDL_ShowCursor(0);
	}
	PutTexture("background", 0, 0);
	ShowMap();
	PlatformPosition();

}