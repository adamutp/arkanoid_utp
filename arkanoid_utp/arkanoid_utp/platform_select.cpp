#include <iostream>

using namespace std;

extern int GameState;
extern bool Mouse_left_click;
extern void PutTexture(char *, int, int);
extern int Mouse_X, Mouse_Y;


void PlatformSelect()
{
	PutTexture("menu2", 0, 0);
	PutTexture("podest1", 50, 50);
	PutTexture("podest2", 50, 100);
	PutTexture("podest3", 50, 150);
	PutTexture("podest4", 50, 200);
	PutTexture("podest5", 50, 250);
	PutTexture("podest6", 50, 300);
	PutTexture("podest7", 50, 350);
	PutTexture("podest8", 50, 400);
	PutTexture("podest9", 50, 450);
	PutTexture("podest10", 50, 500);
}