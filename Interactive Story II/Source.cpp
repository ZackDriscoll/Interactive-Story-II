//Interactive Story II: A Star Wars the Clone Wars Story
//Author: Zack Driscoll

#include <iostream>
#include "Setup.h"
#include "Choices.h"
#include "Endings.h"

using namespace std;

int main()
{
	//Title
	cout << "\n\t\t *** Star Wars: The Clone Wars *** \n";
	cout << "\n\t\t *** A Space Battle Adventure *** \n\n";

	//Run the scenario for the user to begin playing
	Scenario();

	return 0;
}