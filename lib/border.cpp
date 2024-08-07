#include<vector>

std::vector<std::vector<char>> MakeBorder(int height, int width, char c)
{
	std::vector<std::vector<char>> borderGrid;

	for(int i = 0; i < height; i++)
	{
		borderGrid.push_back(std::vector<char>());

		for(int j = 0; j < width; j++)
		{
			borderGrid[i].push_back(' ');
			
			if(i == 0 || i == height - 1 || j == 0 || j == width - 1)
			{
				borderGrid[i][j] = c;
			}
		}
	}

	return borderGrid;
}
