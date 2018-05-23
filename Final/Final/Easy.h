//Authors: Kane & Zach
//Date:05/11/18
//Program: Easy Mode

#include<iostream>
#include<string> 
#include<cstdlib>
#include<time.h>
#include<iomanip>



using namespace std;
int Wood = 0;
int Food = 0;
int health = 20;
int settlement = 0;
int Collector()//collect resources
{
	
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
int Defence()
{
	int upgrade1;
	int defcount = 0;

	do{
		cout << "Are you sure you would like to upgrade? \n1-Yes\n2-No" << endl;
		cin >> upgrade1;
		if (upgrade1 == 10)
		{
			health++;

		}



	} while (defcount == 1);
	return 0;
}//upgrade defences
int settlementBuild()//build a settlement
{
	cout << "To build a settlement it will take \n10 wood\n5 brick\n10 food" << endl;

	if (Wood >= 10 && Food >= 10 && Brick >= 5)
	{
		cout << "Successfully built a settlement" << endl;
		Wood =  Wood - 10;
		Food -= 10;
		Brick -= 5;
		settlement++;
		system("pause");
		return 0;
	}
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
			cout << "Stats: " << endl << "Brick: " << Brick << endl << "Wood: " << Wood << endl << "Food: " << Food << endl << "Health:" << health << endl << "Settlements:" << settlement << endl;

		}
		else if (turn == 2)
		{
			Collector();
		}
		else if (turn == 3)
		{
			Defence();
		}
		else if (turn == 4)
		{
			settlementBuild();
		}
		else if (turn == 5)
		{

			count = count + 1;
		}
		else if (count == 20)
		{
			health = health =- 20;
		}
	} while (count < 26);

	system("Pause");
	return 0;
}

int Easy(int count)
{
	TurnSystem(count);
	return 0;
}

