// Authors Zach Hirst & Kane Greenwalt
// 5/7/18
// Aliens Level



using namespace std;

int Brick = 0;
int wood = 0;
int food = 0;
int newBrick;
int newWood;
int newFood;


int collectResources(int count)

{


	string colresource;


	cout << " Would you like to collect some resources? " << endl;
	cout << " Would you like to collect \n Brick \n Wood \n Food " << endl;
	cin >> colresource;

	if (colresource == "Brick" || colresource == "brick")
	{
		int brickcollected;

		srand(time(NULL));
		brickcollected = rand() % 10 + 1;
		newBrick = newBrick + brickcollected;
		cout << " Your new total of brick is " << newBrick << endl;
	}
	if (colresource == "Wood" || colresource == "wood")
	{
		int woodcollected;

		srand(time(NULL));
		woodcollected = rand() % 15 + 1;
		newWood = newWood + woodcollected;
		cout << " Your new total of wood is " << newWood << endl;
	}
	if (colresource == "Food" || colresource == "food")
	{
		int foodcollected;

		srand(time(NULL));
		foodcollected = rand() % 15 + 1;
		newFood = newFood + foodcollected;
		cout << " Your new total of food is " << newFood << endl;
	}


	system("Pause");
	return 0;
}


int TurnSystemAlien(int count, int Alienhealth)
{
	int turn;

	cout << " The turn has ended... What would you like to do? " << endl;

	do {
		if (Alienhealth <= 0)
		{
			goto death;
		}
		else
		{
			cout << " The turn count is " << count << endl;
			cout << " Your current health is " << Alienhealth << endl;
			cout << " 1. Check Stats \n 2. Collect Resources \n 3. Upgrade Defenses \n 4. Build a new settlement \n 5. Feed Your People \n 6. Next Turn " << endl;
			cin >> turn;
			if (turn == 1)
			{
				cout << " You have chosen to display the stats " << endl;
				cout << "Turn Count:" << count << endl;
				cout << "Stats: " << endl;
				cout << "Brick: " << newBrick << endl;
				cout << "Wood: " << newWood << endl;
				cout << "Food: " << newFood << endl << endl;

			}
			else if (turn == 2)
			{
				collectResources(count);
				count = count + 1;
			}
			else if (turn == 3)
			{
				if (newBrick && newWood > 4 && newBrick && newWood < 11)
				{
					string defup;
					cout << " Would you like a defense upgrade? " << endl;
					cin >> defup;
					if (defup == "Yes" || defup == "yes")
					{
						Alienhealth = Alienhealth + 5;
						cout << " Your health has been upgraded 5 point. It is now " << Alienhealth << endl;
						newBrick = newBrick - 5;
						newWood = newWood - 5;
					}
					else
					{

					}
					count = count + 1;
				}
				else if (newBrick && newWood > 10 && newBrick && newWood < 16)
				{
					string defup;
					cout << " Would you like a defense upgrade? " << endl;
					cin >> defup;
					if (defup == "Yes" || defup == "yes")
					{
						Alienhealth = Alienhealth + 10;
						cout << " Your health has been upgraded 5 point. It is now " << Alienhealth << endl;
						newBrick = newBrick - 10;
						newWood = newWood - 10;
					}
					else
					{

					}
					count = count + 1;
				}
			}
			else if (turn == 4)
			{

			}
			else if (turn == 5)
			{
				cout << " You have " << newFood << " Boxes of food " << endl;
				if (newFood > 10)
				{
					cout << " You took 10 boxes of food and gave it to your people. " << endl;
					cout << " The people greatly enjoyed the much needed food their morale boosted " << endl;
					Alienhealth = Alienhealth + 17;
					newFood = newFood - 10;
				}
				else if (newFood <= 10)
				{
					cout << " You looked in storage and noticed you did not have enough food for your people " << endl;
				}
				count = count + 1;
			}
			else if (turn == 6)
			{
				count = count + 1;
				if (count == 5)
				{
					Alienhealth = Alienhealth - 15;
					cout << " OH NO the Aliens have attacked!!! " << endl;
				}
				else if (count == 13)
				{
					Alienhealth = Alienhealth - 15;
					cout << " OH NO the Aliens have attacked!!! " << endl;
				}
				else if (count == 24)
				{
					Alienhealth = Alienhealth - 15;
					cout << " OH NO the Aliens have attacked!!! " << endl;
				}
				else if (count == 39)
				{
					Alienhealth = Alienhealth - 15;
					cout << " OH NO the Aliens have attacked!!! " << endl;
				}
				else if (count == 44)
				{
					Alienhealth = Alienhealth - 15;
					cout << " OH NO the Aliens have attacked!!! " << endl;
				}
				else
				{
				}
			}
		}
	} while (count < 50);

	if (Alienhealth >= 1)
	{
		cout << " Congratulations, you survived the alien attacks! " << endl;
		cout << " The aliens have returned to their homeworld and will not be coming back in this lifetime " << endl;
		goto exit;
	}

death:

	cout << " I'm sorry the aliens have killed your civilization and are now taking over the planet. " << endl;

exit:

	system("Pause");
	return 0;
}

int ResourcePicker()
{
	string SpecialItem;

again:
	cout << "Please select the resource you would like to specialize in. \n Brick\n Wood\n Food\n \n What this will do is for what ever resource you pick, \nyou will start with an extra 5 of that resource. \n";
	cin >> SpecialItem;

	if (SpecialItem == "Brick")
	{
		newBrick = newBrick + 5;
		cout << newBrick << endl;
	}
	else if (SpecialItem == "Wood")
	{
		newWood = newWood + 5;
		cout << newWood << endl;
	}
	else if (SpecialItem == "Food")
	{
		newFood = newFood + 5;
		cout << newFood << endl;
	}
	else if (SpecialItem != "Food" || "Wood" || "Brick")
	{
		cout << " What you have selected doesn't exist please pick again... " << endl;
		goto again;
	}
	else
	{
	}

	system("pause");
	return 0;
}

int AlienLevel(int count, int Alienhealth)
{

	cout << endl << " MWAHAHAHA you have chosen the Alien Level. \n In this level you must survive alien attacks for 25 turns " << endl;
	ResourcePicker();

	cout << " You start in America, the year is 1943. \n The scary elder lady has told you stories about the aliens that cross over the Rio Grande. " << endl;
	cout << " You must build your defences until the rounds are done. " << endl << endl;
	cout << "Stats: " << endl << "Brick: " << newBrick << endl << "Wood: " << newWood << endl << "Food: " << newFood << endl << endl;

	TurnSystemAlien(count, Alienhealth);

	system("Pause");
	return 0;
}