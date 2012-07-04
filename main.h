// This will include all the headers and cpps.

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 720

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <iostream>
#include <sstream>

#include "game.h"
#include "window.h"
#include "font.h"

static Game *FGame = new Game();
Game * GetGame();
static Window *FWindow = new Window();
Window * GetWindow();
static Font *FFont = new Font();
Font * GetFont();

static ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_DISPLAY * GetDisplay();
static ALLEGRO_EVENT_QUEUE *event_queue = NULL;
/*static ALLEGRO_FONT *font = NULL;
ALLEGRO_FONT * GetFontBuffer();*/

//Game* GetGame();