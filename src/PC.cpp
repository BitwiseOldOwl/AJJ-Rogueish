/*
*Name: PC.cpp
*Purpose: To implement the PC class for Rogueish
*Date Created: 08 September 2016
*Last Modified: 08 September 2016
*Changelog:
*		Jacob, 08 Sep 16: Created file, implemented class
*/

#include <iostream>
#include "../includes/PC.h"    //Dir resolve. Must be updated if loc of PC.h changes

using namespace std;

PC::PC( )
{
	int* temp = new int;

	for ( int k = 0; k < 6; ++k )
	{
		temp = stats[ k ];
		*temp = ERR;
	}

	temp = health;
	*temp = ERR;

	temp = mana;
	*temp = ERR;

	delete temp;
}

int* PC::getCoreStats( )   //Must return a pointer to an int so that we can return the array of stats
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