#include <iostream>
#include <conio.h>
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include "main.h"


void LoadTextures()
{
	
	example_surface = IMG_Load("../arkanoid_utp/tex1.bmp");
	if (example_surface == NULL)
	{
		example_surface = IMG_Load("images/tex1.bmp");
	}
	example_texture1 = SDL_CreateTextureFromSurface(Main_Renderer, example_surface);
	


}

void ShowFPS()
{
	static int a = 0;
	if (a > FPS)
	{
		cout << "FPS: " << 1.0 / FrameTime << " FrameTime: "<<FrameTime<< endl;
		a = 0;
	}
	a++;
}

void Controls()
{
	if (SDL_GetMouseState(&Mouse_X, &Mouse_Y) & SDL_BUTTON(SDL_BUTTON_LEFT))Mouse_left_click = true;
	else Mouse_left_click = false;
	if (SDL_GetMouseState(&Mouse_X, &Mouse_Y) & SDL_BUTTON(SDL_BUTTON_RIGHT))Mouse_right_click = true;
	else Mouse_right_click = false;
}

void Game()
{

}

void Rendering()
{
	ShowFPS();

	SDL_SetRenderDrawColor(Main_Renderer, 150, 0, 0, 255);
	SDL_RenderClear(Main_Renderer);

	SDL_Rect dest;
	dest = { Mouse_X, Mouse_Y, 64,64 };
	text1_size = { 0, 0, 64, 64 };
	SDL_RenderCopy(Main_Renderer, example_texture1, &text1_size, &dest);

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

		Controls();
		Game();
		Rendering();

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
		SDL_WINDOW_RESIZABLE,
		&Main_Window, &Main_Renderer);
	SDL_SetWindowTitle(Main_Window, "arkanoid_utp");
}

int main(int argc, char **argv)
{
	cout << "Konsola do debugowania: "<<endl;
	cout << "Sciezka do gry: "<<argv[0]<<endl;

	InitSDL();

	LoadTextures();

	MainLoop();

	SDL_Quit();

	cout << "Koniec programu.";
	_getch();
	return 0;
}