#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Choices.h"
#include "Endings.h"

using namespace std;

void Scenario()
{
	//Introduction
	cout << "\n\nYou are a clone in the Grand Army of the Republic.\n";
	cout << "While on a mission to aid troops in the Felucia system, you are attacked by a Separatist cruiser!\n";

	//Run the Role function
	Role();
}

//Determine the user's character role (job)
int Role()
{
	//Variable to help generate a random role for the user
	int role = rand() % 3 + 1;

	if (role == 1)
	{
		cout << "\nYou are a fighter pilot.\n\n";
		ChoiceA();
	}
	else if (role == 2)
	{
		cout << "\nYou are a ship mechanic.\n\n";
		ChoiceB();
	}
	else if (role == 3)
	{
		cout << "\nYou are a cannon operator.\n\n";
		ChoiceC();
	}

	return role;
}