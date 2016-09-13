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
	int temp;

	for ( int k = 0; k < 6; ++k )
	{
		stats[ k ] = CHERR;
	}

	health = CHERR;
	mana = CHERR;
	karma = CHERR;
}

void PlCh::setName( string s )
{
	playerName = s;
}

void PlCh::setRace( string s )
{
	if ( s != "Elf" && s != "Dwarf" && s != "Human" && s != "Half-Orc" || s != "Halfling" )
	{
		playerRace = "The coder shouldn't have did that.";
	}
	else
	{
		playerRace = s;
	}
}

void PlCh::setGender( string s )
{
	if ( s == "Male" || s == "Female" )
	{
		playerGender = s;
	}
	else
	{
		playerGender = "It isn't THAT much of a fantasy setting...";
	}
}

void PlCh::setClass( string s )
{
	playerClass = "This function indev. Go yell at Jacob to get him to fix it.";
}

void PlCh::changeStr( int val )
{
	int* temp;

	temp = &stats[ 0 ];
	*temp = val;
}

void PlCh::changeDex( int val )
{
	int* temp;

	temp = &stats[ 1 ];
	*temp = val;
}

void PlCh::changeCon( int val )
{
	int* temp;

	temp = &stats[ 2 ];
	*temp = val;
}

void PlCh::changeInt( int val )
{
	int* temp;

	temp = &stats[ 3 ];
	*temp = val;
}

void PlCh::changeWis( int val )
{
	int* temp;

	temp = &stats[ 4 ];
	*temp = val;
}

void PlCh::changeCha( int val )
{
	int* temp;

	temp = &stats[ 5 ];
	*temp = val;
}

int PlCh::getStr( )
{
	return stats[ 0 ];
}

int PlCh::getDex( )
{
	return stats[ 1 ];
}

int PlCh::getCon( )
{
	return stats[ 2 ];
}

int PlCh::getInt( )
{
	return stats[ 3 ];
}

int PlCh::getWis( )
{
	return stats[ 4 ];
}

int PlCh::getCha( )
{
	return stats[ 5 ];
}