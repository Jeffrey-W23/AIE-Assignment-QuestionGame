#include <iostream>
#include <string>
#include <vector>
#include "Game.h"

#include "ASCII.h"

using namespace std;

Game::Game()
{
}

void Game::MainFunction()
{
	system("cls");

	cout << "Hello and welcome to Guess Me Number!" << endl;
	cout << "Please pick a number and keep it to yourself" << endl;
	cout << "Lets begin.." << endl;

	for (int i = 0; i < 3; ++i)
	{
		cout << ASCIIList[4][i] << endl;
	}

	_sleep(2000);
}

void Game::Numbers(int number)
{
	char numZero[7][7];
	char numOne[7][7];

	switch (number)
	{ 
	
	case 0:
		strcpy(numZero[0], "  ___  ");
		strcpy(numZero[1], " / _ \ ");
		strcpy(numZero[2], "| | | |");
		strcpy(numZero[3], "| | | |");
		strcpy(numZero[4], "| |_| |");
		strcpy(numZero[5], " \___/ ");
		strcpy(numZero[6], "       ");
		break;
	case 1:
		strcpy(numOne[0], " __ ");
		strcpy(numOne[1], "/_ |");
		strcpy(numOne[2], " | |");
		strcpy(numOne[3], " | |");
		strcpy(numOne[4], " | |");
		strcpy(numOne[5], " |_|");
		strcpy(numOne[6], "    ");
		break;

	}














	
	}
}

Game::~Game()
{
}