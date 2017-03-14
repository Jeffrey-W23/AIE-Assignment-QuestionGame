#include <iostream>
#include "MainMenu.h"
using namespace std;

MainMenu::MainMenu()
{
}

MainMenu::~MainMenu()
{
}

bool MainMenu::StartMenu()
{
	int menuOption;

	PrintMenu();

	cin >> menuOption;
	cin.clear();
	cin.ignore(999999, '\n');
	cout << endl;

	if (menuOption == 1)
	{
		game.MainFunction();
		menuOption = 0;
		return true;
	}
	else if (menuOption == 2)
	{
		return false;
	}
	else
	{
		system("cls");
		cout << "Please enter a valid menu option dude, this isn't a game." << endl << endl;
		cout << "Enter any value you want to return." << endl;
		cin >> menuOption;
		cin.clear();
		cin.ignore(999999, '\n');
		return true;
	}
}

void MainMenu::PrintMenu()
{
	system("cls");
	cout << "                                                                                                        " << endl;
	cout << "                                                                                                        " << endl;
	cout << "                                                                                                        " << endl;
	cout << "                                                                                                        " << endl;
	cout << "        ____    __    ____  _______  __        ______   ______   .___  ___.  _______    .___________.  ______   " << endl;
	cout << "        \\   \\  /  \\  /   / |   ____||  |      /      | /  __  \\  |   \\/   | |   ____|   |           | /  __  \\  " << endl;
	cout << "         \\   \\/    \\/   /  |  |__   |  |     |  ,----'|  |  |  | |  \\  /  | |  |__      `---|  |----`|  |  |  | " << endl;
	cout << "          \\            /   |   __|  |  |     |  |     |  |  |  | |  |\\/|  | |   __|         |  |     |  |  |  | " << endl;
	cout << "           \\    /\\    /    |  |____ |  `----.|  `----.|  `--'  | |  |  |  | |  |____        |  |     |  `--'  | " << endl;
	cout << "            \\__/  \\__/     |_______||_______| \\______| \\______/  |__|  |__| |_______|       |__|      \\______/  " << endl;
	cout << "                                                                                                        " << endl;
	cout << "                   _______  __    __   _______     _______.     _______.   .___  ___.  _______                  " << endl;
	cout << "                  /  _____||  |  |  | |   ____|   /       |    /       |   |   \\/   | |   ____|                 " << endl;
	cout << "                 |  |  __  |  |  |  | |  |__     |   (----`   |   (----`   |  \\  /  | |  |__                    " << endl;
	cout << "                 |  | |_ | |  |  |  | |   __|     \\   \\        \\   \\       |  |\\/|  | |   __|                   " << endl;
	cout << "                 |  |__| | |  `--'  | |  |____.----)   |   .----)   |      |  |  |  | |  |____                  " << endl;
	cout << "                  \\______|  \\______/  |_______|_______/    |_______/       |__|  |__| |_______|                 " << endl;
	cout << "                                                                                                        " << endl;
	cout << "                          .__   __.  __    __  .___  ___. .______    _______ .______                            " << endl;
	cout << "                          |  \\ |  | |  |  |  | |   \\/   | |   _  \\  |   ____||   _  \\                           " << endl;
	cout << "                          |   \\|  | |  |  |  | |  \\  /  | |  |_)  | |  |__   |  |_)  |                          " << endl;
	cout << "                          |  . `  | |  |  |  | |  |\\/|  | |   _  <  |   __|  |      /                           " << endl;
	cout << "                          |  |\\   | |  `--'  | |  |  |  | |  |_)  | |  |____ |  |\\  \\----.                      " << endl;
	cout << "                          |__| \\__|  \\______/  |__|  |__| |______/  |_______|| _| `._____|                      " << endl;
	cout << "                                                                                                        " << endl << endl;

	cout << "                  _______________________________________________________________________________" << endl;
	cout << "                  |                                                                             |" << endl;
	cout << "                  |  TO NAVIGATE THE MENU PLEASE TYPE ONE OF THE NUMBERS NEXT TO A MENU ITEM    |" << endl;
	cout << "                  |  FOLLOWED BY THE ENTER KEY.                                                 |" << endl;
	cout << "                  |_____________________________________________________________________________|" << endl << endl;

	cout << "                  1. PLAY GAME!" << endl;
	cout << "                  2. QUIT" << endl << endl;
}