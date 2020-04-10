#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Setup.h"
#include "Choices.h"
#include "Endings.h"

using namespace std;

//Ending if they chose 'A'
void EndingA()
{
	cout << "\nYou hop in the ARC-170 starfighter and launch yourself into space.";
	cout << "\nAs you exit the cruiser you see hundreds of ships, Republic and Separatist alike, fighting for survival and victory.";
	cout << "\nDespite your best efforts, the Separatists were able to push the Republic forces back and force your cruiser to retreat back to Coruscant";

	FinalEnding();
}

//Ending if they chose 'Y'
void EndingAB()
{
	cout << "\nYou jump in the Y-Wing and launch yourself into space.";
	cout << "\nYou join your squad as they go in for a bombing run on the Separatist cruiser.";
	cout << "\nAfter several attacks on the Separatist cruiser, you are able to destroy it!";
	cout << "\nAfter the Separatist cruiser's destruction your cruiser is able to continue on its journey to aid troops in Felucia.";

	FinalEnding();
}

//Ending if they chose 'S'
void EndingB()
{
	cout << "\nYou decide to repair the starships, thinking that it is better to focus on your offensive capabilities.";
	cout << "\nYou get to the hangar and realize you made a mistake, these damaged ships are completely beyond repair!";
	cout << "\nYour mistake leads to your cruiser blowing up due to the lack of a functioning shield generator and everyone dies.";

	FinalEnding();
}

//Ending if they chose 'SG'
void EndingBB()
{
	cout << "\nRealizing that the shield generator is more important, you quickly head towards it.";
	cout << "\nYou arrive and find that your fellow ship mechanics are already hard at work repairing the shield generator.";
	cout << "\nAfter what feels like hours of repairs, you and your team are able to successfully fix the shield generator and push the Separatists back!";
	cout << "\nYour cruiser is now able to continue your journey to aid troops in Felucia.";

	FinalEnding();
}

//Ending if they chose 'P'
void EndingC()
{
	cout << "\nYou try and blast the Vulture droid to smithereens, but you miss all your shots!";
	cout << "\nYou sadly realize too late that you should've ran.";

	FinalEnding();
}

//Ending if they chose 'R'
void EndingCB()
{
	cout << "\nNot trusting your accuracy, you abandon your station and run away as fast as you can.";
	cout << "\nAfter you get far enough away, you look back and see your cannon explode in spectacular fashion!";
	cout << "\nYou then jump into a nearby empty cannon and continue to shoot down enemy fighters.";
	cout << "\nYour cruiser was able to destroy the Separatist cruiser, allowing you to continue your journey to aid troops on Felucia.";

	FinalEnding();
}

//Final Ending to the story, no matter what path you chose.
string FinalEnding()
{
	string UC4;

	cout << "\n\n\t\t      *** The End. *** \n";
	cout << "\n\t\t *** Thanks for playing! *** \n\n";

	cout << "\nWould you like to play again? Press 'Y' for Yes and 'N' for No and press enter. ";

	//Allows user to type in an answer
	getline(cin, UC4);

	if (UC4 == "Y")
	{
		Scenario();
	}
	else if (UC4 == "N")
	{
		system("Pause");
	}

	return UC4;
}