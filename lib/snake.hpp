#pragma once

#include<utility>
#include<vector>

class Snake
{
	public: //will be private
		std::vector<std::pair<int, int>> snake;

		void ShiftSnakeBody();

	public:
		Snake(int y, int x);
		void Move(char c);
};
