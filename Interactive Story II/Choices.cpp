#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Setup.h"
#include "Endings.h"

using namespace std;

//Function for the user's first choice
string ChoiceA()
{
	//Variable to hold the user's choice
	string UC1;

	//First choice scenario
	cout << "\nAs a fighter pilot, you need to get to your ship and begin defending your cruiser.";
	cout << "\nYou reach hanger A and see that there is an ARC-170 starfighter and a Y-Wing left.";

	//Ask for user input
	cout << "\n\nWhich do you choose? Enter 'A' for the ARC-170 or 'Y' for the Y-wing and press enter. ";

	//Allows user to type in an answer
	getline(cin, UC1);

	//User's choice will affect the ending they receive
	if (UC1 == "A")
	{
		EndingA();
	}
	else if (UC1 == "Y")
	{
		EndingAB();
	}
	else
	{
		cout << "\nI don't recognize that command.";
	}

	return UC1;
}

//Function for the user's third choice
string ChoiceB()
{
	//Variable to hold the user's choice
	string UC2;

	cout << "\nAs a ship mechanic, your job is to make any repairs to the cruiser or starships as necessary.";
	cout << "\nNot long after the battle begins, there is a small explosion in the hanger, damaging many starfighters.";
	cout << "\nBefore you are able to get to the hanger, you hear on the cruiser's intercom that the shield generator is damaged.";

	//Ask for user input
	cout << "\n\nWhich do you try and repair? The starships, or the cruiser shield generator?";
	cout << "\nPress 'S' to repair the starships, or 'SG' to repair the shield generator and press enter. ";

	//Allows user to type in an answer
	getline(cin, UC2);

	//User's choice will affect the ending they receive
	if (UC2 == "S")
	{
		EndingB();
	}
	else if (UC2 == "SG")
	{
		EndingBB();
	}
	else
	{
		cout << "\nI don't recognize that command.";
	}

	return UC2;
}

string ChoiceC()
{
	//Variable to hold the user's choice
	string UC3;

	cout << "\nAs a cannon operator, it is your job to man the cruiser's main cannons to help protect the ship.";
	cout << "\nYou rush to your battle station at cannon 82C and begin firing on th enemy.";
	cout << "\nAfter shooting down several enemy ships, you see a burning Vulture droid headed right for you!";

	//Ask for user input
	cout << "\n\nWhat do you do? Try and shoot it down to protect yourself, or run away?";
	cout << "\nPress 'P' to protect yourself, or 'R' to run away and press enter. ";

	//Allows user to type in an answer
	getline(cin, UC3);

	//User's choice will affect the ending they receive
	if (UC3 == "P")
	{
		EndingC();
	}
	else if (UC3 == "R")
	{
		EndingCB();
	}
	else
	{
		cout << "\nI don't recognize that command.";
	}

	return UC3;
}