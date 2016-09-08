/*
*Name: Story.h
*Purpose: To declare the Story class for Rogueish
*Date Created: 08 September 2016
*Last Modified: 08 September 2016
*Changelog:
*		Jacob, 08 Sep 16: Created file, defined class
*/

#include "MCQ.h"

#ifndef STORY_H
#define STORY_H

class Story : MCQ
{
public:
	//Dflt Cstr
	Story( );
	//Data accessors/mutators
	string displayText( );
	void storeChoice( string s );
	void feedBack( );

private:
	string playerChoice;
	string ansPrompt;
	string ansToRet;
};

#endif