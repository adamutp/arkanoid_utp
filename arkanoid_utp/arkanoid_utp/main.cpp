#include <iostream>
#include <conio.h>
#include <SDL.h>
#include <string>

#define FPS 60.0
using namespace std;

SDL_Window * Main_Window;
SDL_Renderer * Main_Renderer;
SDL_Event Main_Event;
SDL_Surface * example_surface;
SDL_Texture * example_texture1;
SDL_Rect text1_size;
SDL_Texture * example_texture2;
bool ProgramIsOn = true;

int TimeNow, TimeOld = 1 ; //In miliseconds
double FrameTime;

int Resolution_X = 800;
int Resolution_Y = 600;

int Mouse_X;
int Mouse_Y;

void LoadTextures()
{
	
	example_surface = SDL_LoadBMP("../arkanoid_utp/tex1.bmp");
	if (example_surface == NULL)
	{
		example_surface = SDL_LoadBMP("images/tex1.bmp");
	}
	example_texture1 = SDL_CreateTextureFromSurface(Main_Renderer, example_surface);

}

void ShowFPS()
{
	static int a = 0;
	if (a > FPS)
	{
		cout << "FPS: " << 1.0 / FrameTime << endl;
		a = 0;
	}
	a++;
}

void Controls()
{

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
	dest = { 200, 200, 234, 201 };
	text1_size = { 0, 0, 234, 201 };
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
		What's first:

		1. I/O Devices
		2. Game calculations
		3. Rendering
		*/


		TimeNow = SDL_GetTicks();

		Controls();
		Game();
		Rendering();

		FrameTime = (TimeNow - TimeOld) / 1000.0;
		TimeOld = TimeNow;

		int RenderTime = SDL_GetTicks() - TimeNow;
		SDL_Delay(1000/FPS - RenderTime);



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