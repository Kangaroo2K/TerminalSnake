#include<iostream>
#include<vector> //for testing

#include"../lib/render.hpp"

int main()
{
	MakeGrid(50, 50);
	
	extern std::vector<std::vector<char>> drawGrid; //for testing

	std::vector<std::vector<char>> drawTestGrid(50, std::vector<char>(50, ' ')); //for testing
	
	//for testing
	for(int i = 0; i < drawTestGrid.size(); i++)
	{
		drawTestGrid[i][i] = 'b';
	}

	AddToDrawStack(drawTestGrid);//for testing

	//for testing
	for(int i = 0; i < drawGrid.size(); i++)
	{
		for(int j = 0; j < drawGrid[i].size(); j++)
		{
			std::cout << drawGrid[i][j];
		}

		std::cout << '\n';
	}

	return 0;
}
