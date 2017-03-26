//#include, using etc
#pragma once

// Game object
class Game
{
public:

	// Default Constructor
	Game();

	// Default Destructor
	~Game();

	// Main game function
	void MainFunction();

	// Guess function returning a binary search
	int NextGuess(int minNumber, int maxNumber);

private:

	// declare vars
	int guess;
	int userInput;
	int tryCount;
	int minNumber;
	int maxNumber;
	bool guessing;
};