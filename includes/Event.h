/*
*Name: Event.h
*Purpose: To declare the Event class for Rogueish
*Date Created: 09 September 2016
*Last Modified: 09 September 2016
*Changelog:
*		Jacob, 09 Sep 16: Created file, defined class
*/

#ifndef EVENT_H
#define EVENT_H

#include "../includes/Mcqs.h"
#include <string>

//using namespace std;

class Event : public Mcqs
{
public:
	//Dflt Cstr
	Event( );
	//Data accessors/mutators
	void setDispTxt( string s );
	void setReslTxt( string s1, string s2 );
	


private:

};

#endif