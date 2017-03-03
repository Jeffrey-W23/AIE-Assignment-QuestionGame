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
		cout << endl << guess;
		//PrintNumber(45);

		cout << endl << endl << "Is your number.." << endl;
		cout << "1. Higher?" << endl;
		cout << "2. Lower?" << endl;
		cout << "3. This is my number!" << endl;

		cin >> userInput;

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
			cout << "The computer guessed your number in " << tryCount << " tries.";
			guessing = false;
			_sleep(5000);
		}
		else
		{
			cout << "Please take this seriously, make a valid choice of higher, lower or This is my number.";
		}
	}
}

Game::~Game()
{
}