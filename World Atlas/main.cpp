
#include "header.h"

/******************************************************************************
 * WORLD ATLAS
 *-----------------------------------------------------------------------------
 * This program will allow the user to input as a choice from the menu how they
 * 	  wish to select a country from the world atlas to display information
 * 	  pertaining to the that country that is chosen. The ouput is sent to an
 * 	  output file and the program will end when the user selects the exit option
 *-----------------------------------------------------------------------------
 * INPUT
 * 		The following information will be input for this program:
 * 			outputFile          : The name of the output file
 * 	  		menuChoice         	: The choice from the menu
 * OUTPUT
 * 	  	The following information will be output for this program:
			countryList    	    : The list of countries
 ***********************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * USED FOR I/O FILES
	 * ------------------------------------------------------------------------
	 * COUNTRY_FILE          : The country input file
	 * OUTPUT_FILE           : The ouput file
	 * ------------------------------------------------------------------------
	 * USED FOR SPECIFIC VALUES
	 * ------------------------------------------------------------------------
	 * MESSAGE 				: The opening message of the program
	 * DEFAULT_FILE_KEY     : The default file key
	 *************************************************************************/
	const string COUNTRY_FILE = "CountryFile.txt";
	const string OUTPUT_FILE  = "OFile.txt";
	const string MESSAGE = "Welcome to the Country Roulette!\n"
						   "Pick an option to find out more about a country\n"
						   "All data is sent to an output file, make sure "
						   "to check it after exiting the program\n";

	const char   DEFAULT_FILE_KEY  = 'D';

	srand(time(NULL));			 //PROC       - the seed for the random
								 //			    num generator

	CountryList countryList;     //PROC & OUT - the list of countries

	string   outputFile;         //IN         - the name of the output file

	Continent menuChoice;        //IN & PROC  - the menu choice

	std::ofstream oFile;         //OUT        - the output file variable

	cout << MESSAGE;

	//INPUT - Get the ouput file name
	cout << "\nWhich output file would you like to use"
		 << "(type d for default file): ";

	getline(std::cin, outputFile);

	cout << std::endl;

	//Capitalize the file names
	outputFile[0] = toupper(outputFile[0]);

	/**************************************************************************
	 * OUTPUT - If the output file is the default file character, then assign
	 *          it the default name and open it
	 *************************************************************************/
	if((outputFile[0] == DEFAULT_FILE_KEY) && ((outputFile.length()) == 1))
	{
		oFile.open(OUTPUT_FILE.c_str());
	}
	else
	{
		oFile.open(outputFile.c_str());
	}

	//PROCESSING - Create the list
	countryList.CreateList(COUNTRY_FILE);

	/**************************************************************************
	 * INPUT - gets the choice from the menu as input and checks to make sure
	 *         that it is valid.
	 *************************************************************************/
	menuChoice = GetAndCheckMenuChoice();

	/**************************************************************************
	 * PROCESSING - This is the primary loop for the program.
	 *              It will continue to ask the user what would like to do
	 *              until they choose to exit.
	 *************************************************************************/
	while(menuChoice != EXIT)
	{
		//OUTPUT - Print a random country
		countryList.PrintRandom(menuChoice, oFile);

		cout << std::endl;

		//INPUT - Get the menu choice again
		menuChoice = GetAndCheckMenuChoice();
	}

	//Close the ouput file
	oFile.close();

	return 0;
}
