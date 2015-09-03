/*****************************************************
 *AUTHOR         :  The Oz & sirhC
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  4/30/15
 *****************************************************/

#include "Date.h"

/**********************************************************************
 * Date :: Date()
 *	This Constructor Initializes class attributes
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		NONE
 *
 * RETURNS: nothing - initializes the Date class
 *********************************************************************/
Date :: Date()
{

	time_t now;
	tm *currentTime;
	unsigned short currentYear;   // CALC - stores current year
	unsigned short currentMonth;  // CALC - stores current month
	unsigned short currentDay;    // CALC - stores current day

	now = time(NULL);
	currentTime = localtime(&now);

	currentYear = 1900 + currentTime -> tm_year;
	currentMonth = currentTime -> tm_mon;
	currentDay = currentTime -> tm_mday;

	dateMonth = currentMonth;
	dateDay   = currentDay;
	dateYear  = currentYear;

}

/**********************************************************************
 * Date :: Date(month, day, year)
 *
 *	This Constructor Initializes class attributes specified in main, if
 *	not valid, they are set to default current time
 *
 *	PRECONDITIONS
 *		month :  Month of the year
 *		day   :  day of the month
 *		year  :  current year
 *
 *	POSTCONDITIONS
 *		NONE
 *
 * RETURNS: month, day, and year - initializes the Date class
 *********************************************************************/
Date :: Date(unsigned short 		month,
		 	 unsigned short day,
		 	 unsigned short year)
{

	if(ValidateDay(month, day, year) &&
	   ValidateMonth(month) && ValidateYear(year))
	{

		dateMonth  = month;
		dateDay    = day;
		dateYear   = year;
	}
	else
	{
		cout << "INVALID DATE. Setting time to default......"
		     << endl << endl;

		time_t now;
		tm *currentTime;
		unsigned short currentYear;   // CALC - stores current year
		unsigned short currentMonth;  // CALC - stores current month
		unsigned short currentDay;    // CALC - stores current day

		now = time(NULL);
		currentTime = localtime(&now);

		currentYear = 1900 + currentTime -> tm_year;
		currentMonth = currentTime -> tm_mon;
		currentDay = currentTime -> tm_mday;

		dateMonth = currentMonth;
		dateDay   = currentDay;
		dateYear  = currentYear;
	}
}

/**********************************************************************
 * Date :: ~Date
 *
 *	This Distructor does nothing
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		NONE
 *
 * RETURNS: Nothing
 *********************************************************************/
Date :: ~Date()
{

}

/**********************************************************************
 * SetDate
 *	This method sates a date specified by the user
 *
 *	PRECONDITIONS
 *		month : specified month
 *		day   : specified day
 *		year  : specified year
 *
 *	POSTCONDITIONS
 *		NONE
 *
 * RETURNS: Nothing -> sets the date.
 *********************************************************************/
void Date :: SetDate(unsigned short         month,
	 	 	 	 	 unsigned short day,
	 	 	 	 	 unsigned short year)
{
	unsigned short newMonth; // IN - new month
	unsigned short newDay;	 // IN - new day
	unsigned short newYear;  // IN - new Year
	bool invalid;			 // CALC - checks if failed state

	invalid = false;

	//validate the month
	if(!ValidateMonth(month))
	{

		do
		{
			invalid = false;

			cout << "\n\nYou've entered an invalid month.\n"
					"Please Enter a Valid Month: ";

			if(!(cin >> newMonth))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}

			newMonth--;
		}while(!ValidateMonth(newMonth) || invalid);

		dateMonth = newMonth;
	}
	else
	{
		dateMonth = month - 1;
	}

	invalid = false;

	//validate day input
	if(!ValidateDay(dateMonth, day, year))
	{
		do
		{
			invalid = false;

			cout << "\n\nYou've entered an invalid day.\n"
					"Please Enter a Valid Day: ";


			if(!(cin >> newDay))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}

		}while(!ValidateDay(dateMonth, newDay, year) || invalid);

		dateDay = newDay;
	}
	else
	{
		dateDay= day;
	}

	invalid = false;

	//validate year input
	if(!ValidateYear(year))
	{
		do
		{
			invalid = false;

			cout << "\n\nYou've entered an invalid year.\n"
					"Please Enter a Valid Year: ";
			if(!(cin >> newYear))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}

		}while(!ValidateYear(newYear) || invalid);

		dateYear = newYear;
	}
	else
	{
		dateYear = year;
	}

}

