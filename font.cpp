#include "main.h"

using namespace std;

Font::Font()
{

}

Font::~Font()
{
	cout << "font class has been deconstructed.." << endl;
	delete this;
}

void Font::LoadFont(char const * link, int size, int option)
{
	font = al_load_ttf_font(link, size, option);
	FGame->ShutDown();
}