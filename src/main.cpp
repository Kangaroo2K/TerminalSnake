#include<iostream> //for testing

#include"../lib/render.hpp"
#include"../lib/border.hpp"
#include"../lib/input.hpp"

int main()
{
	int height = 50;
	int width = 50;

	MakeGrid(height, width);

	while(true)
	{
		Clear();
		
		AddToDrawStack(MakeBorder(height, width, '\033[31m#'));

		Draw();
	}

	return 0;
}
