#include <utility>
#include <vector>

#include "snake.hpp"

//PRIVATE
void Snake::ShiftSnakeBody()
{
	for(int i = snake.size() - 1; i > 1; i--)
	{
		snake[i] = snake[i - 1];
	}
}

//PUBLIC
Snake::Snake(int y, int x)
{
	snake.push_back(std::pair(y, x));
}

void Snake::Move(char c)
{
	switch(c)
	{
		case 'w':
			ShiftSnakeBody();
			snake[0].first -= 1;
			break;
		case 'a':
			ShiftSnakeBody();
			snake[0].second -= 1;
			break;
		case 's':
			ShiftSnakeBody();
			snake[0].first += 1;
			break;
		case 'd':
			ShiftSnakeBody();
			snake[0].second += 1;
			break;
	}
}
