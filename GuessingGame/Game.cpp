#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Game.h"

#include "ASCII.h"

using namespace std;

Game::Game()
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
	int guess = rand() % 99;
	int userInput;
	int tryCount = 0;
	int minNumber = 0;
	int maxNumber = 100;
	bool guessing = true;

	system("cls");

	cout << "Hello and welcome to Guess Me Number!" << endl;
	cout << "Please pick a number bettween 0-99 and keep it to yourself" << endl;
	cout << "Lets begin.." << endl << endl;
	
	while (guessing)
	{
		PrintNumber(guess);

		cout << endl << endl << "Is ye number.." << endl;
		cout << "1. Higher?" << endl;
		cout << "2. Lower?" << endl;
		cout << "3. This is me number!" << endl;

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
			cout << "The computer guessed ye number in " << tryCount << " tries.";
			guessing = false;
			cin;
		}
		else
		{
			cout << endl << "Please take this seriously, make a valid choice of higher, lower or This is my number.";
			cin;
		}

		system("cls");
	}
}

Game::~Game()
{
}



//GOOGLE
//C++ moving the cusor in windows console
//center everything on the consolo c++

