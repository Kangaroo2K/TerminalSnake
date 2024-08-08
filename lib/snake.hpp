#pragma once

#include<pair>
#include<vector>

class Snake
{
	private:
		std::vector<std::pair<int, int>> snakePos;

	public:
		Snake(std::pair<int, int>> spawnPos);

		Move(char c);
}
