#include "graphics.h"

class Texture
{
public:
	SDL_Rect size;
	SDL_Texture * Txt;
	SDL_Surface * Surf;
	Texture(int x, int y);
	void PutTexture(int x, int y);
};

Texture::Texture(int x, int y)
{
	size = { 0, 0, x, y };
	std::cout << "Wczytano teksture"<<std::endl;
}

void Texture::PutTexture(int x, int y)
{
	SDL_Rect dest = { x, y, size.w, size.h };
	SDL_RenderCopy(Main_Renderer, Txt, &size, &dest);
}

void LoadAllTextures()
{
	Texture k1(40, 20);
	k1.Surf = IMG_Load(k1_1); //z projektowego pliku
	if (k1.Surf == NULL)
	{
		k1.Surf = IMG_Load(k1_2); //z folderu gdzie jest .exe
	}
	k1.Txt = SDL_CreateTextureFromSurface(Main_Renderer, k1.Surf);
}