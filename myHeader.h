/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
#include <ios>
#include <cstdlib>
#include <sstream>
#include <string>

#include "Account.h"
#include "SaddlebackBank.h"
using namespace std;


/***********************************************************
 *PrintHeaderToFile
 *	 This function takes care of the class heading so it
 *	 prints the most proper one (lab or assignment)
 *	 -Returns nothing -->This will ouput class heading
 ***********************************************************/
void PrintHeader(ostream& outputF,    // OUT - class header to file
				 string   asName,     // IN  - Assignment name
				 string   programers, // IN  - Programmer(s) name
				 char     asType,     // IN  - Type of project
								      //      (lab or assignment)
				 int      asNum);     // IN  - Project number

/***********************************************************
 *Fill
 *	 This function uses the fill function to fill a whole
 *   line with a certain characeter and then it clears it
 *   for the next one to be written anything.
 *	 -Returns nothing --> the filled line
 ***********************************************************/
void Fill(ostream& outputT, //OUT - output stream
		  char fillChar,    //IN  - character to fill the line with
		  int width);       //IN  - width of the line to be filled out

/***********************************************************
 *CheckInOutFile
 *	This function Checks the Input and the output file name and
 *  decides the most proper file to use.
 *	 -Returns nothing --> file is fassed by reference.
 ***********************************************************/
void CheckInOutFile(string fileType,  //IN       - File type name
		                              //           (input or output)
					string& fileName);//IN & OUT - File to be used
									  //           in the program

/***********************************************************
 *CalcPrompt
 *	This function will calculate the prompt col width
 * 	given the two error messages. It will compare
 * 	the two messages and make the size of the column
 * 	to the larger column length.
 *	 -Returns colmn --> The size of the setw width
 ***********************************************************/
int CalcPrompt(string shortStr, //IN - Shortest Error Message
			   string longStr);  //IN - longest Error Message

void ReadInfoFromFile(Bank   &createAccount,
		  	  	  	  string inFileName);

#endif /* MYHEADER_H_ */
