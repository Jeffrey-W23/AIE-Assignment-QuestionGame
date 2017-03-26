//#include, using etc
#pragma once
#include <iostream>
using namespace std;

// Create a list of ascii art numbers
const char* ASCIIList[10][6] = 
{
	{
		{ "  ___   " },
		{ " / _ \\  " },
		{ "| | | | " },
		{ "| | | | " },
		{ "| |_| | " },
		{ " \\___/  " }
	},
	{
		{ "   __   " },
		{ "  /_ |  " },
		{ "   | |  " },
		{ "   | |  " },
		{ "   | |  " },
		{ "   |_|  " }
	},
	{
		{ "  ___   " },
		{ " |__ \\  " },
		{ "    ) | " },
		{ "   / /  " },
		{ "  / /_  " },
		{ " |____| " }
	},
	{
		{ " ____   " },
		{ "|___ \\  " },
		{ "  __) | " },
		{ " |__ <  " },
		{ " ___) | " },
		{ "|____/  " }
	},
	{
		{ " _  _   " },
		{ "| || |  " },
		{ "| || |_ " },
		{ "|__   _|" },
		{ "   | |  " },
		{ "   |_|  " }
	},
	{
		{ " _____  " },
		{ "| ____| " },
		{ "| |__   " },
		{ "|___ \\  " },
		{ " ___) | " },
		{ "|____/  " }
	},
	{
		{ "   __   " },
		{ "  / /   " },
		{ " / /_   " },
		{ "| '_ \\  " },
		{ "| (_) | " },
		{ " \\___/  " }
	},
	{
		{ " ______ " },
		{ "|____  |" },
		{ "    / / " },
		{ "   / /  " },
		{ "  / /   " },
		{ " /_/    " }
	},
	{
		{ "  ___   "  },
		{ " / _ \\  " },
		{ "| (_) | " },
		{ " > _ <  " },
		{ "| (_) | " },
		{ " \\___/  " }
	},
	{
		{ "  ___   " },
		{ " / _ \\  " },
		{ "| (_) | " },
		{ " \\__, | " },
		{ "   / /  " },
		{ "  /_/   " }
	},
};


// Function to print a asci art number
void PrintNumber(int number)
{
	// Seperate the first and second digit
	int dig1 = (number / 10); //eg. number is 45 then dig1 is 4	
	int dig2 = (number % 10); //eg. number is 45 then dig2 is 5

	// Create an array for each digit
	const char** digit = ASCIIList[dig1];
	const char** digit2 = ASCIIList[dig2];
	
	// spaces for the front of the asci art to get it in the center of the screen when the user sees it
	const char* spaces = "                                                 ";

	// Creating a new array to store the 2 digits side by side
	char* digit3[6];

	// one at a time move them to the new array
	for (int i = 0; i < 6; i++)
	{
		int length = strlen(digit[i]);
		int length2 = strlen(digit2[i]);
		int length3 = strlen(spaces);

		digit3[i] = new char[length + length2 + length3 + 1];
		strcpy(digit3[i], spaces);
		strcat(digit3[i], digit[i]);
		strcat(digit3[i], digit2[i]);
	}

	// draw art from top to bottom then delete
	for (int i = 0; i < 6; ++i)
	{
		cout << digit3[i] << endl;
		delete[] digit3[i];
	}
}