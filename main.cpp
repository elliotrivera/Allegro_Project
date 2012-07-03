
#include "main.h"

using namespace std;

void UpdateScreen()
{

}

int main()
{
	if (!FGame->Init())
	{
		cout << "ERROR: " << "failed to Initalize." << endl;
		FGame->ShutDown();
	}
	else if(FGame->Init())
	{
		cout << "Engine initalized successfully." << endl;
	}

	FWindow->MakeWindow(SCREEN_WIDTH, SCREEN_HEIGHT);
	FFont->LoadFont("C:\\data\\fonts\\AmericanUncDRegular.ttf", 12, 0);

	al_clear_to_color(al_map_rgb(0,0,0)); // Backbuffer color
	//font = al_load_ttf_font("C:\\data\\fonts\\AmericanUncDRegular.ttf", 12, 0);

	while(FGame && FGame->PAUSE == false)
	{
		FWindow->FlipDisplay();
		if (font)
		{
			al_draw_text(font, al_map_rgb (255, 255, 255), 850, 0, ALLEGRO_ALIGN_CENTRE, "FPS");
		}
		else
		{
			cout << "FONT not loaded.shit" << endl;
		}
	}

	getchar();
	FGame->ShutDown();
	return 0;
}