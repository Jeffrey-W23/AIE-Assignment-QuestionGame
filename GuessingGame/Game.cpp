//#include, using etc
#include "Game.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "ASCII.h"
#include <conio.h>
using namespace std;

// Default Constructor
Game::Game()
{
	// initialize
	guess = 0;
	userInput = 0;
	tryCount = 0;
	minNumber = 0;
	maxNumber = 100;
	guessing = true;
}

// Default Destructor
Game::~Game()
{
}

// Guess function returning a binary search
int Game::NextGuess(int minNumber, int maxNumber)
{
	// Binary search
	// works out the middle between 2 numbers
	int diff;
	diff = maxNumber - minNumber;
	int number = minNumber + (diff / 2);

	// returns the computers guess
	return number;
}

// Main game function
void Game::MainFunction()
{
	// start the game with a random guess from the computer
	guess = rand() % 100 + 1;

	// clear the screen for the game UI
	system("cls");
	
	// Start guessing loop
	while (guessing)
	{
		// display game UI
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

		// print ascii art number
		PrintNumber(guess);

		// display input options for the user
		cout << endl << endl;
		cout << "                  IS YE NUMBER.." << endl;
		cout << "                  1. HIGHER?" << endl;
		cout << "                  2. LOWER?" << endl;
		cout << "                  3. THIS IS ME NUMBER!" << endl;

		// check to make sure the user isnt cheating
		if (maxNumber == minNumber + 1)
		{
			cout << endl << endl;
			cout << "                  YE NUMBER MUSTN'T BE BETWEEN 1 AND 99. ANYWAY THE COMPUTER TOOK " << endl;
			cout << "                  " << tryCount << " TRIES TO FIGURE THAT OUT." << endl << endl << endl;
			guessing = false;
			cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}

		// get the users input
		cin >> userInput;
		cin.clear();
		cin.ignore(999999, '\n');

		// tell the computer the users number is lower
		if (userInput == 1)
		{
			tryCount++;
			minNumber = guess;
			guess = NextGuess(minNumber, maxNumber);
		}

		// tell the computer the users number is higher
		else if (userInput == 2)
		{
			tryCount++;
			maxNumber = guess;
			guess = NextGuess(minNumber, maxNumber);
		}

		// Finish the game. the computer has guessed the number
		else if (userInput == 3)
		{
			cout << endl << endl;
			cout << "                  THE COMPUTER GUESSED YE NUMBER IN " << tryCount << " TRIES." << endl << endl << endl;
			guessing = false;
			cout << "                  PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}

		// make sure the user is inputing correct menu options
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