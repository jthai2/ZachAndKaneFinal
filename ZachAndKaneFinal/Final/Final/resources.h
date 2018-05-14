#pragma once
//Authors: Zach Hirst & Kane Greenwalt
//Program: Selecting Resources



#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include<time.h> 
#include<stdlib.h>

using namespace std;

int ResourcePicker()
{
	string SpecialItem;
	int Brick = 0;
	int wood = 0;
	int food = 0;



	cout << "Please select the resource you would like to specialize in. \n Brick\n Wood\n Food\n \n What this will do is for what ever resource you pick, \nyou will start with an extra 5 of that resource. \n";
	cin >> SpecialItem;

	if (SpecialItem == "Brick")
	{
		int newBrick = Brick + 5;
		cout << newBrick << endl;
	}
	if (SpecialItem == "Wood")
	{
		int newWood = wood + 5;
		cout << newWood;
	}
	if (SpecialItem == "Food")
	{
		int newFood = food + 5;
		cout << food;
	}

	system("pause");
	return 0;
}
int resources()
{
	ResourcePicker();
}