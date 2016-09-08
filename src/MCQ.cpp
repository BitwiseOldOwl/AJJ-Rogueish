/*
*Name: MCQ.cpp
*Purpose: To implement the MCQ (Mult-Choice Question) class for the Rogueish
*Date Created: 07 September 2016
*Last Modified: 07 September 2016
*Changelog:
*		Jacob, 07 Sep 16: Created file, implemented class
*/

#include "../includes/MCQ.h"   //Directory resolve. Must be changed if loc of MCQ.h changes

MCQ::MCQ( )  //Dflt cstr
{
	int k;

	for ( int k = 0; k < 5; ++k )
	{
		anls[ k ] = "Badval";     //Set all vals initially to bad value. The user is screwing up if they access one.
	}
}

void MCQ::initAns( string s )   //For init'ing a single answer in the answer array, the rest are Bv
{
	anls[ 0 ] = s;

	for ( int k = 1; k < 5; ++k )
	{
		anls[ k ] = "Badval";
	}
}

void MCQ::initAns( string s1, string s2 )  //Second verse, but two answers init'd
{
	anls[ 0 ] = s1;
	anls[ 1 ] = s2;

	for( int k = 2; k < 5; ++k )
	{
		anls[ k ] = "Badval";
	}
}

void MCQ::initAns( string s1, string s2, string s3 )
{
	anls[ 0 ] = s1;
	anls[ 1 ] = s2;
	anls[ 2 ] = s3;

	for ( int k = 3; k < 5; ++k )
	{
		anls[ k ] = "Badval";
	}
}

void MCQ::initAns( string s1, string s2, string s3, string s4 )
{
	anls[ 0 ] = s1;
	anls[ 1 ] = s2;
	anls[ 2 ] = s3;
	anls[ 3 ] = s4;

	anls[ 4 ] = "Badval";
}

void MCQ::initAns( string s1, string s2, string s3, string s4, string s5 )
{
	anls[ 0 ] = s1;
	anls[ 1 ] = s2;
	anls[ 2 ] = s3;
	anls[ 3 ] = s4;
	anls[ 4 ] = s5;
}

bool MCQ::checkAns( string s )
{
	if ( s == "A" || s == "B" || s == "C" || s == "D" || s == "E" )
	{
		return true;
	}
	else
	{
		return false;
	}
}

string MCQ::giveAns( string s )
{
	string toRet;

	if ( s == "A" )
	{
		toRet = anls[ 0 ];
	}
	else if ( s == "B" )
	{
		toRet = anls[ 1 ];
	}
	else if ( s == "C" )
	{
		toRet = anls[ 2 ];
	}
	else if ( s == "D" )
	{
		toRet = anls[ 3 ];
	}
	else
	{
		toRet = anls[ 4 ];
	}

	return toRet;
}