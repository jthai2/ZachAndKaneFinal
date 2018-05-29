
using namespace std;

int turn;
int nowBrick;
int nowWood;
int nowFood;

int TurnSystemMedium(int count, int Mediumhealth)
{
int settlement = 1;

	do {
		if (Mediumhealth <= 0)
		{
			goto death;
		}
		else
		{
		begin:
			cout << " The turn has ended.. What would you like to do? " << endl;
			cout << " The turn count is " << count << endl;
			cout << " Your current health is " << Mediumhealth << endl;
			cout << " 1. Check Stats \n 2. Collect Resources \n 3. Upgrade Defenses \n 4. Build a new settlement \n 5. Feed Your People \n 6. Next Turn " << endl;
			cin >> turn;
			if (turn == 1)
			{
				cout << " You have chosen to display the stats " << endl;
				cout << "Turn Count:" << count << endl;
				cout << "Stats: " << endl;
				cout << "Brick: " << nowBrick << endl;
				cout << "Wood: " << nowWood << endl;
				cout << "Food: " << nowFood << endl;
				cout << "Settlements " << settlement << endl << endl;

			}
			else if (turn == 2)
			{
				int resourceID = 0;
				int choicemeow;

				cout << " Please enter: \n 1 - for [wood] \n 2- for [brick] \n 3 - for [food] " << endl;
				cin >> resourceID;

				switch (resourceID)
				{
				case 1:
					int woodcollected;

					cout << " You've chosen to collect wood " << endl;

					srand(time(NULL));
					woodcollected = rand() % 15 + 1;
					nowWood = nowWood + woodcollected;

					cout << " Your new total of wood is " << nowWood << endl;
					break;
				case 2:
					int brickcollected;

					cout << " You've chosen to collect brick " << endl;

					srand(time(NULL));
					brickcollected = rand() % 10 + 1;
					nowBrick = nowBrick + brickcollected;
					cout << " Your new total of brick is " << nowBrick << endl;
					break;
				case 3:
					int foodcollected;

					cout << " You've chosen to make food " << endl;

					srand(time(NULL));
					foodcollected = rand() % 15 + 1;
					nowFood = nowFood + foodcollected;

					cout << " Your new total of food is " << nowFood << endl;
					break;
				default:

					break;
				}
				count = count + 1;
			}
			else if (turn == 3)
			{
				if (nowBrick && nowWood > 4 && nowBrick && nowWood < 11)
				{
					string defup;
					cout << " Would you like a defense upgrade? " << endl;
					cin >> defup;
					if (defup == "Yes" || defup == "yes")
					{
						Mediumhealth = Mediumhealth + 5;
						cout << " Your health has been upgraded 5 point. It is now " << Mediumhealth << endl;
						nowBrick = nowBrick - 5;
						nowWood = nowWood - 5;
					}
					else
					{

					}
					count = count + 1;
				}
				else if (nowBrick && nowWood > 10 && nowBrick && nowWood < 16)
				{
					string defup;
					cout << " Would you like a defense upgrade? " << endl;
					cin >> defup;
					if (defup == "Yes" || defup == "yes")
					{
						Mediumhealth = Mediumhealth + 10;
						cout << " Your health has been upgraded 5 point. It is now " << Mediumhealth << endl;
						nowBrick = nowBrick - 10;
						nowWood = nowWood - 10;
					}
					else
					{

					}
					count = count + 1;
				}
			}
			else if (turn == 4)
			{
				if (nowWood >= 10 && nowFood >= 10 && nowBrick >= 5)
				{
					cout << "Successfully built a settlement" << endl;
					nowWood = nowWood - 10;
					nowFood = nowFood - 10;
					nowBrick = nowBrick - 5;
					settlement++;

					count = count + 1;

					goto begin;
				}
				else
				{

				}
			}
			else if (turn == 5)
			{
				cout << " You have " << nowFood << " Boxes of food " << endl;
				if (nowFood > 10)
				{
					cout << " You took 10 boxes of food and gave it to your people. " << endl;
					cout << " The people greatly enjoyed the much needed food their morale boosted " << endl;
					Mediumhealth = Mediumhealth + 17;
					nowFood = nowFood - 10;
				}
				else if (nowFood <= 10)
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
					Mediumhealth = Mediumhealth - 13;

					cout << " Oh no! A tornado hit our settlement " << endl;
				}
				else if (count == 14)
				{
					Mediumhealth = Mediumhealth - 13;

					cout << " Oh no! A tornado hit our settlement " << endl;
				}
				else if (turn == 24)
				{
					Mediumhealth = Mediumhealth - 9;

					cout << " OH no! The indians have attacked " << endl;
				}
				else if (count == 29)
				{
					Mediumhealth = Mediumhealth - 13;

					cout << " Oh no! A tornado hit our settlement " << endl;
				}
				else if (turn == 39)
				{
					Mediumhealth = Mediumhealth - 9;

					cout << " OH no! The indians have attacked " << endl;
				}
				else if (turn == 49)
				{
					Mediumhealth = Mediumhealth - 9;

					cout << " OH no! The indians have attacked " << endl;
				}
				else if (count == 52)
				{
					Mediumhealth = Mediumhealth - 13;

					cout << " Oh no! A tornado hit our settlement " << endl;
				}
			}
			else if (turn == 12345)
			{
				nowWood = nowWood + 100;
				nowFood = nowFood + 100;
				nowBrick = nowBrick + 100;
				Mediumhealth = Mediumhealth + 50;

				cout << "Turn Count:" << count << endl;
				cout << "Stats: " << endl;
				cout << "Brick: " << nowBrick << endl;
				cout << "Wood: " << nowWood << endl;
				cout << "Food: " << nowFood << endl;
				cout << "Health: " << Mediumhealth << endl << endl;

			}
		}
	} while (settlement != 3);

	if (Mediumhealth > 0)
	{
		goto survive;
	}

death:

	cout << " I'm sorry you did not survive, all of the settlers died a tragic death " << endl; 

survive:

	cout << " Congratulations you've survived and built three settlements " << endl;

	return 0;
}


int MediumLevel(int count, int Mediumhealth)
{
	cout << " The object of this level is to survive the tornadoes, indian attacks and build three settlements " << endl;
	cout << " Good luck " << endl;

	TurnSystemMedium(count, Mediumhealth);

	system("Pause");
	return 0;
}