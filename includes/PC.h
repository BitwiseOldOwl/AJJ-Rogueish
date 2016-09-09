/*
*Name: PC.h
*Purpose: To declare the PC class for Rogueish
*Date Created: 08 September 2016
*Last Modified: 08 September 2016
*Changelog:
*		Jacob, 08 Sep 16: Created file, defined class
*/

#ifndef PC_H
#define PC_H

#include <string>
#include "../includes/NecessaryIncludes.h"

using namespace std;

class PC  //NEEDS to be dynamic!
{
public:
	//Dflt cstr
	PC( );
	//Data accessors/mutators
	int* getCoreStats( );   //Fetches core stat scores
	void changeStr( int val );         //This and below for modding core stats
	void changeCon( int val );
	void changeDex( int val );
	void changeInt( int val );
	void changeWis( int val );
	void changeCha( int val );

	int getStr( );   //This and below for checking specific values amongst the core stats
	int getCon( );
	int getDex( );
	int getInt( );
	int getWis( );
	int getCha( );

private:
	int* stats[ 6 ];  //In order: Str, Con, Dex, Int, Wis, Cha
	int* health;
	int* mana;

	int* karma;

	string playerClass;
	string playerRace;
};

#endif