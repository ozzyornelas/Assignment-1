/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/************************************************************************
 * Searching Linked List
 * ______________________________________________________________________
 * This program allows a user to search for an specified movie title,
 * genre, actor, rating, or year. I also displays the information of
 * all the movies found. The program prompts for the input file name and
 * the output file name.
 * ______________________________________________________________________
 * INPUT:
 *   fileName    :  Input file Name
 *   outFileName :  output file name
 *
 * CONSTANTS
 *	NUM     : project number
 *	NAME    : Programmer's name
 *	TYPE    : Assignment ('A') or Lab ('L')
 *
 *	OPTION_MAX : Maximum option number the user can input.
 *	OPTION_MIN : Minimum option number the user can input.
 ************************************************************************/

int main()
{

	ofstream oFile;
	PrintHeader(oFile, "Saddleback Bank - OOP", "The Oz", 'A', 6);

	return 0;
}
