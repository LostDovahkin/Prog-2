#include "Game.h"

int main()
{
	
	Game game;
	

	while (game.getPlaying())
	{
		game.Map();
	}

	return 0;
}