#include <iostream>

#include "../lib/snake.hpp"

int main()
{
	Snake snake(25, 25);

	std::cout << snake.snake[0].first << " " << snake.snake[0].second << '\n';

	snake.Move('w');

	std::cout << snake.snake[0].first << " " << snake.snake[0].second << '\n';

	return 0;
}
