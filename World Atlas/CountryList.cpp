#include "CountryList.h"

/************************************************************************
* Method CountryList: Class CountryList
*----------------------------------------------------------------------
* 	 This method creates the CountryList object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
CountryList::CountryList()
{

}

/************************************************************************
* Method ~CountryList: Class CountryList
*----------------------------------------------------------------------
* 	 This method deletes the CountryList object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
CountryList::~CountryList()
{

}

/************************************************************************
* Method CreateList: Class CountryList
*----------------------------------------------------------------------
* 	 This method creates the country list file
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
* 	COUNTRY_LIST (string) - the name of the input file
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
void CountryList::CreateList(const string& COUNTRY_LIST)
{
	ifstream countryFin(COUNTRY_LIST.c_str()); //PROC - opening the input file

	Country countryNode;					   //PROC - the country node to
											   //       store the information

	while(!countryFin.eof())
	{
		//PROCESSING - Store the country's information
		countryFin >> countryNode;

		//PROCESSING - Add the country to the list
		Push(countryNode);
	}

	//PROCESSING - close the input file
	countryFin.close();
}

/************************************************************************
* Method PrintRandom: Class CountryList
*----------------------------------------------------------------------
* 	 This method prints a random country from the list
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
* 	COUNTRY_LIST (string) - the name of the input file
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
void CountryList::PrintRandom(const Continent& MENU_OPT, ostream& fout) const
{
	Country random; //PROC & OUT - the random country

	//PROCESSING - Get the random country based on the menu choice
	random = Random(MENU_OPT);

	fout << std::endl;

	fout << random;

	fout << std::endl << std::endl;

	cout << "\nCheck the output file for " << random.GetName()
		 << std::endl;
}

/************************************************************************
* Method WordWrap: Class MovieList
*----------------------------------------------------------------------
* 	 This method receives a sentence and the width of each line. It then
* 	 	returns the sentence as a paragraph according to the line width.
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
* 		IN_FILE_NAME - the input file name
*
* POST-CONDITIONS
* 	==> returns the sentence wrapped as a paragraph
*************************************************************************/
string CountryList::WordWrap(const string& PLOT,             //PROC - the plot
		                     const int&    LINE_WIDTH) const //PROC - the width
														     //       of each
														     //       line
{
	istringstream words(PLOT); //PROC - the words in the plot

	ostringstream wrapped;     //PROC - the wrapped plot

	string        word;        //PROC - the word

	if (words >> word)
	{
		wrapped << word;

		size_t space_left = LINE_WIDTH - word.length();

		while (words >> word)
		{
			if (space_left < word.length() + 1)
			{
				wrapped << '\n' << word;

				space_left = LINE_WIDTH - word.length();
			}
			else
			{
				wrapped << ' ' << word;

				space_left -= word.length() + 1;
			}
		}
	}

	return wrapped.str();
}
