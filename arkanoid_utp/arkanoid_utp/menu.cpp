#include <iostream>
#include <string>
using namespace std;

extern int GameState;
extern bool Mouse_left_click;
extern void PutTexture(string, int, int);
extern int Mouse_X, Mouse_Y;
extern bool ProgramIsOn;
short int CursorPos = 1; //1-Play 2-Zmien platforme 3-wyjdz
void DrawButton()
{
	if (CursorPos == 1) PutTexture("przycisk", 305, 397);
	if (CursorPos == 2) PutTexture("przycisk", 305, 460);
	if (CursorPos == 3) PutTexture("przycisk", 305, 530);
}

void RefreshCursorPos()
{
	if (Mouse_X > 370 && Mouse_Y > 400 && Mouse_X < 800 && Mouse_Y < 450) CursorPos = 1;
	if (Mouse_X > 370 && Mouse_Y > 460 && Mouse_X < 800 && Mouse_Y < 520) CursorPos = 2;
	if (Mouse_X > 370 && Mouse_Y > 526 && Mouse_X < 800 && Mouse_Y < 570) CursorPos = 3;
}
void IsPressed()
{
	if (Mouse_X > 370 && Mouse_Y > 400 && Mouse_X < 800 && Mouse_Y < 450 && Mouse_left_click)
		GameState = 2;
	if (Mouse_X > 370 && Mouse_Y > 460 && Mouse_X < 800 && Mouse_Y < 520 && Mouse_left_click)
	{
		GameState = 3;
	}
	if (Mouse_X > 370 && Mouse_Y > 526 && Mouse_X < 800 && Mouse_Y < 570 && Mouse_left_click)
		ProgramIsOn = false;
}
void Menu()
{
	// Menu to nieskoñczona/g³ówna pêtla
	PutTexture("menu", 0, 0);
	RefreshCursorPos();
	DrawButton();
	IsPressed();
}