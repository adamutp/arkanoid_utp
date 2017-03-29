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

//pi³ka:
Texture pilka(15, 15);
Texture pilka1(15, 15);
Texture pilka2(15, 15);

//menu:
Texture menu(800, 600);
Texture przycisk(40, 40);

void LoadAllTextures()
{
	k1.Surf = IMG_Load(k1_1); //z projektowego pliku
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
}

void PutTexture(char *texture_name, int x, int y)
{
	if (texture_name == "k1")
	{
		k1.DrawTexture(x, y);
	}
	else
	{
		std::cout << "Podales zla nazwe tekstury" << std::endl;
	}
}