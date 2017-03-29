#pragma once

#define FPS 60.0
using namespace std;

SDL_Window * Main_Window;
SDL_Renderer * Main_Renderer;
SDL_Event Main_Event;
bool ProgramIsOn = true;

int TimeNow, TimeOld = 1; //In miliseconds
double FrameTime;

int Resolution_X = 800;
int Resolution_Y = 600;

int Mouse_X;
int Mouse_Y;
bool Mouse_left_click = false;
bool Mouse_right_click = false;

//Tekstury

SDL_Surface * example_surface;
SDL_Texture * example_texture1;
SDL_Rect text1_size;
SDL_Texture * example_texture2;

//Prototypy

void LoadAllTextures();

//Z pliku graphics.cpp
extern void PutTexture(char *, int, int);