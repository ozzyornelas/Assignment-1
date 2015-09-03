/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"
#include "SaddlebackBank.h"
#include "Date.h"
#include "Account.h"

/**********************************************************
*
* FUNCTION PrintHeader
*_________________________________________________________
* This function receives an assignment name, type
* and number then outputs the appropriate header -
* returns nothing.
*_________________________________________________________
* PRE-CONDITIONS
* asName  :  Assignment Name
* asType  :  Assignment Type
* asNum   :  Assignment Number
*
* POST-CONDITIONS
* This function will output the class heading.
* <Post-conditions are the changed outputs either
* passed by value or by reference OR anything affected
* by the function>
***********************************************************/

void ReadInfoFromFile(Bank   &createAccount,
					  string inFileName)
{

	ifstream 	  inFile;

	Date           newDate;

	unsigned short myMonth;
	unsigned short newDay;
	unsigned short newMonth;
	unsigned short newYear;

	unsigned short acctNumber;
	string         acctType;

	float          balanceAmt;

	string         accntName;


	inFile.open(inFileName.c_str());

	while(!inFile.eof())
	{

		inFile >> newDay;

		inFile >> newMonth;

		inFile >> newYear;

		inFile >> acctNumber;

		getline(inFile, acctType);

		inFile >> balanceAmt;

		getline(inFile, accntName);

		cin.ignore(numeric_limits <streamsize> :: max());

		newDate.SetDate(myMonth, newDay, newYear);

		//createAccount->SetinitialValues(accntName, acctNumber, newDate, balanceAmt, acctType);

	}

}
