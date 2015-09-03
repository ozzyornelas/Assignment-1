/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION Fill
 *__________________________________________________________
 * This function uses the fill function to fill a whole
 * line with a certain characeter and then it clears it
 * for the next one to be written anything
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	outputT  : output stream
 * 	fillChar : character to fill the line with
 * 	width    : width of the line to be filled out
 *
 *POST-CONDITIONS
 *
 *	NONE
 ***********************************************************/

void Fill(ostream& outputT, //OUT - output stream
		  char fillChar,    //IN  - character to fill the line with
		  int width)        //IN  - width of the line to be filled out
{

	outputT << setfill(fillChar) << setw(width) << fillChar;
	outputT << setfill(' ');
}
