/*
*Name: Mcqs.h
*Purpose: To declare the Mcqs (Mult-Choice Question) class for Rogueish
*Date Created: 07 September 2016
*Last Modified: 07 September 2016
*Changelog:
*		Jacob, 07 Sep 16: Created file, defined class
*/

#ifndef MCQS_H
#define MCQS_H

#include <string>

using namespace std;

class Mcqs
{
public:
	//Dflt cstr
	Mcqs( );
	//Data accessor/mutators
	//For initializing answers to the questions
	void initAns( string s );
	void initAns( string s1, string s2 );
	void initAns( string s1, string s2, string s3 );
	void initAns( string s1, string s2, string s3, string s4 );
	void initAns( string s1, string s2, string s3, string s4, string s5 );

	bool checkAns( string s );
	string giveAns( string s );

private:
	string anls[ 5 ];   //Answer list/array. Needs to be a pointer to a string
};

#endif