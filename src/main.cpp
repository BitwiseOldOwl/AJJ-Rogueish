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
#include "../includes/NecessaryIncludes.h"   //NEEDED FOR EVERYTHING


using namespace std;

int main( )
{
	PlCh pc;
	string derps;   //DBGGING KWF
	int temp;

	cout << "\n\nTesting, testing, 1-2-3\n\n";
	pc.changeStr( 9002 );
	cout << "PlCh.getStr() test\n";
	temp = pc.getStr( );
	cout << "\n" << temp << "\n\n";
	cout << "Please insert derps:    ";    //DBGGING KWF + line below
	cin >> derps;
	cout << "Adam was here.\n\nDerps again:    ";
	cin >> derps;

	//delete pc;
	return 0;
}
