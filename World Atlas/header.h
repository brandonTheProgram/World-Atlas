
#ifndef HEADER_H_
#define HEADER_H_

#include "CountryList.h"

/**************************************************************************
 * CONSTANTS
 * ------------------------------------------------------------------------
 * USED FOR COLUMN SIZE
 * ------------------------------------------------------------------------
 * INVALID_COL          : The column size for the invalid prompt
 * ------------------------------------------------------------------------
 * USED FOR SPECIFIC VALUES
 * ------------------------------------------------------------------------
 * MENU 				: The menu for the program
 *************************************************************************/
const int INVALID_COL = 37;

const string MENU = "OPTIONS:\n\n"
					"1) Pick a random country from around the world\n"
					"2) Pick a random country from North America\n"
					"3) Pick a random country from South America\n"
					"4) Pick a random country from Africa\n"
					"5) Pick a random country from Europe\n"
					"6) Pick a random country from Asia\n"
					"7) Pick a random country from Oceania\n"
					"Enter an option (0) to exit): ";

/******************************************************************************
 * GetAndCheckMenuChoice
 * 	 This function receives nothing. It will get from the user as input what
 * 	 	task they wish to perform in the program. It will then be error checked
 * 	 	to make sure that it is valid. The valid input is returned.
 * 	 ==> returns the valid menu choice
 *****************************************************************************/
Continent GetAndCheckMenuChoice();

#endif /* HEADER_H_ */
