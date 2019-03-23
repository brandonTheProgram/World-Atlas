
#ifndef VECTORLIST_H_
#define VECTORLIST_H_

#include "Country.h" /** Country **/
#include <string>
#include <vector>
#include <algorithm> /** random_shuffle() **/
using std::string;
using std::vector;

/************************************************************************
* VectorList Class
* 	This class represents a vector class. It manages 7 attributes:
* 		countryList, northAmerList, southAmerList, africaList, europeList,
* 		asiaList, oceaniaList
*************************************************************************/
class VectorList //Base Class
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/

		/****************************************************************
		 * VectorList ();
		 *   Constructor; this method initializes the VectorList object
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		VectorList(); //Constructor

		/****************************************************************
		 * ~VectorList ();
		 *   Deconstructor; this method deletes the VectorList object
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		~VectorList(); //Deconstructor

		/**************
		 ** MUTATORS **
		 **************/

		/****************************************************************
		 * void Push(const Country& newCountry);
		 *   Mutator; this method adds the new country to the list
		 *   Parameters: NEW_COUNTRY (Country) - the new country node
		 *   Return: none
		 ***************************************************************/
		void Push(const Country& NEW_COUNTRY);

		/*******************
		 **** ACCESSORS ****
		 *******************/

		/****************************************************************
		 * 	 Country Random(const Continent& CONTINENT_CHOICE) const;
		 *
		 *   Accessor; this method returns a random country from a list
		 *   		   depending on the menu choice
		 *
		 *   Parameters: CONTINENT_CHOICE (Continent) - the menu option
		 *
		 *   Return: randomCountry
		 ***************************************************************/
		Country Random(const Continent& CONTINENT_CHOICE) const;

	protected:
		vector<Country> countryList;   //The list of every country
		vector<Country> northAmerList; //The list of countries from
									   //North America
		vector<Country> southAmerList; //The list of countries from
									   //South America
		vector<Country> africaList;    //The list of countries from Africa
		vector<Country> europeList;    //The list of countries from Europe
		vector<Country> asiaList;      //The list of countries from Asia
		vector<Country> oceaniaList;   //The list of countries from Oceania
};

#endif /* VECTORLIST_H_ */
