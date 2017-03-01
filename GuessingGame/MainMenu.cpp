#include <iostream>
#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu()
{
}

void MainMenu::PrintMenu()
{
	system("cls");

	cout << "_______________________________________________________________________________" << endl;
	cout << "|                                                                             |" << endl;
	cout << "  . . .     |                            |                                     " << endl;
	cout << "  | | |,---.|    ,---.,---.,-.-.,---.    |--- ,---.                            " << endl;
	cout << "  | | ||---'|    |    |   || | ||---'    |    |   |                            " << endl;
	cout << "  `-'-'`---'`---'`---'`---'` ' '`---'    `---'`---'                            " << endl;
	cout << "                                                                               " << endl;
	cout << "  ,---.                        ,-.-.         ,   .          |" << endl;
	cout << "  |  _..   .,---.,---.,---.    | | |,---.    |\\  |.   .,-.-.|---.,---.,---.   " << endl;
	cout << "  |   ||   ||---'`---.`---.    | | ||---'    | \\ ||   || | ||   ||---'|       " << endl;
	cout << "  `---'`---'`---'`---'`---'    ` ' '`---'    `  `'`---'` ' '`---'`---'`        " << endl;
	cout << "                                                                               " << endl;
	cout << "|_____________________________________________________________________________|" << endl << endl;

	cout << "_______________________________________________________________________________" << endl;
	cout << "|                                                                             |" << endl;
	cout << "|  TO NAVIGATE THE MENU PLEASE TYPE ONE OF THE NUMBERS NEXT TO A MENU ITEM    |" << endl;
	cout << "|  FOLLOWED BY THE ENTER KEY.                                                 |" << endl;
	cout << "|_____________________________________________________________________________|" << endl << endl;

	cout << "1. PLAY GAME!" << endl;
	cout << "2. QUIT" << endl << endl;
}

MainMenu::~MainMenu()
{
}