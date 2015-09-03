/*****************************************************
 *AUTHOR         :  The Oz & sirhC
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  4/30/15
 *****************************************************/

#include "Date.h"

/**********************************************************************
 * GetDate
 *	This method gets the date stored
 *
 *	PRECONDITIONS
 *		month  : stored month
 *		day    : stored day
 *		year   : stored year
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: nothing - gets the stored date
 *********************************************************************/
void Date :: GetDate(unsigned short 		&month, //IN - month variable
		 	 	 	 unsigned short &day,   //IN - day variable
		 	 	 	 unsigned short &year) const //IN - year variable
{
	month = dateMonth + 1;
	day   = dateDay;
	year  = dateYear;
}

/**********************************************************************
 * GetYear
 *	This method gets the year stored
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: current year
 *********************************************************************/
unsigned short Date :: GetYear() const
{
	return dateYear;
}

/**********************************************************************
 * GetMonth
 *	This method gets the month stored
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: current month
 *********************************************************************/
unsigned short Date :: GetMonth() const
{
	return dateMonth;
}

/**********************************************************************
 * GetDay
 *	This method gets the day stored
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: current day
 *********************************************************************/
unsigned short Date :: GetDay() const
{
	return dateDay;
}

/**********************************************************************
 * IsLeapYear
 *	This method checks weather or not the current year is a leap year
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: true or false for a leap year
 *********************************************************************/
bool Date :: IsLeapYear()
{
	return IsLeapYear(GetYear());
}

/**********************************************************************
 * DisplayDate
 *	This method displays the date as MM/DD/YYYY
 *
 *	PRECONDITIONS
 *		NONE
 *
 *	POSTCONDITIONS
 *		none
 *
 * RETURNS: date as an string
 *********************************************************************/
string Date :: DisplayDate() const
{
	ostringstream outString;

	outString << GetMonth() + 1 << "/" << GetDay() << "/" << GetYear();

	return outString.str();
}

/**********************************************************************
 * GetDaysInMonth
 *	This method returns the number of days in the month
 *
 *	PRECONDITIONS
 *		month : stored month
 *		year  : stored year
 *
 *	POSTCONDITIONS
 *		number of days in the month (numDays)
 *
 * RETURNS: number of days in the month (numDays)
 *********************************************************************/
unsigned short Date :: GetDaysInMonth(unsigned short 		 month, //IN - stored month
									  unsigned short year) const //IN - stored year
{
	unsigned short numDays; //OUT - number of days in the month

	if(month == 2)
	{
		if(IsLeapYear(year))
		{
			numDays = 29;
		}
		else
		{
			numDays = 28;
		}
	}
	else if(month == 4 || month == 6 ||
			month == 9 ||month == 11)
	{
		numDays = 30;
	}
	else
	{
		numDays = 31;
	}

	return numDays;
}

/**********************************************************************
 * IsLeapYear
 *	This method gets true or false weather the year is a leap year
 *
 *	PRECONDITIONS
 *		year  : stored year
 *
 *	POSTCONDITIONS
 *		true of false
 *
 * RETURNS: true or false if the year is a leap year
 *********************************************************************/
bool Date :: IsLeapYear(unsigned short year) const //IN -stored year
{
	return ((year % 4 == 0)  &&
			(year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)));
}

/**********************************************************************
 * ValidateMonth
 *	This method gets true or false weather the month is a valid month
 *
 *	PRECONDITIONS
 *		month  : stored month
 *
 *	POSTCONDITIONS
 *		true of false
 *
 * RETURNS: true or false if the month is valid
 *********************************************************************/
bool Date :: ValidateMonth(unsigned short month) const // IN - stored month
{
	return month >= 1 && month <= 12;
}

/**********************************************************************
 * ValidateDay
 *	This method gets true or false weather the day is a valid day
 *
 *	PRECONDITIONS
 *		month : stored month
 *		day   : stored day
 *		year  : stored year
 *
 *	POSTCONDITIONS
 *		true of false
 *
 * RETURNS: true or false if the day is valid
 *********************************************************************/
bool Date :: ValidateDay(unsigned short         month, //IN - stored month
						 unsigned short day,   //IN - stored day
						 unsigned short year) const //IN - stored year
{
	return day <= GetDaysInMonth(month, year);
}

/**********************************************************************
 * ValidateYear
 *	This method gets true or false weather the year is a valid year
 *
 *	PRECONDITIONS
 *		year  : stored year
 *
 *	POSTCONDITIONS
 *		true of false
 *
 * RETURNS: true or false if the year is valid
 *********************************************************************/
bool Date :: ValidateYear(unsigned short year) const //IN - stored year
{
	return year >= MIN_YEAR && year <= CURRENT_YEAR;
}

/**********************************************************************
 * ValidateDate
 *	This method gets true or false weather the date is a valid date
 *
 *	PRECONDITIONS
 *		month : stored month
 *		day   : stored day
 *		year  : stored year
 *
 *	POSTCONDITIONS
 *		true of false
 *
 * RETURNS: true or false if the date is valid
 *********************************************************************/
bool Date :: ValidateDate(unsigned short         month, //IN - stored month
		 	 	 	 	  unsigned short day,   //IN - stored day
		 	 	 	 	  unsigned short year) const //IN - stored year
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

	return (month <= currentMonth && day <= currentMonth &&
			year <= currentYear);
}


