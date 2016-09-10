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
#include "../includes/NecessaryIncludes.h"   //NEEDED for class support


using namespace std;

int main( )
{
	PlCh pc;
	string derps;   //DBGGING KWF

	cout << "\n\nTesting, testing, 1-2-3\n\n";
	pc.getCoreStats( );
	cout << "Please insert derps:    ";    //DBGGING KWF + line below
	cin >> derps;

	//delete pc;
	return 0;
}