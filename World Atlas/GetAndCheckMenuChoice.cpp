
#include "header.h"

/************************************************************************
* FUNCTION GetAndCheckMenuChoice
*----------------------------------------------------------------------
* 	 This function receives nothing. It will get from the user as input what
* 	 	task they wish to perform in the program. It will then be error checked
* 	 	to make sure that it is valid. The valid input is returned.
* 	 ==> returns the valid menu choice
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be defined variables:
*
* POST-CONDITIONS
* 	==> returns the valid menu choice
*************************************************************************/
Continent GetAndCheckMenuChoice()
{
	Continent menuChoice; //PROC       - the choice from menu converted to an
	                      //             enum

	int  choiceFromMenu;  //IN         - the choice from the menu;

	bool   invalid;       //PROC       - the condition for invalid inputs
	bool   fail;          //PROC       - the condition for failed inputs

	string menu2String;   //PROC & OUT - the menu choice converted to a string
	string errorMessage; //OUT        - the message when an error is encountered


	do
	{
		cout << MENU;

		std::cin  >> choiceFromMenu;

		menuChoice = Continent(choiceFromMenu);

		invalid = (menuChoice != EXIT          && menuChoice != DEFAULT &&
				   menuChoice != NORTH_AMERICA && menuChoice != SOUTH_AMERICA &&
				   menuChoice != AFRICA        && menuChoice != EUROPE &&
				   menuChoice != ASIA          && menuChoice != OCEANIA);

		fail    = (std::cin.fail());

		if(invalid || fail)
		{
			//If input fail, then specify that a number should be entered
			if(fail)
			{
				std::cin.clear();
				std::cin.ignore(1000, '\n');
				cout << "\n**** Please input a NUMBER between " << EXIT
					 << " and " << (END - 1) << " ****\n\n";
			}
			//Output an error message
			else
			{
				menu2String = std::to_string(menuChoice);

				errorMessage = ("The number " + menu2String
											  + " is an invalid entry");
				cout << std::left << std::endl;
				cout << "**** " << std::setw(INVALID_COL) << (errorMessage)
					 << " ****";
				cout << "\n**** " << "Please input a number between "
					 << EXIT  <<  " and " << (END - 1) << " ****\n\n";
				cout << std::right;
			}
		}

	}while(invalid || fail);

	std::cin.ignore(1000, '\n');

	return menuChoice;
}
