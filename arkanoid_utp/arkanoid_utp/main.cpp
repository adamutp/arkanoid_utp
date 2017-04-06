#include <iostream>
#include <conio.h>
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include "main.h"


void LoadTextures()
{
	LoadAllTextures();
}

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

void Controls()
{
	/*
	if (SDL_GetMouseState(&Mouse_X, &Mouse_Y) & SDL_BUTTON(SDL_BUTTON_LEFT))Mouse_left_click = true;
	else Mouse_left_click = false;*/
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

void EndLoop()
{
	Mouse_left_click = false;
}

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
		//G³ówna czêœæ gry
	}
	else if (GameState == 3)
	{
		PlatformSelect();
		//Wybór platformy
	}
	else
	{
		std::cout << "Niepoprawny GameState w main.h";
	}
}

void CleanWindow()
{
	SDL_SetRenderDrawColor(Main_Renderer, 150, 0, 0, 255);
	SDL_RenderClear(Main_Renderer);
}
void Rendering()
{
	ShowFPS();

	SDL_RenderPresent(Main_Renderer);
}

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
		}
		/*
		Co siê dzieje najpierw:
		1. Aktualizacja sterowania (np. pozycji myszy)
		2. Obliczenia gry (np. kierunek pi³ki)
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