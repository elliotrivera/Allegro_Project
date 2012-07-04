class Font
{
public:
	Font();
	~Font();
	void LoadFont(char const*, int, int);
	void DrawText();
	ALLEGRO_FONT * GetFont();

private:
	ALLEGRO_FONT * font;
};