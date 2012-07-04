#include "main.h"

using namespace std;

Window::Window()
{
}

Window::~Window()
{
	cout << "Window deleted.." << endl;
}

void Window::SetupWindow(int opt1, int opt2, int opt3)
{

	al_set_new_display_option(opt1, opt2, opt3);

}

void Window::MakeWindow(int width, int height)
{
	display = al_create_display(width, height);
	cout << "Window created.." << endl;
	al_clear_to_color(al_map_rgb(0,0,0));
}

void Window::FlipDisplay()
{
	al_flip_display();
	al_clear_to_color(al_map_rgb(0,0,0));
}

void Window::DeleteWindow()
{
	al_destroy_display(display);
	delete this;
}