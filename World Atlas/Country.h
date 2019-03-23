
#ifndef COUNTRY_H_
#define COUNTRY_H_

#include <string>
#include <fstream>
#include <ostream>
#include <iomanip>
using std::string;
using std::ifstream;
using std::ostream;
using std::setw;

//Enums to match the continents and act as the menu for the program
enum Continent
{
	EXIT,
	DEFAULT,
	NORTH_AMERICA,
	SOUTH_AMERICA,
	AFRICA,
	EUROPE,
	ASIA,
	OCEANIA,
	END
};

/**************************************************************************
 * CONSTANTS
 * ------------------------------------------------------------------------
 * USED FOR COLUMN SIZES
 * ------------------------------------------------------------------------
 * STATES_COL      : the size of the states column
 * POPULATION_COL  : the size of the populations column
 * GDP_PPP_COL     : the size of the GDP per capita column
 * GDP_COL 		   : the size of the GDP column
 * CONTINENT_COL   : the size of the continent column
 * CAPITAL_COL     : the size of the capital column
 * LEADER_COL      : the size of the leader column
 * DEMONYM_COL     : the size of the demonym column
 * LANGUGAGE_COL   : the size of the language column
 * CURRENCY_COL    : the size of the currency column
 * RELIGION_COL    : the size of the religion column
 * BORDER_COL      : the size of the border column
 * BLANK_COL       : the size of the blank column
 *************************************************************************/
const unsigned short STATES_COL     = 30;
const unsigned short POPULATION_COL = 30;
const unsigned short GDP_PPP_COL    = 30;
const unsigned short GDP_COL        = 30;
const unsigned short CONTINENT_COL  = 30;
const unsigned short CAPITAL_COL    = 30;
const unsigned short LEADER_COL     = 30;
const unsigned short DEMONYM_COL    = 30;
const unsigned short LANGUGAGE_COL  = 30;
const unsigned short CURRENCY_COL   = 30;
const unsigned short RELIGION_COL   = 30;
const unsigned short BORDER_COL     = 120;
const unsigned short BLANK_COL      = 50;

/************************************************************************
* Country Class
* 	This class represents a Country object. It manages 15 attributes:
* 	countryName, states, population, GDP, continent, capital, leader,
* 	abbreviation, demonym, nationalLang, secondaryLang, currency, religion,
* 	medianIncome(GPP)
*************************************************************************/
class Country // Base Class
{
	public:
		/******************************
		 **      OVERLOADERS         **
		 ******************************/
		//Overloading the extraction operator for reading from a file
		friend ifstream& operator >>(ifstream&, Country&);

		//Overloading the insertion operator for outputting
		friend ostream& operator  <<(ostream&, Country&);

		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/

		/****************************************************************
		 * Country ();
		 *   Constructor; this method initializes the Country object
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		Country(); //Default Constructor

		/****************************************************************
		 * 		Country(string countryName, unsigned short states,
		 *		unsigned long  population, string GDP, string continent,
		 *		string capital, string leader, string abbreviation,
		 *      string demonym, string nationalLang, string secondaryLang,
		 *		string currency, string religion, unsigned int medianIncome);
		 *   Constructor; this method initializes the Country object with values
		 *   Parameters: countryName   (string)         - the country's name
		 *   			 states        (unsigned short) - the amount of states
		 *   			 capital       (unsigned long)  - the country's capital
		 *   			 GDP           (string)         - the county's GDP
		 *   			 continent     (string)         - the county's continent
		 *   			 capital       (string)         - the county's capital
		 *   			 leader        (string)         - the county's leader
		 *   			 abbreviation  (string)         - the county's code
		 *   			 demonym       (string)         - the county's demonym
		 *   			 nationalLang  (string)         - the county's primary
		 *   			 								  lang
		 *   			 secondaryLang (string)         - the county's secondary
		 *   			 								  lang
		 *   			 currency      (string)         - the county's currency
		 *   			 religion      (string)         - the county's religion
		 *   			 medianIncome  (string)         - the county's GPP
		 *
		 *   Return: none
		 ***************************************************************/
		Country(string countryName, unsigned short states,
				unsigned long  population, string GDP, string continent,
				string capital, string leader, string abbreviation,
				string demonym, string nationalLang, string secondaryLang,
				string currency, string religion, unsigned int medianIncome);
		//Non-Default Constructor

		/****************************************************************
		 * ~Country ();
		 *   Deconstructor; does not perform any specific function
		 *   Parameters: none
		 *   Return: none
		 ***************************************************************/
		~Country(); //Deconstructor

		/*******************
		 **** MUTATORS ****
		 *******************/

		/****************************************************************
		 * 		void SetInitialValues(string countryName, unsigned short states,
		 *		              		  unsigned long  population, string GDP,
		 *				  			  string continent, string capital,
		 *				  			  string leader, string abbreviation,
		 *				  			  string demonym, string nationalLang,
		 *				  			  string secondaryLang, string currency,
		 *				  			  string religion,
		 *				  			  unsigned int medianIncome);
		 *   Mutator; this method sets the initial values
		 *   Parameters: countryName   (string)         - the country's name
		 *   			 states        (unsigned short) - the amount of states
		 *   			 capital       (unsigned long)  - the country's capital
		 *   			 GDP           (string)         - the county's GDP
		 *   			 continent     (string)         - the county's continent
		 *   			 capital       (string)         - the county's capital
		 *   			 leader        (string)         - the county's leader
		 *   			 abbreviation  (string)         - the county's code
		 *   			 demonym       (string)         - the county's demonym
		 *   			 nationalLang  (string)         - the county's primary
		 *   			 								  lang
		 *   			 secondaryLang (string)         - the county's secondary
		 *   			 								  lang
		 *   			 currency      (string)         - the county's currency
		 *   			 religion      (string)         - the county's religion
		 *   			 medianIncome  (string)         - the county's GPP
		 *
		 *   Return: none
		 ***************************************************************/
		void SetInitialValues(string countryName, unsigned short states,
				              unsigned long  population, string GDP,
							  string continent, string capital, string leader,
							  string abbreviation, string demonym,
							  string nationalLang, string secondaryLang,
							  string currency, string religion,
							  unsigned int medianIncome);

		/****************************************************************
		 * 	 void SetContinentEnum();
		 *   Mutator; this method sets the contintent's enum
		 *   Parameters:none
		 *
		 *   Return: none
		 ***************************************************************/
		void SetContinentEnum();

		/*******************
		 **** ACCESSORS ****
		 *******************/

		/****************************************************************
		 * string GetName() const;
		 *
		 *   Accessor; This returns the country's name
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: countryName
		 ***************************************************************/
		string GetName() const {return countryName;}

		/****************************************************************
		 * unsigned short GetStates() const;
		 *
		 *   Accessor; This returns the country's states
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: states
		 ***************************************************************/
		unsigned short GetStates() const {return states;}

		/****************************************************************
		 * unsigned long GetPopulation() const;
		 *
		 *   Accessor; This returns the country's states
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: population
		 ***************************************************************/
		unsigned long GetPopulation() const {return population;}

		/****************************************************************
		 * string GetGDP() const;
		 *
		 *   Accessor; This returns the country's GDP
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: GDP
		 ***************************************************************/
		string GetGDP() const {return GDP;}

		/****************************************************************
		 * string GetContinent() const;
		 *
		 *   Accessor; This returns the country's continent
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: continent
		 ***************************************************************/
		string GetContinent() const {return continent;}

		/****************************************************************
		 * Continent GetContEnum() const;
		 *
		 *   Accessor; This returns the country's continent Enumerated type
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: continentEnum
		 ***************************************************************/
		Continent GetContEnum() const {return continentEnum;}

		/****************************************************************
		 * string GetCapital() const;
		 *
		 *   Accessor; This returns the country's capital
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: capital
		 ***************************************************************/
		string GetCapital() const {return capital;}

		/****************************************************************
		 * string GetLeader() const;
		 *
		 *   Accessor; This returns the country's leader
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: leader
		 ***************************************************************/
		string GetLeader() const {return leader;}

		/****************************************************************
		 * string GetAbbrev() const;
		 *
		 *   Accessor; This returns the country's abbreviation
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: abbreviation
		 ***************************************************************/
		string GetAbbrev() const {return abbreviation;}

		/****************************************************************
		 * string GetDemonym() const;
		 *
		 *   Accessor; This returns the country's demonym
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: demonym
		 ***************************************************************/
		string GetDemonym() const {return demonym;}

		/****************************************************************
		 * string GetNatLang() const;
		 *
		 *   Accessor; This returns the country's primary language
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: nationalLang
		 ***************************************************************/
		string GetNatLang() const {return nationalLang;}

		/****************************************************************
		 * string GetSecLang() const;
		 *
		 *   Accessor; This returns the country's secondary language
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: secondaryLang
		 ***************************************************************/
		string GetSecLang() const {return secondaryLang;}

		/****************************************************************
		 * string GetCurrency() const;
		 *
		 *   Accessor; This returns the country's currency
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: currency
		 ***************************************************************/
		string GetCurrency() const {return currency;}

		/****************************************************************
		 * string GetReligion() const;
		 *
		 *   Accessor; This returns the country's religion
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: religion
		 ***************************************************************/
		string GetReligion() const {return religion;}

		/****************************************************************
		 * unsigned int GetMedIncome() const;
		 *
		 *   Accessor; This returns the country's GPP
		 *-----------------------------------------------------------------
		 *   Parameters: none
		 *-----------------------------------------------------------------
		 *   Return: medianIncome
		 ***************************************************************/
		unsigned int GetMedIncome() const {return medianIncome;}

	private:
		string         countryName;   	//The name of the country
		unsigned short states;		  	//The states/providences of the country
		unsigned long  population;	  	//The population of the country
		string         GDP;				//The GDP of the country
		string         continent;	  	//The name of the country's continent
		Continent      continentEnum;	//The continent's enumerated type
		string         capital;	  		//The capital of the country
		string         leader;	  		//The leader of the country
		string         abbreviation;	//The abbreviation of the country
		string         demonym;	  		//The demonym of the country
		string         nationalLang;	//The primary language of the country
		string         secondaryLang;	//The secondary language of the country
		string         currency;	    //The currency of the country
		string         religion;	  	//The religion of the country
		unsigned int   medianIncome;	//The GPP of the country
};

#endif /* COUNTRY_H_ */
