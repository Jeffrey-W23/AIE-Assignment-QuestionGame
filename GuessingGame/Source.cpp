#include <iostream>
#include <chrono>
#include "MainMenu.h"
#include "Game.h" 

using namespace std;

void main()
{
	bool gameRunning = true;

	while (gameRunning)
	{
		int menuOption;
		MainMenu menu;
		Game game;

		menu.PrintMenu();

		cin >> menuOption;
		cout << endl;

		if (menuOption == 1)
		{
			game.MainFunction();
		}
		else if (menuOption == 2)
		{
			gameRunning = false;
		}
		else
		{
			system("cls");
			cout << "Please enter a valid menu option dude, this isn't a game." << endl;
			_sleep(2000);
		}
	}
}