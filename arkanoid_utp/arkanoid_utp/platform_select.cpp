#include <iostream>

using namespace std;

extern int GameState;
extern bool Mouse_left_click;
extern void PutTexture(char *, int, int);
extern int Mouse_X, Mouse_Y;
extern int ChosenPlatform;

int CursorPos = 1;

void PS_DrawButton()
{
	if (CursorPos == 1) PutTexture("przycisk", 480, 37);
	if (CursorPos == 2) PutTexture("przycisk", 480, 87);
	if (CursorPos == 3) PutTexture("przycisk", 480, 137);
	if (CursorPos == 4) PutTexture("przycisk", 480, 187);
	if (CursorPos == 5) PutTexture("przycisk", 480, 237);
	if (CursorPos == 6) PutTexture("przycisk", 480, 287);
	if (CursorPos == 7) PutTexture("przycisk", 480, 337);
	if (CursorPos == 8) PutTexture("przycisk", 480, 387);
	if (CursorPos == 9) PutTexture("przycisk", 480, 437);
	if (CursorPos == 10) PutTexture("przycisk", 480, 487);
}

void PS_RefreshCursorPos()
{
	if (Mouse_X > 550 && Mouse_Y > 50  && Mouse_X < 670 && Mouse_Y < 70) CursorPos = 1;
	if (Mouse_X > 550 && Mouse_Y > 100 && Mouse_X < 670 && Mouse_Y < 120) CursorPos = 2;
	if (Mouse_X > 550 && Mouse_Y > 150 && Mouse_X < 670 && Mouse_Y < 170) CursorPos = 3;
	if (Mouse_X > 550 && Mouse_Y > 200 && Mouse_X < 670 && Mouse_Y < 220) CursorPos = 4;
	if (Mouse_X > 550 && Mouse_Y > 250 && Mouse_X < 670 && Mouse_Y < 270) CursorPos = 5;
	if (Mouse_X > 550 && Mouse_Y > 300 && Mouse_X < 670 && Mouse_Y < 320) CursorPos = 6;
	if (Mouse_X > 550 && Mouse_Y > 350 && Mouse_X < 670 && Mouse_Y < 370) CursorPos = 7;
	if (Mouse_X > 550 && Mouse_Y > 400 && Mouse_X < 670 && Mouse_Y < 420) CursorPos = 8;
	if (Mouse_X > 550 && Mouse_Y > 450 && Mouse_X < 670 && Mouse_Y < 470) CursorPos = 9;
	if (Mouse_X > 550 && Mouse_Y > 500 && Mouse_X < 670 && Mouse_Y < 520) CursorPos = 10;
}
void PS_IsPressed()
{
	ChosenPlatform = CursorPos;
	if (Mouse_left_click == true)
	{
		cout << "Wybrano platforme nr: " << ChosenPlatform << endl;
		GameState = 1;
	}
}

void PlatformSelect()
{
	PutTexture("menu2", 0, 0);
	PutTexture("podest1", 550, 50);
	PutTexture("podest2", 550, 100);
	PutTexture("podest3", 550, 150);
	PutTexture("podest4", 550, 200);
	PutTexture("podest5", 550, 250);
	PutTexture("podest6", 550, 300);
	PutTexture("podest7", 550, 350);
	PutTexture("podest8", 550, 400);
	PutTexture("podest9", 550, 450);
	PutTexture("podest10", 550, 500);


	PS_RefreshCursorPos();
	PS_DrawButton();
	PS_IsPressed();
}