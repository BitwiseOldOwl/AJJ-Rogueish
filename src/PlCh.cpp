/*
*Name: PlCh.cpp
*Purpose: To implement the PlCh class for Rogueish
*Date Created: 08 September 2016
*Last Modified: 08 September 2016
*Changelog:
*		Jacob, 08 Sep 16: Created file, implemented class
*/

#include "../includes/PlCh.h"    //Dir resolve. Must be updated if loc of PlCh.h changes
#include "../includes/RogueishMacros.h"   //Dir resolve. Must be updated if loc of RogueishMacros.h changes

using namespace std;

PlCh::PlCh( )
{
	int* temp;

	for ( int k = 0; k < 6; ++k )
	{
		temp = stats[ k ];
		*temp = CHERR;
	}

	temp = health;
	*temp = CHERR;

	temp = mana;
	*temp = CHERR;

	delete temp;
}

PlCh::~PlCh( )
{
	delete health;
	delete mana;
	delete karma;

	for ( int k = 0; k < 6; ++k )
	{
		delete stats[ k ];
	}
}

int* PlCh::getCoreStats( )   //Must return a pointer to an int so that we can return the array of stats
{
	int toRet[ 6 ];
	int* temp = new int;

	for ( int k = 0; k < 6; ++k )
	{
		temp = stats[ k ];
		toRet[ k ] = *temp;
	}

	delete temp;
	return toRet;
}