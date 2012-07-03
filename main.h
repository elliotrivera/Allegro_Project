// This will include all the headers and cpps.

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 720

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <iostream>

#include "game.h"
#include "window.h"
#include "font.h"

static Game *FGame = new Game();
Game * GetGame() { return FGame; }
static Window *FWindow = new Window();
Window * GetWindow() { return FWindow; }
static Font *FFont = new Font();
Font * GetFont() { return FFont; }

static ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_DISPLAY * GetDisplay() { return display; }
static ALLEGRO_FONT *font = NULL;
ALLEGRO_FONT * GetBufferFont() { return font; }

//Game* GetGame();