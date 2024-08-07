#include<iostream>
#include<vector> //for testing

#include"../lib/render.hpp"
#include"../lib/border.hpp"

int main()
{
	int height = 50;
	int width = 50;

	MakeGrid(height, width);

	AddToDrawStack(MakeBorder(height, width, '#'));
	
	Draw();

	return 0;
}
