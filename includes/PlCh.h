/*
*Name: PlCh.h
*Purpose: To declare the PlCh class for Rogueish
*Date Created: 08 September 2016
*Last Modified: 08 September 2016
*Changelog:
*		Jacob, 08 Sep 16: Created file, defined class
*/

#ifndef PLCH_H
#define PLCH_H

#include <string>

using namespace std;

class PlCh  //NEEDS to be dynamic!
{
public:
	//Dflt cstr
	PlCh( );
	//Dstr
	~PlCh( );
	//Data accessors/mutators
	void setName( string s );
	void setRace( string s );
	void setGender( string s );
	void setClass( string s );

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
	string playerName;
	string playerGender;
};

#endif