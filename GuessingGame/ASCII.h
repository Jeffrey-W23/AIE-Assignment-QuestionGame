#pragma once

#include <iostream>

using namespace std;

const char* ASCIIList[10][6] = 
{
	{
		{ "  ___  " },
		{ " / _ \ " },
		{ "| | | |" },
		{ "| | | |" },
		{ "| |_| |" },
		{ " \___/ " }
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
		{ " |__ \  " },
		{ "    ) | " },
		{ "   / /  " },
		{ "  / /_  " },
		{ " |____| " }
	},
	{
		{ " ____   " },
		{ "|___ \  " },
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
		{ "|___ \  " },
		{ " ___) | " },
		{ "|____/  " }
	},
	{
		{ "   __   " },
		{ "  / /   " },
		{ " / /_   " },
		{ "| '_ \  " },
		{ "| (_) | " },
		{ " \___/  " }
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
		{ " / _ \  " },
		{ "| (_) | " },
		{ " > _ <  " },
		{ "| (_) | " },
		{ " \___/  " }
	},
	{
		{ "  ___   " },
		{ " / _ \  " },
		{ "| (_) | " },
		{ " \__, | " },
		{ "   / /  " },
		{ "  /_/   " }
	},
};

//Function to print 1 digit
//Function to split number into its digits so 321 becomes 3, 2 and 1. Then call print digit on each one.
//PrintNumber(31)
//void PrintNumber(int number)
//{
//	int dig1 = (number / 10); //eg. number is 45 then dig1 is 4	
//	int dig2 = (number % 10); //eg. number is 45 then dig2 is 5
//
//	const char** digit = ASCIIList[dig1];
//	const char** digit2 = ASCIIList[dig2];
//	
//
//
//
//
//
//	char* digit3[1][6]; // new array to put the ascii value in
//
//	// one at a time move them to the new array
//	for (int i = 0; i < 6; i++)
//	{
//		strcpy(digit3[1][i], digit[i]);
//	}
//
//	// draw art from top to bottom
//	for (int i = 0; i < 6; ++i)
//	{
//		cout << digit3[1][i] << endl;
//	}
//}