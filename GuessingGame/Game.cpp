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
		cout << "                  |  PLEASE PICK A NUMBER BETWEEN 1 AND 99 AND KEEP IT TO YOURSELF.             |" << endl;
		cout << "                  |  LETS BEGIN..                                                               |" << endl;
		cout << "                  |_____________________________________________________________________________|" << endl << endl << endl << endl;

		PrintNumber(guess);

		cout << endl << endl;
		cout << "                  IS YE NUMBER.." << endl;
		cout << "                  1. HIGHER?" << endl;
		cout << "                  2. LOWER?" << endl;
		cout << "                  3. THIS IS ME NUMBER!" << endl;

		if (maxNumber == minNumber + 1)
		{
			cout << endl << endl;
			cout << "                  YE NUMBER MUSTN'T BE BETWEEN 1 AND 99. ANYWAY THE COMPUTER TOOK " << endl;
			cout << "                  " << tryCount << " TRIES TO FIGURE THAT OUT." << endl << endl << endl;
			guessing = false;
			cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
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
			cout << "                  THE COMPUTER GUESSED YE NUMBER IN " << tryCount << " TRIES." << endl << endl << endl;
			guessing = false;
			cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}
		else
		{
			cout << endl << endl;
			cout << "                  PLEASE TAKE THIS SERIOUSLY, MAKE A VALID CHOICE OF" << endl;
			cout << "                  1. HIGHER, 2. LOWER OR 3. THIS IS ME NUMBER." << endl << endl << endl;
			cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}

		system("cls");
	}
}

// add music with beeps

