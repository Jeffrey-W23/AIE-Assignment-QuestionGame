#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Game.h"
#include "ASCII.h"
#include <conio.h>
using namespace std;

Game::Game()
{
}

Game::~Game()
{
}

int Game::NextGuess(int minNumber, int maxNumber)
{
	int diff;

	diff = maxNumber - minNumber;
	int number = minNumber + (diff / 2);

	return number;
}

void Game::MainFunction()
{
	srand(time(0));
	int guess = rand() % 100 + 1;
	int userInput;
	int tryCount = 0;
	int minNumber = 0;
	int maxNumber = 100;
	bool guessing = true;

	system("cls");
	
	while (guessing)
	{
		cout << "                                                                                                 " << endl;
		cout << "                                                                                                 " << endl;
		cout << "                                                                                                 " << endl;
		cout << "                                                                                                 " << endl;
		cout << "                  _______________________________________________________________________________" << endl;
		cout << "                  |                                                                             |" << endl;
		cout << "                  |  HELLO AND WELCOME TO GUESS ME NUMBER!                                      |" << endl;
		cout << "                  |  PLEASE PICK A NUMBER BETWEEN 1-99 AND KEEP IT TO YOURSELF.                 |" << endl;
		cout << "                  |  LETS BEGIN..                                                               |" << endl;
		cout << "                  |_____________________________________________________________________________|" << endl << endl << endl << endl;

		PrintNumber(guess);

		cout << endl << endl;
		cout << "                  Is ye number.." << endl;
		cout << "                  1. Higher?" << endl;
		cout << "                  2. Lower?" << endl;
		cout << "                  3. This is me number!" << endl;

		if (maxNumber == minNumber + 1)
		{
			cout << endl << endl;
			cout << "                  ye number mustn't be between 1-99. Anyway the computer took " << tryCount << " tries to figure that out." << endl << endl << endl;
			guessing = false;
			cout << "                  Press any key to continue..." << endl;
			_getch();
		}

		cin >> userInput;
		cin.clear();
		cin.ignore(999999, '\n');

		if (userInput == 1)
		{
			tryCount++;
			minNumber = guess;
			guess = NextGuess(minNumber, maxNumber);
		}
		else if (userInput == 2)
		{
			tryCount++;
			maxNumber = guess;
			guess = NextGuess(minNumber, maxNumber);
		}
		else if (userInput == 3)
		{
			cout << endl << endl;
			cout << "                  The computer guessed ye number in " << tryCount << " tries." << endl << endl << endl;
			guessing = false;
			cout << "                  Press any key to continue..." << endl;
			_getch();
		}
		else
		{
			cout << endl << endl;
			cout << "                  Please take this seriously, make a valid choice of" << endl;
			cout << "                  higher, lower or This is my number." << endl << endl << endl;
			
			cout << "                  Press any key to continue..." << endl;
			_getch();
		}

		system("cls");
	}
}

// add music with beeps

