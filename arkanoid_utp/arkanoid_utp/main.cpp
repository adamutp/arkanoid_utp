#include <iostream>
#include <conio.h>
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include "main.h"

//Za�adowanie tekstur na pocz�tku programu
void LoadTextures()
{
	LoadAllTextures();
}

//Wy�wietlanie klatek na sekund� w konsoli
void ShowFPS()
{
	static int a = 0;
	if (a > FPS)
	{
		std::cout << "FPS: " << 1.0 / FrameTime << " FrameTime: "<<FrameTime<< std::endl;
		a = 0;
	}
	a++;
}

//Obs�uga myszy. Dost�pne zmienne:
//Mouse_X , Mouse_Y, Mouse_left_click
void Controls()
{
	if (SDL_GetMouseState(&Mouse_X, &Mouse_Y) & SDL_BUTTON(SDL_BUTTON_LEFT))
	{
		previousState = true;
	}
	else
	{
		if (previousState == true)Mouse_left_click = true;
		previousState = false;
	}


	if (SDL_GetMouseState(&Mouse_X, &Mouse_Y) & SDL_BUTTON(SDL_BUTTON_RIGHT))Mouse_right_click = true;
	else Mouse_right_click = false;
}

//Wydarzenia, kt�re maj� si� dzia� na koniec klatki
void EndLoop()
{
	Mouse_left_click = false;
}

//Funkcja okre�la w jakiej cz�ci gry sie aktualnie znajdujemy
void Game()
{
	if (GameState == 1)
	{
		//Menu
		Menu();
	}
	else if(GameState == 2)
	{
		GameInProgress();
		//G��wna cz�� gry
	}
	else if (GameState == 3)
	{
		PlatformSelect();
		//Wyb�r platformy
	}
	else if (GameState == 4)
	{
		Editor();
		//Edytor map
	}
	else
	{
		std::cout << "Niepoprawny GameState w main.h";
	}
}

//Wyczyszczenie okna na pocz�tku klatki
void CleanWindow()
{
	SDL_SetRenderDrawColor(Main_Renderer, 150, 0, 0, 255);
	SDL_RenderClear(Main_Renderer);
}



extern bool TransitionEffectOn;
void TransitionEffect();
void BlackToScr();
//Przeniesienie wszystkich tekstur na ekran u�ytkownika
void Rendering()
{
	//ShowFPS();
	if (TransitionEffectOn)BlackToScr();
	SDL_RenderPresent(Main_Renderer);
}

//G��wna p�tla programu
void MainLoop()
{
	while (ProgramIsOn)
	{
		if (SDL_PollEvent(&Main_Event) != 0)
		{
			if (Main_Event.type == SDL_QUIT)
				ProgramIsOn = false;
			else if (Main_Event.type == SDL_KEYDOWN)
				if (Main_Event.key.keysym.sym == SDLK_ESCAPE) ProgramIsOn = false;
				else if (Main_Event.key.keysym.sym == SDLK_F9)
				{
					SDL_ShowCursor(1);
					TransitionEffect();
					GameState = 4;
				}
				else if (Main_Event.key.keysym.sym == SDLK_F10)
				{
					PressedF10 = true;
				}
				else if (Main_Event.key.keysym.sym == SDLK_LEFT)
				{
					PressedLeft = true;
				}
				else if (Main_Event.key.keysym.sym == SDLK_RIGHT)
				{
					PressedRight = true;
				}
		}
		/*
		Co si� dzieje najpierw:
		1. Aktualizacja sterowania (np. pozycji myszy)
		2. Obliczenia gry (np. kierunek pi�ki)
		3. Renderowanie (na podstawie wczesniejszych obliczen)
		*/


		TimeNow = SDL_GetTicks();

		CleanWindow();
		Controls();
		Game();
		Rendering();
		EndLoop();

		FrameTime = (TimeNow - TimeOld) / 1000.0;
		TimeOld = TimeNow;

		SDL_Delay(1000/FPS);



	}
}

//Inicjalizacja bibliotek SDL
void InitSDL()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindowAndRenderer(
		Resolution_X, Resolution_Y,
		0,
		&Main_Window, &Main_Renderer);
	SDL_SetWindowTitle(Main_Window, "arkanoid_utp");
}

int main(int argc, char **argv)
{
	std::cout << "Konsola do debugowania: "<< std::endl;
	std::cout << "Sciezka do gry: "<<argv[0]<< std::endl;

	InitSDL();

	LoadTextures();

	MainLoop();

	SDL_Quit();

	std::cout << "Koniec programu.";
	_getch();
	return 0;
}