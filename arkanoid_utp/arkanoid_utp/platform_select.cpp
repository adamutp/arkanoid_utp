#include <iostream>

extern int GameState;
extern bool Mouse_left_click;
extern void PutTexture(char*, int, int, double);
extern int Mouse_X, Mouse_Y;
extern char *ChosenPlatform;

int CursorPos = 1;

void PS_DrawButton()
{
	if (CursorPos == 1) PutTexture("przycisk", 480, 37, 1);
	if (CursorPos == 2) PutTexture("przycisk", 480, 87, 1);
	if (CursorPos == 3) PutTexture("przycisk", 480, 137, 1);
	if (CursorPos == 4) PutTexture("przycisk", 480, 187, 1);
	if (CursorPos == 5) PutTexture("przycisk", 480, 237, 1);
	if (CursorPos == 6) PutTexture("przycisk", 480, 287, 1);
	if (CursorPos == 7) PutTexture("przycisk", 480, 337, 1);
	if (CursorPos == 8) PutTexture("przycisk", 480, 387, 1);
	if (CursorPos == 9) PutTexture("przycisk", 480, 437, 1);
	if (CursorPos == 10) PutTexture("przycisk", 480, 487, 1);
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

void TransitionEffect();
void PS_IsPressed()
{
	if (Mouse_left_click == true)
	{
		switch (CursorPos)
		{
		case 1:
			ChosenPlatform = "podest1";
			break;
		case 2:
			ChosenPlatform = "podest2";
			break;
		case 3:
			ChosenPlatform = "podest3";
			break;
		case 4:
			ChosenPlatform = "podest4";
			break;
		case 5:
			ChosenPlatform = "podest5";
			break;
		case 6:
			ChosenPlatform = "podest6";
			break;
		case 7:
			ChosenPlatform = "podest7";
			break;
		case 8:
			ChosenPlatform = "podest8";
			break;
		case 9:
			ChosenPlatform = "podest9";
			break;
		case 10:
			ChosenPlatform = "podest10";
			break;
		default:
			ChosenPlatform = "podest1";
			break;
		}
		std::cout << "Wybrano platforme: " << ChosenPlatform << std::endl;
		GameState = 1;//przejœcie do menu
		TransitionEffect();
	}
}

void PlatformSelect()
{
	PutTexture("menu2", 0, 0, 1);
	PutTexture("podest1", 550, 50, 1);
	PutTexture("podest2", 550, 100, 1);
	PutTexture("podest3", 550, 150, 1);
	PutTexture("podest4", 550, 200, 1);
	PutTexture("podest5", 550, 250, 1);
	PutTexture("podest6", 550, 300, 1);
	PutTexture("podest7", 550, 350, 1);
	PutTexture("podest8", 550, 400, 1);
	PutTexture("podest9", 550, 450, 1);
	PutTexture("podest10", 550, 500, 1);


	PS_RefreshCursorPos();
	PS_DrawButton();
	PS_IsPressed();
}