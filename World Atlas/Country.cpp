#include "Country.h"

/************************************************************************
* Method Country: Class Country
*----------------------------------------------------------------------
* 	 This method creates the Country object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
Country::Country()
{
	countryName      .clear();
	states           = 0;
	population       = 0;
	GDP              .clear();
	continent        .clear();
	continentEnum    = EXIT;
	capital          .clear();
	leader           .clear();
	abbreviation	 .clear();
	demonym			 .clear();
	nationalLang	 .clear();
	secondaryLang    .clear();
	currency		 .clear();
	religion		 .clear();
	medianIncome 	 = 0;
}

/************************************************************************
* Method Country: Class Country
*----------------------------------------------------------------------
* 	 This method creates the Country object with values
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*		countryName   (string)         - the name of the country
* 		states        (unsigned short) - the amount of states
*   	capital       (unsigned long)  - the country's capital
*   	GDP           (string)         - the county's GDP
*   	continent     (string)         - the county's continent
*   	capital       (string)         - the county's capital
*   	leader        (string)         - the county's leader
*    	abbreviation  (string)         - the county's code
*   	demonym       (string)         - the county's demonym
*   	nationalLang  (string)         - the county's primary language
*   	secondaryLang (string)         - the county's secondary language
*   	currency      (string)         - the county's currency
*   	religion      (string)         - the county's religion
*   	medianIncome  (string)         - the county's GPP
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
Country::Country(string countryName, unsigned short states,
				 unsigned long  population, string GDP, string continent,
				 string capital, string leader, string abbreviation,
				 string demonym, string nationalLang, string secondaryLang,
				 string currency, string religion, unsigned int medianIncome)
{
	//PROCESSING - Fix capitalization errors if any
	countryName[0]   = toupper(countryName[0]);
	continent[0]     = toupper(continent[0]);
	capital[0]       = toupper(capital[0]);
	leader[0]        = toupper(leader[0]);
	abbreviation[0]  = toupper(abbreviation[0]);
	abbreviation[1]  = toupper(abbreviation[1]);
	demonym[0]       = toupper(demonym[0]);
	nationalLang[0]  = toupper(nationalLang[0]);
	secondaryLang[0] = toupper(secondaryLang[0]);
	currency[0]      = toupper(leader[0]);
	religion[0]      = toupper(religion[0]);

	Country::countryName      = countryName;
	Country::states           = states;
	Country::population       = population;
	Country::GDP			  = GDP;
	Country::continent		  = continent;;
	Country::capital		  = capital;
	Country::leader     	  = leader;
	Country::abbreviation     = abbreviation;
	Country::demonym		  = demonym;
	Country::nationalLang	  = nationalLang;
	Country::secondaryLang	  = secondaryLang;
	Country::currency		  = currency;
	Country::religion		  = religion;
	Country::medianIncome     = medianIncome;

	//PROCESSING - Initialize the enum of the continent
	SetContinentEnum();
}

/************************************************************************
* Method Country: Class Country
*----------------------------------------------------------------------
* 	 This method deletes the Country object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
Country::~Country()
{

}

/************************************************************************
* Method Country: Class Country
*----------------------------------------------------------------------
* 	 This method initializes the country object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*		countryName   (string)         - the name of the country
* 		states        (unsigned short) - the amount of states
*   	capital       (unsigned long)  - the country's capital
*   	GDP           (string)         - the county's GDP
*   	continent     (string)         - the county's continent
*   	capital       (string)         - the county's capital
*   	leader        (string)         - the county's leader
*    	abbreviation  (string)         - the county's code
*   	demonym       (string)         - the county's demonym
*   	nationalLang  (string)         - the county's primary language
*   	secondaryLang (string)         - the county's secondary language
*   	currency      (string)         - the county's currency
*   	religion      (string)         - the county's religion
*   	medianIncome  (string)         - the county's GPP
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
void Country::SetInitialValues(string countryName, unsigned short states,
				 	 	 	   unsigned long  population, string GDP,
							   string continent, string capital, string leader,
							   string abbreviation, string demonym,
							   string nationalLang, string secondaryLang,
							   string currency, string religion,
							   unsigned int medianIncome)
{
	//PROCESSING - Fix capitalization errors if any
	countryName[0]   = toupper(countryName[0]);
	continent[0]     = toupper(continent[0]);
	capital[0]       = toupper(capital[0]);
	leader[0]        = toupper(leader[0]);
	abbreviation[0]  = toupper(abbreviation[0]);
	abbreviation[1]  = toupper(abbreviation[1]);
	demonym[0]       = toupper(demonym[0]);
	nationalLang[0]  = toupper(nationalLang[0]);
	secondaryLang[0] = toupper(secondaryLang[0]);
	currency[0]      = toupper(leader[0]);
	religion[0]      = toupper(religion[0]);

	Country::countryName      = countryName;
	Country::states           = states;
	Country::population       = population;
	Country::GDP			  = GDP;
	Country::continent		  = continent;;
	Country::capital		  = capital;
	Country::leader     	  = leader;
	Country::abbreviation     = abbreviation;
	Country::demonym		  = demonym;
	Country::nationalLang	  = nationalLang;
	Country::secondaryLang	  = secondaryLang;
	Country::currency		  = currency;
	Country::religion		  = religion;
	Country::medianIncome     = medianIncome;

	//PROCESSING - Initialize the enum of the continent
	SetContinentEnum();
}

/************************************************************************
* Method SetContinentEnum: Class Country
*----------------------------------------------------------------------
* 	 This method initializes the continent enum
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
void Country::SetContinentEnum()
{
	if(continent == "North America")
		continentEnum = NORTH_AMERICA;
	else if(continent == "South America")
		continentEnum = SOUTH_AMERICA;
	else if(continent == "Africa")
		continentEnum = AFRICA;
	else if(continent == "Europe")
		continentEnum = EUROPE;
	else if(continent == "Asia")
		continentEnum = ASIA;
	else if(continent == "Oceania")
		continentEnum = OCEANIA;
}

//Overloading the extraction operator to read inputs from a file
ifstream& operator >> (ifstream& isObject, Country& cObject)
{
	//PROCESSING - Store the country's information
	getline(isObject, cObject.countryName);

	isObject >> cObject.states;

	isObject >> cObject.population;

	isObject.ignore(1000, '\n');

	getline(isObject, cObject.GDP);

	getline(isObject, cObject.continent);

	cObject.SetContinentEnum();

	getline(isObject, cObject.capital);

	getline(isObject, cObject.leader);

	getline(isObject, cObject.abbreviation);

	getline(isObject, cObject.demonym);

	getline(isObject, cObject.nationalLang);

	getline(isObject, cObject.secondaryLang);

	getline(isObject, cObject.currency);

	getline(isObject, cObject.religion);

	isObject >> cObject.medianIncome;

	isObject.ignore(1000, '\n');

	isObject.ignore(1000, '\n');

	return isObject;
}

//Overloading the insertion operator to print the country's information
ostream& operator << (ostream& osObject, Country& cObject)
{
	std::string populationStr; //PROC & OUT - The population as a string

	std::string GPPStr;		   //PROC & OUT - The GDP as a string

	populationStr = std::to_string(cObject.population);
	GPPStr        = "$" + std::to_string(cObject.medianIncome);

	//Punctuate the numbers to fit the output
	switch(populationStr.length())
	{
	case 4:		populationStr.insert(1, ",");  //1,000
				break;
	case 5:		populationStr.insert(2, ",");  //10,000
				break;
	case 6:		populationStr.insert(3, ",");  //100,000
				break;
	case 7:		populationStr.insert(1, ",");
				populationStr.insert(5, ",");  //1,000,000
				break;
	case 8:		populationStr.insert(2, ",");
				populationStr.insert(6, ",");  //10,000,000
				break;
	case 9:		populationStr.insert(3, ",");
				populationStr.insert(7, ",");  //100,000,000
				break;
	case 10:	populationStr.insert(1, ",");
				populationStr.insert(5, ",");
				populationStr.insert(9, ",");  //1,000,000,000
				break;
	default:	break;
	}

	switch(GPPStr.length())
	{
	case 5:		GPPStr.insert(2, ",");  //1,000
				break;
	case 6:		GPPStr.insert(3, ",");  //10,000
				break;
	case 7:		GPPStr.insert(4, ",");  //100,000
				break;
	default:    break;
	}

	osObject << std::left;

	osObject << std::setfill('-') << setw(BORDER_COL) << "-"
			 << std::setfill(' ') << std::endl;

	osObject << setw(BLANK_COL) << " " << cObject.countryName
			 << ", " << cObject.abbreviation;

	osObject << std::endl << std::setfill('-') << setw(BORDER_COL) << "-"
			              << std::setfill(' ') << std::endl;


	osObject << setw(STATES_COL)     << "States/Districts" << " "
			 << setw(POPULATION_COL) << "Population"       << " "
			 << setw(GDP_PPP_COL)    << "GDP Per Capita"   << " "
			 << setw(GDP_COL)        << "GDP Nominal"      << std::endl;

	osObject << std::setfill('-') << setw(BORDER_COL) << "-"
			 << std::setfill(' ') << std::endl;

	osObject << setw(STATES_COL)     << cObject.states        << " "
			 << setw(POPULATION_COL) << populationStr         << " "
			 << setw(GDP_PPP_COL)    << GPPStr                << " "
			 << setw(GDP_COL)        << cObject.GDP;

	osObject << std::endl << std::setfill('-') << setw(BORDER_COL) << "-"
			              << std::setfill(' ') << std::endl;

	osObject << setw(CONTINENT_COL)  << "Continent"           << " "
			 << setw(CAPITAL_COL)    << "Capital"			  << " "
			 << setw(LEADER_COL)     << "Leader"			  << " "
			 << setw(DEMONYM_COL)    << "Demonym"             << std::endl;

	osObject << std::setfill('-') << setw(BORDER_COL) << "-"
			 << std::setfill(' ') << std::endl;

	osObject << setw(CONTINENT_COL)  << cObject.continent  	<< " "
			 << setw(CAPITAL_COL)    << cObject.capital    	<< " "
			 << setw(LEADER_COL)     << cObject.leader		<< " "
			 << setw(DEMONYM_COL)    << cObject.demonym;

	osObject << std::endl << std::setfill('-') << setw(BORDER_COL) << "-"
			              << std::setfill(' ') << std::endl;

	osObject << setw(LANGUGAGE_COL)  << "National Language"		<< " "
			 << setw(LANGUGAGE_COL)  << "Secondary Language"	<< " "
			 << setw(CURRENCY_COL)   << "Currency"				<< " "
			 << setw(RELIGION_COL)   << "Religion" 				<< std::endl;

	osObject << std::setfill('-') << setw(BORDER_COL) << "-"
			 << std::setfill(' ') << std::endl;

	osObject << setw(LANGUGAGE_COL)  << cObject.nationalLang	<< " "
			 << setw(LANGUGAGE_COL)  << cObject.secondaryLang	<< " "
			 << setw(CURRENCY_COL)   << cObject.currency		<< " "
			 << setw(RELIGION_COL)   << cObject.religion;

	osObject << std::endl << std::setfill('-') << setw(BORDER_COL) << "-"
			              << std::setfill(' ') << std::endl;

	osObject << std::right;

	return osObject;
}
