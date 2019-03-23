
#ifndef COUNTRYLIST_H_
#define COUNTRYLIST_H_

#include "VectorList.h"
#include <iomanip>
#include <fstream>
#include <iostream>
using std::istringstream;
using std::ostringstream;
using std::ifstream;
using std::cout;

/************************************************************************
* CountryList Class
* 	This class represents a list of countries and is derived from the
* 	vector class. It manages 1 attributes: WordWrap function
*************************************************************************/
class CountryList: public VectorList //Child Class
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/

		/****************************************************************
		 * CountryList ();
		 *   Constructor; this method initializes the CountryList object
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		CountryList(); //Constructor

		/****************************************************************
		 * CountryList ();
		 *   Deconstructor; this method deletes the CountryList object
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		~CountryList(); //Deconstructor

		/*******************
		 **** MUTATORS ****
		 *******************/

		/****************************************************************
		 * 	 void CreateList(const string &COUNTRY_LIST);
		 *
		 *   Mutator; this method creates the list
		 *
		 *   Parameters: COUNTRY_LIST (string) - the input file
		 *
		 *   Return: none
		 ***************************************************************/
		void CreateList(const string &COUNTRY_LIST);

		/*******************
		 **** ACCESSORS ****
		 *******************/

		/****************************************************************
		 * 	 void PrintRandom(const Continent& MENU_OPT, ostream& fout) const;
		 *
		 *   Accessor; this method prints a random country from the list
		 *
		 *   Parameters: MENU_OPT (Continent) - the menu option
		 *   			 fout     (ostream)   - the ouput stream variable
		 *
		 *   Return: none
		 ***************************************************************/

		void PrintRandom(const Continent& MENU_OPT, ostream& fout) const;

	private:
		/****************************************************************
		 * string WordWrap(const string PLOT,
		 * 				   const int    LINE_WIDTH) const;
		 *
		 *   Accessor; This method perform word wrapping
		 *-----------------------------------------------------------------
		 *   Parameters: PLOT       (string) // PROC - the plot of the movie
		 *   			 LINE_WIDTH (int)    // PROC - the width of the line
		 *-----------------------------------------------------------------
		 *   Return: none
		 ***************************************************************/
		string WordWrap(const string& PLOT, const int& LINE_WIDTH) const;
};

#endif /* COUNTRYLIST_H_ */
