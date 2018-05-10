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
	
	
	cout << " Out  " << endl; 
 
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
		newBrick = Brick + 5;
		cout << newBrick << endl;
	}
	else if (SpecialItem == "Wood")
	{
		newWood = wood + 5;
		cout << newWood << endl;
	}
	else if (SpecialItem == "Food")
	{
		newFood = food + 5;
		cout << food << endl;
	}
	else if (SpecialItem != "Food" || "Wood" || "Brick")
	{
		cout << " What you have selected doesn't exist please pick again... " << endl;
		goto again;
	}
	else
	

	system("pause");
	return 0;
}

int AlienLevel(int count)
{
	

	cout << endl <<  " MWAHAHAHA you have chosen the Alien Level. \n In this level you must survive alien attacks for 25 turns " << endl;
	ResourcePicker();

		cout << " You start in America, the year is 1943. \n The scary elder lady has told you stories about the aliens that cross over the Rio Grande. " << endl;
		cout << " You must build your defences until the rounds are done. " << endl << endl;
		cout << "Stats: " << endl << "Brick: " << newBrick << endl << "Wood: " <<  newWood << endl << "Food: " << newFood << endl << endl; 

		TurnSystem(count);


	
	system("Pause");
	return 0;
}
