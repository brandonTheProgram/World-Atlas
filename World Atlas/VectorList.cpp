#include "VectorList.h"

/************************************************************************
* Method VectorList: Class VectorList
*----------------------------------------------------------------------
* 	 This method creates the VectorList object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
VectorList::VectorList()
{
	countryList  .clear();
	northAmerList.clear();
	southAmerList.clear();
	asiaList     .clear();
	europeList   .clear();
	africaList   .clear();
	oceaniaList  .clear();
}

/************************************************************************
* Method ~VectorList: Class VectorList
*----------------------------------------------------------------------
* 	 This method deletes the VectorList object
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
VectorList::~VectorList()
{

}

/************************************************************************
* Method Push: Class VectorList
*----------------------------------------------------------------------
* 	 This method adds the new country to the lists
* 	 ==> returns nothing
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
* 		NEW_COUNTRY - the new country that is being added to the list
*
* POST-CONDITIONS
* 	==> returns nothing
*************************************************************************/
void VectorList::Push(const Country& NEW_COUNTRY)
{
	countryList.push_back(NEW_COUNTRY);

	//Depending the the enum, add the country to the pertaining list
	switch(NEW_COUNTRY.GetContEnum())
	{
	case NORTH_AMERICA: northAmerList.push_back(NEW_COUNTRY);
						break;
	case SOUTH_AMERICA: southAmerList.push_back(NEW_COUNTRY);
						break;
	case AFRICA:		africaList.push_back(NEW_COUNTRY);
						break;
	case EUROPE:		europeList.push_back(NEW_COUNTRY);
						break;
	case ASIA:			asiaList.push_back(NEW_COUNTRY);
						break;
	case OCEANIA:		oceaniaList.push_back(NEW_COUNTRY);
						break;
	default:			break;
	}
}


/************************************************************************
* Method Random: Class VectorList
*----------------------------------------------------------------------
* 	 This method returns a random country from the list pertaining to the
* 	 	menu choice
* 	 ==> returns a random country
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* 	The following need to be passed in
* 		CONTINENT_CHOICE - the menu choice
*
* POST-CONDITIONS
* 	==> returns a random country
*************************************************************************/
Country VectorList::Random(const Continent& CONTINENT_CHOICE) const
{
	vector<Country> shuffleVect; //PROC - The shuffled list

	unsigned short size;		 //PROC - The size of the vector
	unsigned short index;		 //PROC - The index in the vector

	switch(CONTINENT_CHOICE)
	{
		case EXIT:
		case END:			break;

		case DEFAULT: 		shuffleVect = countryList;
							std::random_shuffle(shuffleVect.begin(),
											    shuffleVect.end());
							break;
		case NORTH_AMERICA: shuffleVect = northAmerList;
							std::random_shuffle(shuffleVect.begin(),
											    shuffleVect.end());
							break;
		case SOUTH_AMERICA: shuffleVect = southAmerList;
							std::random_shuffle(shuffleVect.begin(),
												shuffleVect.end());
							break;
		case AFRICA:		shuffleVect = africaList;
							std::random_shuffle(shuffleVect.begin(),
												shuffleVect.end());
							break;
		case EUROPE:		shuffleVect = europeList;
							std::random_shuffle(shuffleVect.begin(),
												shuffleVect.end());
							break;
		case ASIA:			shuffleVect = asiaList;
							std::random_shuffle(shuffleVect.begin(),
												shuffleVect.end());
							break;
		case OCEANIA:		shuffleVect = oceaniaList;
							std::random_shuffle(shuffleVect.begin(),
												shuffleVect.end());
							break;
	}

	//PROCESSING - Store the size of the vector
	size = shuffleVect.size();

	//PROCESSING - Store the random index
	index = (rand() % size);

	return shuffleVect[index];
}
