
#include "main.h"

using namespace std;

int main()
{
	bool render = false;

	if (!GetGame()->Init())
	{
		cout << "ERROR: " << "failed to Initalize." << endl;
		FGame->ShutDown();
	}
	else if(GetGame()->Init())
	{
		cout << "Engine initalized successfully." << endl;
	}

	FWindow->MakeWindow(SCREEN_WIDTH, SCREEN_HEIGHT);
	GetFont()->LoadFont("C:\\data\\fonts\\AmericanUncDRegular.ttf", 12, 0);

	al_clear_to_color(al_map_rgb(0,0,0)); // Backbuffer color
	//font = al_load_ttf_font("C:\\data\\fonts\\AmericanUncDRegular.ttf", 12, 0);

	double fps = 0;
	int frames_done = 0;
	double old_time = al_get_time();

	while(GetGame() && GetGame()->PAUSE == false)
	{
		render = true;

			double game_time = al_get_time();
			if(game_time - old_time >= 1.0)
			{
				fps = frames_done / (game_time - old_time);
				frames_done = 0;
				old_time = game_time;
			}

			frames_done++;

			if(render)
			{
				render = false;

				al_draw_textf(GetFont()->GetFont(), al_map_rgb(255, 255, 255), 850, 5, 0, "FPS: %f", fps);

				GetWindow()->FlipDisplay();
			}

	}

	getchar();
	FGame->ShutDown();
	return 0;
}