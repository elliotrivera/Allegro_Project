#include "main.h"

using namespace std;

bool Game::Init()
{

	al_init();
	al_init_font_addon();
	cout << "font addon initalized.." << endl;
	al_init_ttf_addon();
	cout << "tff addon initalized.." << endl;

	this->PAUSE = false;
	return true;
}

void Game::InitJoystick()
{
	al_install_joystick();
}

void Game::InitMouse()
{
	al_install_mouse();
}

void Game::InitKeyboard()
{
	al_install_keyboard();
}

void Game::ShutDown()
{
	delete this;
	delete FWindow;
}

Game::~Game()
{
	cout << "Shutting down.." << endl;
}

Game::Game()
{

}