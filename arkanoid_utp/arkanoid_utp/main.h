#pragma once

//Klatki na sekund�. Mo�na zmienia�
double FPS = 300.0;

SDL_Window * Main_Window;
SDL_Renderer * Main_Renderer;
SDL_Event Main_Event;
bool ProgramIsOn = true;

int TimeNow, TimeOld = 1; //In miliseconds
double FrameTime;

//Sta�a rozdzielczo��
int Resolution_X = 800;
int Resolution_Y = 600;

int Mouse_X;
int Mouse_Y;
bool Mouse_left_click = false;
bool Mouse_right_click = false;
bool previousState = false;//do myszy

bool PressedF10 = false;
bool PressedLeft = false;
bool PressedRight = false;

//Prototypy
void LoadAllTextures();
void Menu();
void PlatformSelect();
void GameInProgress();
void Editor();


//Zmienna okre�laj�ca gdzie aktualnie jeste�my:
//1-Menu  2-Gra 3-Wyb�r platformy ... mozna dodawac kolejne np. tablica highscore

int GameState = 1;
char *ChosenPlatform = "podest1"; //podest1-10 kolor platformy
