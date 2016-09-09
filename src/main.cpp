/*
*Name: main.cpp
*Purpose: The main
*Date Created: 07 September 2016
*Last Modified: 07 September 2016
*Changelog:
*		Jacob, 07 Sep 16: Created file
*		Jacob, 09 Sep 16: Added main, includes
*/

#include <iostream>
#include <string>
#include "../includes/MCQ.h"   //Directory resolves. Must be changed if loc of ~.h changes
#include "../includes/PC.h"
#include "../includes/Story.h"
#include "../includes/Rogueish.h"
#include "../src/MCQ.cpp"         //Directory resolves. Must be changed if loc of ~.cpp changes
#include "../src/PC.cpp"
#include "../src/Story.cpp"
#include "../src/Rogueish.cpp"
#include "../includes/NecessaryIncludes.h"   //Macros and other such def'ns


using namespace std;

int main( )
{
	PC* pchar = new PC;

	cout << "\n\nTesting, testing, 1-2-3\n\n";
	pchar->getCoreStats( );
	cout << "\n\n";

	delete pchar;
	return 0;
}