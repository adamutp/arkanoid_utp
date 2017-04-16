#include <iostream>
#include "graphics.h"


class Texture
{
public:
	SDL_Rect size;
	SDL_Texture * Txt;
	SDL_Surface * Surf;
	Texture(int x, int y);
	void DrawTexture(int x, int y);
};

Texture::Texture(int x, int y)
{
	size = { 0, 0, x, y };
	std::cout << "Wczytano teksture"<<std::endl;
}

void Texture::DrawTexture(int x, int y)
{
	SDL_Rect dest = { x, y, size.w, size.h };
	SDL_RenderCopy(Main_Renderer, Txt, &size, &dest);
}
//klocki:
Texture k1(40, 20);
Texture k2(40, 20);
Texture k3(40, 20);
Texture k4(40, 20);
Texture k5(40, 20);
Texture k6(40, 20);
Texture k7(40, 20);
Texture k8(40, 20);
Texture k9(40, 20);
Texture k10(40, 20);
Texture k11(40, 20);
Texture k12(40, 20);
Texture k13(40, 20);
Texture k14(40, 20);
Texture k15(40, 20);
Texture k16(40, 20);
Texture k17(40, 20);
Texture k18(40, 20);
Texture k19(40, 20);
Texture k20(40, 20);

//podest:
Texture podest1(120, 20);
Texture podest2(120, 20);
Texture podest3(120, 20);
Texture podest4(120, 20);
Texture podest5(120, 20);
Texture podest6(120, 20);
Texture podest7(120, 20);
Texture podest8(120, 20);
Texture podest9(120, 20);
Texture podest10(120, 20);

//tlo w grze:
Texture background(800, 600);
SDL_Surface * Black;
SDL_Texture * Black_T;

//pi³ka:
Texture pilka(15, 15);
Texture pilka1(15, 15);
Texture pilka2(15, 15);

//menu:
Texture menu(800, 600);
Texture przycisk(40, 40);
Texture menu2(800, 600);

void LoadAllTextures()
{
	//k1.Surf = IMG_Load(k1_1); //z projektowego pliku
	if (k1.Surf == NULL)
	{
		k1.Surf = IMG_Load(k1_2); //z folderu gdzie jest .exe
	}
	k1.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k1.Surf);
	//============================================================
	k2.Surf = IMG_Load(k2_1); 
	if (k2.Surf == NULL)
	{
		k2.Surf = IMG_Load(k2_2); 
	}
	k2.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k2.Surf);

	//============================================================
	k3.Surf = IMG_Load(k3_2);
	k3.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k3.Surf);
	//============================================================
	k4.Surf = IMG_Load(k4_2);
	k4.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k4.Surf);
	//============================================================
	k5.Surf = IMG_Load(k5_2);
	k5.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k5.Surf);
	//============================================================
	k6.Surf = IMG_Load(k6_2);
	k6.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k6.Surf);
	//============================================================
	k7.Surf = IMG_Load(k7_2);
	k7.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k7.Surf);
	//============================================================
	k8.Surf = IMG_Load(k8_2);
	k8.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k8.Surf);
	//============================================================
	k9.Surf = IMG_Load(k9_2);
	k9.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k9.Surf);
	//============================================================
	k10.Surf = IMG_Load(k10_2);
	k10.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k10.Surf);
	//============================================================
	k11.Surf = IMG_Load(k11_2);
	k11.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k11.Surf);
	//============================================================
	k12.Surf = IMG_Load(k12_2);
	k12.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k12.Surf);
	//============================================================
	k13.Surf = IMG_Load(k13_2);
	k13.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k13.Surf);
	//============================================================
	k14.Surf = IMG_Load(k14_2);
	k14.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k14.Surf);
	//============================================================
	k15.Surf = IMG_Load(k15_2);
	k15.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k15.Surf);
	//============================================================
	k16.Surf = IMG_Load(k16_2);
	k16.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k16.Surf);
	//============================================================
	k17.Surf = IMG_Load(k17_2);
	k17.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k17.Surf);
	//============================================================
	k18.Surf = IMG_Load(k18_2);
	k18.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k18.Surf);
	//============================================================
	k19.Surf = IMG_Load(k19_2);
	k19.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k19.Surf);
	//============================================================
	k20.Surf = IMG_Load(k20_2);
	k20.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k20.Surf);

	//PODEST:

	//============================================================
	podest1.Surf = IMG_Load(podest1_2);
	podest1.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest1.Surf);
	//============================================================
	podest2.Surf = IMG_Load(podest2_2);
	podest2.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest2.Surf);
	//============================================================
	podest3.Surf = IMG_Load(podest3_2);
	podest3.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest3.Surf);
	//============================================================
	podest4.Surf = IMG_Load(podest4_2);
	podest4.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest4.Surf);
	//============================================================
	podest5.Surf = IMG_Load(podest5_2);
	podest5.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest5.Surf);
	//============================================================
	podest6.Surf = IMG_Load(podest6_2);
	podest6.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest6.Surf);
	//============================================================
	podest7.Surf = IMG_Load(podest7_2);
	podest7.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest7.Surf);
	//============================================================
	podest8.Surf = IMG_Load(podest8_2);
	podest8.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest8.Surf);
	//============================================================
	podest9.Surf = IMG_Load(podest9_2);
	podest9.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest9.Surf);
	//============================================================
	podest10.Surf = IMG_Load(podest10_2);
	podest10.Txt = SDL_CreateTextureFromSurface(Main_Renderer, podest10.Surf);

	//PILKI:

	//============================================================
	pilka.Surf = IMG_Load(pilka_2);
	pilka.Txt = SDL_CreateTextureFromSurface(Main_Renderer, pilka.Surf);
	//============================================================
	pilka1.Surf = IMG_Load(pilka1_2);
	pilka1.Txt = SDL_CreateTextureFromSurface(Main_Renderer, pilka1.Surf);
	//============================================================
	pilka2.Surf = IMG_Load(pilka2_2);
	pilka2.Txt = SDL_CreateTextureFromSurface(Main_Renderer, pilka2.Surf);

	//TLO I MENU

	//============================================================
	background.Surf = IMG_Load(background_2);
	background.Txt = SDL_CreateTextureFromSurface(Main_Renderer, background.Surf);
	
	//============================================================
	Black = SDL_LoadBMP("images/ingame/black.bmp");
	Black_T = SDL_CreateTextureFromSurface(Main_Renderer, Black);
	SDL_BlendMode blending = SDL_BLENDMODE_BLEND;
	SDL_SetTextureBlendMode(Black_T, blending);

	//============================================================
	menu.Surf = IMG_Load(menu2_2);
	menu.Txt = SDL_CreateTextureFromSurface(Main_Renderer, menu.Surf);
	//============================================================
	menu2.Surf = IMG_Load(menu1_1);
	menu2.Txt = SDL_CreateTextureFromSurface(Main_Renderer, menu2.Surf);
	//============================================================
	przycisk.Surf = IMG_Load(button_2);
	przycisk.Txt = SDL_CreateTextureFromSurface(Main_Renderer, przycisk.Surf);
}

void PutTexture(char *texture_name, int x, int y)
{
	if (texture_name == "k1")
	{
		k1.DrawTexture(x, y);
	}
	else if (texture_name == "k2") k2.DrawTexture(x, y);
	else if (texture_name == "k3") k3.DrawTexture(x, y);
	else if (texture_name == "k4") k4.DrawTexture(x, y);
	else if (texture_name == "k5") k5.DrawTexture(x, y);
	else if (texture_name == "k6") k6.DrawTexture(x, y);
	else if (texture_name == "k7") k7.DrawTexture(x, y);
	else if (texture_name == "k8") k8.DrawTexture(x, y);
	else if (texture_name == "k9") k9.DrawTexture(x, y);
	else if (texture_name == "k10") k10.DrawTexture(x, y);
	else if (texture_name == "k11") k11.DrawTexture(x, y);
	else if (texture_name == "k12") k12.DrawTexture(x, y);
	else if (texture_name == "k13") k13.DrawTexture(x, y);
	else if (texture_name == "k14") k14.DrawTexture(x, y);
	else if (texture_name == "k15") k15.DrawTexture(x, y);
	else if (texture_name == "k16") k16.DrawTexture(x, y);
	else if (texture_name == "k17") k17.DrawTexture(x, y);
	else if (texture_name == "k18") k18.DrawTexture(x, y);
	else if (texture_name == "k19") k19.DrawTexture(x, y);
	else if (texture_name == "k20") k20.DrawTexture(x, y);


	else if (texture_name == "podest1") podest1.DrawTexture(x, y);
	else if (texture_name == "podest2") podest2.DrawTexture(x, y);
	else if (texture_name == "podest3") podest3.DrawTexture(x, y);
	else if (texture_name == "podest4") podest4.DrawTexture(x, y);
	else if (texture_name == "podest5") podest5.DrawTexture(x, y);
	else if (texture_name == "podest6") podest6.DrawTexture(x, y);
	else if (texture_name == "podest7") podest7.DrawTexture(x, y);
	else if (texture_name == "podest8") podest8.DrawTexture(x, y);
	else if (texture_name == "podest9") podest9.DrawTexture(x, y);
	else if (texture_name == "podest10") podest10.DrawTexture(x, y);

	else if (texture_name == "background") background.DrawTexture(x, y);
	else if (texture_name == "menu") menu.DrawTexture(x, y);
	else if (texture_name == "menu2") menu2.DrawTexture(x, y);
	else if (texture_name == "pilka") pilka.DrawTexture(x, y);
	else if (texture_name == "pilka1") pilka1.DrawTexture(x, y);
	else if (texture_name == "pilka2") pilka2.DrawTexture(x, y);
	else if (texture_name == "przycisk") przycisk.DrawTexture(x, y);
	else
	{
		std::cout << "Zla nazwa tekstury" << std::endl;
	}
}

extern double FrameTime;
extern int TimeNow, TimeOld;
extern double FPS;
void ScrToBlack() //0.5s przejœcia
{ 
	Black = SDL_LoadBMP("images/ingame/black.bmp");
	Black_T = SDL_CreateTextureFromSurface(Main_Renderer, Black);
	SDL_BlendMode blending = SDL_BLENDMODE_BLEND;
	SDL_SetTextureBlendMode(Black_T, blending);
	double alpha = 0;
	SDL_SetTextureAlphaMod(Black_T, alpha);
	SDL_Rect src = { 0, 0, 800, 600 };
	bool end = false;
	double time=0;
	while (!end)
	{
		TimeNow = SDL_GetTicks();
		FrameTime = (TimeNow - TimeOld) / 1000.0;
		time = time + FrameTime;
		if (time > 0.5) 
			end = true;
		alpha = alpha + FrameTime * 20;
		std::cout << alpha << std::endl;
		SDL_SetTextureAlphaMod(Black_T, alpha);
		SDL_RenderCopy(Main_Renderer, Black_T, &src, &src);
		SDL_RenderPresent(Main_Renderer);
		TimeOld = TimeNow;
		SDL_Delay(1 / FPS);
	}
}

extern bool TriggerBlackToScr;
double BTSTime = 0;
double BTSAlpha = 255;
void BlackToScr() //0.5s przejœcia
{
	SDL_SetTextureAlphaMod(Black_T, BTSAlpha);
	SDL_Rect src = { 0, 0, 800, 600 };
	BTSTime = BTSTime + FrameTime;
	BTSAlpha = BTSAlpha - FrameTime * 255;
	std::cout << BTSAlpha << " ";
	if (BTSAlpha < 0)BTSAlpha = 0;
	SDL_SetTextureAlphaMod(Black_T, BTSAlpha);
	SDL_RenderCopy(Main_Renderer, Black_T, &src, &src);
	if (BTSTime > 1)
	{
		TriggerBlackToScr = false;
		BTSAlpha = 255;
		BTSTime = 0;
	}
}
