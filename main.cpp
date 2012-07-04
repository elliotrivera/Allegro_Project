
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
	al_clear_to_color(al_map_rgb(0,0,0)); // Backbuffer color
	GetCounter()->Init("C:\\data\\fonts\\AmericanUncDRegular.ttf", 12, 0);
	while(GetGame() && GetGame()->PAUSE == false)
	{
		render = true;
		GetCounter()->Process();

			if(render)
			{
				render = false;
				GetCounter()->DrawCounter();
				GetWindow()->FlipDisplay();
			}
	}
	getchar();
	FGame->ShutDown();
	return 0;
}