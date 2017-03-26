//#include, using etc
#pragma once
#include "Game.h"
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

// Menu object
class MainMenu
{
public:
	
	// Default Constructor
	MainMenu();

	// Default Destructor
	~MainMenu();
	
	// Menu function. Runs the logic of the main menu
	bool StartMenu();
	
	// Display fucntion for menu
	void PrintMenu();

private:

	// Input variable for menu options
	int menuOption;
	
	// game object
	Game game;
};