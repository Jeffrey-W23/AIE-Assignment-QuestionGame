#include <iostream>
#include "MainMenu.h"
#include <conio.h>
#include <stdio.h>
#include <windows.h>
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

	Beep(587, 500);
	Beep(659, 500);
	Beep(698, 500);
	Beep(784, 500);

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
		cout << "                  PLEASE ENTER A VALID MENU OPTION DUDE, THIS ISN'T A GAME." << endl << endl;
		cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
		_getch();
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
	cout << "                  |_____________________________________________________________________________|" << endl << endl << endl;

	cout << "                                 ________________              ________________                 " << endl;
	cout << "                                /                \\            /                \\                " << endl;
	cout << "                               |  1. PLAY GAME!   |          |     2. QUIT      |               " << endl;
	cout << "                                \\________________/            \\________________/                " << endl;
}