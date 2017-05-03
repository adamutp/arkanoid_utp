#include <iostream>

extern int GameState;
extern bool Mouse_left_click;
extern void PutTexture(char*, int, int, double);
extern int Mouse_X, Mouse_Y;
extern char *ChosenPlatform;

int step = 1;

void TransitionEffect();

void ChoosePlatform()
{
	if (Mouse_left_click == true && Mouse_X > 550 && Mouse_X < 610 && Mouse_Y > 370 && Mouse_Y < 410)
	{
		switch (step)
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
	PutTexture("select_menu", 0, 0, 1);
	PutTexture("podest1", 340, 300, 1);
	PutTexture("select_ok", 550, 370, 1);

	if (step > 1 && Mouse_left_click == true && Mouse_X > 280 && Mouse_X < 320 && Mouse_Y > 290 && Mouse_Y < 330)
		step--;
	if (step < 10 && Mouse_left_click == true && Mouse_X > 480 && Mouse_X < 520 && Mouse_Y > 290 && Mouse_Y < 330)
		step++;



	if(step>1)
	PutTexture("select_button_left", 280, 290, 1);
	if(step<10)
	PutTexture("select_button_right", 480, 290, 1);
	if (step == 2) PutTexture("podest2", 340, 300, 1);
	if (step == 3) PutTexture("podest3", 340, 300, 1);
	if (step == 4) PutTexture("podest4", 340, 300, 1);
	if (step == 5) PutTexture("podest5", 340, 300, 1);
	if (step == 6) PutTexture("podest6", 340, 300, 1);
	if (step == 7) PutTexture("podest7", 340, 300, 1);
	if (step == 8) PutTexture("podest8", 340, 300, 1);
	if (step == 9) PutTexture("podest9", 340, 300, 1);
	if (step == 10) PutTexture("podest10", 340, 300, 1);


	ChoosePlatform();
}