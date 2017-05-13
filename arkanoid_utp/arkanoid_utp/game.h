#pragma once
#include <SDL.h>

extern SDL_Window * Main_Window;
extern int Mouse_X;

void PutResizedTexture(char*, int, int, double, double);
extern int GameState;

extern bool TransitionEffectOn;
void TransitionEffect();


/********************************************
  Klocek (robi siê z tego tablicê 2-wymiarow¹)
*********************************************/
//
struct Brick
{
	char *type;
	int points;
	bool IsDestroyed;
	bool IsVisible;
	bool MustBeDestroyed;
	int hp;

};

/*************************************
			  Platforma
**************************************/
class cPlatform
{
public:
	int x, y; //pozycja lewego górnego rogu platformy
	int width, height; //szerokoœæ i wysokoœæ
	int length; //1 - ma³a, 2 - normalna, 3 - du¿a
	cPlatform();
	void Expand();
	void Reduce();
	void PlatformPosition();
};

void cPlatform::Expand()
{
	if (length < 3)
	{
		length++;
		width = width + 30;
	}
	//dŸwiêk
}
void cPlatform::Reduce()
{
	if (length > 1)
	{
		length--;
		width = width - 30;
	}
	//dŸwiêk
}

void cPlatform::PlatformPosition()
{
	int windowX, windowY;
	SDL_GetWindowPosition(Main_Window, &windowX, &windowY);
	x = x + (Mouse_X - 400); //poruszanie
	if (x < 20) x = 20; //¿eby nie wysz³o poza ekran
	else if (x > 800 - width - 20) x = 800 - width - 20;
	if (SDL_GetWindowFlags(Main_Window) & SDL_WINDOW_INPUT_FOCUS) //jesli nasza gra jest g³ównym oknem
		SDL_WarpMouseGlobal(windowX + 400, windowY + 300); //kursor wraca na œrodek ekranu gry
}

cPlatform::cPlatform()
{
	x = 250;
	y = 550;
	width = 120;
	height = 20;
	length = 2;
}

/*************************************
			Pasek ¿ycia
**************************************/
class cLifeBar
{
private:
	int Lives;
	int posX, posY; //pozycja pierwszego ¿ycia (pierwsze po prawej, trzecie po lewej)
public:
	cLifeBar();
	void DrawLifeBar();
	void IsOver();
	void AddLife();
	void LoseLife();
	void SetLifes(int NumberOfLifes);
};

void cLifeBar::DrawLifeBar()
{
	for (int a = 0; a < Lives; a++)
	{
		PutResizedTexture("podest3", posX - a * 40, posY, 0.25, 0.25);
	}
}

void cLifeBar::IsOver()
{
	if (Lives < 1)
	{
		GameState = 1;
		SDL_ShowCursor(1); //pokazanie kursora myszy
	}
}

void cLifeBar::AddLife()
{
	Lives++;
}

void cLifeBar::LoseLife()
{
	Lives--;
	TransitionEffect();
}

void cLifeBar::SetLifes(int NumberOfLifes)
{
	Lives = NumberOfLifes;
}

cLifeBar::cLifeBar()
{
	Lives = 3;
	posX = 740;
	posY = 12;
}


