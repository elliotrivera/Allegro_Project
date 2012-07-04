#include "main.h"

using namespace std;

Font::Font()
{

}

Font::~Font()
{
	cout << "font class has been deconstructed.." << endl;
	delete this;
	delete this->font;
}

ALLEGRO_FONT * Font::GetFont()
{
	return font;
}

void Font::LoadFont(char const * link, int size, int option)
{
	font = al_load_ttf_font(link, size, option);
	cout << "font..[" << link << "] loaded.." << endl;
}

void Font::DrawText()
{

}