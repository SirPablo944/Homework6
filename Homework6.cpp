// TestApplication.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Electronics.h"
using namespace std;


int main(int argc, char *argv[])
{
	bool choose = true;
	Player* player = new Player(10, 15);
	Buttonphone* buttonphone = new Buttonphone(16, 80);
	Smartphone* smartphone = new Smartphone(12, 20, 100);
	Fridge* fridge = new Fridge(50, 200);
	Dishwasher* dishwasher = new Dishwasher(60, 1);
	IElectronics* warehouse[5] = { player, buttonphone, smartphone, fridge, dishwasher };
	cout << "Welcome to electronic warehouse!" << endl
		<< "Choose your product to show specs:" << endl
		<< "1 - Player" << endl
		<< "2 - Buttonphone" << endl
		<< "3 - Smartphone" << endl
		<< "4 - Fridge" << endl
		<< "5 - Dishwasher" << endl
		<< "6 - Close program" << endl;

	int userInput;
	while (choose)
	{
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			warehouse[0]->showSpec();
			break;
		case 2:
			warehouse[1]->showSpec();
			break;
		case 3:
			warehouse[2]->showSpec();
			break;
		case 4:
			warehouse[3]->showSpec();
			break;
		case 5:
			warehouse[4]->showSpec();
			break;
		case 6:
			cout << "Goodbye!" << endl;
			choose = false;
			break;
		}
	}

	delete player;
	delete buttonphone;
	delete smartphone;
	delete fridge;
	delete dishwasher;

	return 0;
}
