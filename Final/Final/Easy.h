//Authors: Kane & Zach
//Date:05/11/18
//Program: Easy Mode

#include<iostream>
#include<string> 
#include<cstdlib>
#include<time.h>
#include<iomanip>



using namespace std;


int Collector()
{
	int Brick = 0;
	int Wood = 0;
	int Food = 0;
	int Resource;



	cout << "What resouce would you like to collect \nBrick - 1\nWood - 2\nFood - 3" << endl;
	cin >> Resource;


	if (Resource == 1)
	{
		srand(time(NULL));
		Brick = rand() % 10 + 1;
		cout << "You know have " << Brick << " Brick" << endl;


	}
	if (Resource == 2)
	{
		srand(time(NULL));
		Wood = rand() % 15 + 1;
		cout << "You know have " << Wood << " Wood" << endl;
	}
	if (Resource == 3)
	{
		srand(time(NULL));
		Food = rand() % 15 + 1;
		cout << "You know have " << Food << " Food" << endl;
	}
	system("Pause");
	return 0;
}

int TurnSystem(int count)
{
	int turn;

	cout << " The turn has ended... What would you like to do? " << endl;

	do {

		cout << " The turn count is " << count << endl;
		cout << " 1. Check Stats \n 2. Collect Resources \n 3. Upgrade Defenses \n 4. Build a new settlement \n 5. Next Turn " << endl;
		cin >> turn;
		if (turn == 1)
		{
			cout << " You have chosen to display the stats " << endl;
			cout << "Stats: " << endl << "Brick: " << newBrick << endl << "Wood: " << newWood << endl << "Food: " << newFood << endl << endl;

		}
		else if (turn == 2)
		{

		}
		else if (turn == 3)
		{

		}
		else if (turn == 4)
		{

		}
		else if (turn == 5)
		{

			count = count + 1;
		}
	} while (count < 26);

	system("Pause");
	return 0;
}

int Easy(int count)
{
	int settlement = 0;



	Collector();

	TurnSystem(count);





	return 0;
}

