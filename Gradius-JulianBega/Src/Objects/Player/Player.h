#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include "Global/Global.h"

namespace RlGraJB
{
#define PLAYER_MAX_LIFE         5

	struct Player {
		Vector2 position;
		Vector2 size;
		int life;
	};

	Player InitPlayer(int posX, int posY, int width, int height);
}
#endif
