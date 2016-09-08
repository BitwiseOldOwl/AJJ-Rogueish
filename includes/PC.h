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

class PC  //NEEDS to be dynamic!
{
public:
	//Dflt cstr
	PC( );
	//Data accessors/mutators
	int getCoreStats( );   //Fetches core stat scores
	int changeStr( int val );         //This and below for modding core stats
	int changeCon( int val );
	int changeDex( int val );
	int changeInt( int val );
	int changeWis( int val );
	int changeCha( int val );

	int getStr( );   //This and below for checking specific values amongst the core stats
	int getCon( );
	int getDex( );
	int getInt( );
	int getWis( );
	int getCha( );

private:
	int* STR;
	int* CON;
	int* DEX;
	int* INT;
	int* WIS;
	int* CHA;

	int* karma;

	string playerClass;
	string playerRace;
};

#endif