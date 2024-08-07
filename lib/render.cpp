#include<iostream>
#include<vector>

#include"render.hpp"

std::vector<std::vector<char>> drawGrid;

void MakeGrid(int height, int width)
{
	drawGrid.clear();

	for(int i = 0; i < height; i++)
	{
		drawGrid.push_back(std::vector<char>());

		for(int j = 0; j < width; j++)
		{
			drawGrid[i].push_back(' ');
		}
	}
}

void AddToDrawStack(std::vector<std::vector<char>> queue)
{
	for(int i = 0; i < queue.size(); i++)
	{
		for(int j = 0; j < queue[i].size(); j++)
		{
			if(drawGrid[i][j] == ' ')
			{
				drawGrid[i][j] = queue[i][j];
			}
		}
	}
}

void Draw()
{
	for(int i = 0; i < drawGrid.size(); i++)
	{
		for(int j = 0; j < drawGrid[i].size(); j++)
		{
			std::cout << drawGrid[i][j];
		}

		std::cout << '\n';
	}
}
