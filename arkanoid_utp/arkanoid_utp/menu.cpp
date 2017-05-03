#include <iostream>

extern int GameState;
extern bool Mouse_left_click;
void PutTexture(char*, int, int, double);
extern int Mouse_X, Mouse_Y;
extern bool ProgramIsOn;

void ResetStats();

short int CursorPos = 1; //1-Play 2-Zmien platforme 3-wyjdz

//Wyœwietlanie strza³ki w odpowiednim miejscu
void DrawButton()
{
	if (CursorPos == 1) PutTexture("przycisk", 305, 397, 1);
	if (CursorPos == 2) PutTexture("przycisk", 305, 460, 1);
	if (CursorPos == 3) PutTexture("przycisk", 305, 530, 1);
}

void TransitionEffect();
//Jeœli kursor bêdzie nad przyciskiem, to strza³ka ma zmieniæ pozycjê
void RefreshCursorPos()
{
	if (Mouse_X > 370 && Mouse_Y > 400 && Mouse_X < 800 && Mouse_Y < 450)
	{
		if (Mouse_left_click)
		{
			GameState = 2;
			ResetStats();
			TransitionEffect();
		}
		CursorPos = 1;
	}
	if (Mouse_X > 370 && Mouse_Y > 460 && Mouse_X < 800 && Mouse_Y < 520)
	{
		if (Mouse_left_click)
		{
			GameState = 3;
			TransitionEffect();
		}
		CursorPos = 2;
	}
	if (Mouse_X > 370 && Mouse_Y > 526 && Mouse_X < 800 && Mouse_Y < 570)
	{
		if (Mouse_left_click)
		{
			TransitionEffect();
			ProgramIsOn = false;
		}
		CursorPos = 3;
	}
}


void Menu()
{
	// Menu to nieskoñczona/g³ówna pêtla
	PutTexture("menu", 0, 0, 1); //t³o
	RefreshCursorPos();
	DrawButton();
}