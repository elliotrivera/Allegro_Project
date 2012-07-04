#include "main.h"

using namespace std;

FpsCounter::FpsCounter()
{
	fps = 0;
	frames_done = 0;
}

FpsCounter::~FpsCounter()
{
	cout << "Fps counter removed.." << endl;
	delete this;
	delete this->myfont;
}

void FpsCounter::Init(char const * link, int size, int opt1)
{
	old_time = al_get_time();
	myfont = al_load_ttf_font(link, size, opt1);
	//"C:\\data\\fonts\\AmericanUncDRegular.ttf"
}

void FpsCounter::Process()
{
	game_time = al_get_time();
	if(game_time - old_time >= 1.0)
	{
		fps = frames_done / (game_time - old_time);
		frames_done = 0;
		old_time = game_time;
	}

	frames_done++;

}

void FpsCounter::DrawCounter()
{
	al_draw_textf(myfont, al_map_rgb(255, 255, 255), 850, 5, 10, "FPS: %f", fps);
}

		/*	double game_time = al_get_time();
			if(game_time - old_time >= 1.0)
			{
				fps = frames_done / (game_time - old_time);
				frames_done = 0;
				old_time = game_time;
			}

			frames_done++;*/

	/*double fps = 0;
	int frames_done = 0;
	double old_time = al_get_time();*/
