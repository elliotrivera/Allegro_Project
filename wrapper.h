class FpsCounter
{
public:
	FpsCounter();
	~FpsCounter();

	void Init(char const*, int, int);

	void Process();

	void DrawCounter();

	double game_time;
	double fps;
	int frames_done;
	double old_time;
	ALLEGRO_FONT * myfont;
};

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