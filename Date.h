/*****************************************************
 *AUTHOR         :  The Oz & sirhC
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  4/30/15
 *****************************************************/
#ifndef DATES_H_
#define DATES_H_

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
 using namespace std;

const unsigned short MIN_YEAR     = 1900;
const unsigned short CURRENT_YEAR = 2015;

class Date
{
	public:

		/*****************************
		 * CONSTRUCTORS & DESTRUCTOR *
		 *****************************/

		Date();
		Date(unsigned short month,
			 unsigned short day,
			 unsigned short year);
		~Date();

		/*****************************
		 *         MUTATORS          *
		 *****************************/
		// uses private utility methods
		void SetDate(unsigned short 		month,
					 unsigned short day,
					 unsigned short year);

		/*****************************
		 *         ACCESSORS         *
		 *****************************/
		void GetDate(unsigned short         &month,
					 unsigned short &day,
					 unsigned short &year) const;

		unsigned short GetYear()  const;

		unsigned short 		   GetMonth() const;

		unsigned short GetDay()   const;

		bool IsLeapYear();

		// Displays in MM/DD/YYYY format
		string DisplayDate() const;


	private:

		/*****************************
		 * 		UTILITIES METHODS    *
		 *****************************/

		unsigned short GetDaysInMonth(unsigned short 		 month,
									  unsigned short year) const;

		bool IsLeapYear(unsigned short year) const;

		/*****************************
		 * 		VALIDATE  METHODS    *
		 *****************************/

		// Validates the month
		bool ValidateMonth(unsigned short month) const;

		// Checks if a day is valid takes leap year into consideration
		bool ValidateDay(unsigned short 		month,
						 unsigned short day,
						 unsigned short year) const;

		// Validates the year is between 1900 and the current year
		bool ValidateYear(unsigned short year) const;

		// Uses methods above to validate a given date
		// Checks against current day
		bool ValidateDate (unsigned short 		  month,
						   unsigned short day,
						   unsigned short year) const;

		/*****************************
		 * 		   ATTRIBUTES        *
		 *****************************/

		unsigned short 		   dateMonth;
		unsigned short dateDay;
		unsigned short dateYear;
};

/***********************************************************************
 * Date Class
 *   This class gets the current date, as well as all the attributes to
 *   create a new date.
 *   It manages 3 attributes: dateMonth, dateDay, and dateYear
 ***********************************************************************/

/*******************************
 ** CONSTRUCTOR & DESTRUCTORS **
 *******************************/

/***********************************************************************
 ** Date();
 **   Constructor; Initializes class attributes
 **   Parameter: None
 **   Returns  : Nothing
 ***********************************************************************/

/***********************************************************************
 ** Date();
 **   Parameter : month, day, year
 **   Returns   : Nothing
 ***********************************************************************/

/***********************************************************************
 ** ~Date();
 **   Destructor; Does not perform any specific function
 **   Parameter	: None
 **   Returns	: Nothing
 ***********************************************************************/

/**************
 ** MUTATORS **
 **************/

/***********************************************************************
 ** SetDate
 **
 **   Mutator; This function sets a date specified by the user, as long
 **   		   as it is valid, otherwise it asks to correct it
 **---------------------------------------------------------------------
 **   Parameter: month // IN - month of the year
 **   			 day   // IN - day of the month
 **   			 year  // IN - Specified year
 **---------------------------------------------------------------------
 **   Returns: Nothing
 ***********************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/***********************************************************************
 ** GetDate
 **
 **   Accessor; This gets the date values, and returns them by reference
 **---------------------------------------------------------------------
 **   Parameter: month // IN - month of the year
 **   			 day   // IN - day of the month
 **   			 year  // IN - Specified year
 **---------------------------------------------------------------------
 **   Returns: month, day, and year by reference
 ***********************************************************************/

/***********************************************************************
 ** GetYear
 **
 **   Accessor; This gets the year stored
 **---------------------------------------------------------------------
 **   Parameter: None
 **---------------------------------------------------------------------
 **   Returns: The year
 ***********************************************************************/

/***********************************************************************
 ** GetMonth
 **
 **   Accessor; This gets the month stored
 **---------------------------------------------------------------------
 **   Parameter: None
 **---------------------------------------------------------------------
 **   Returns: The month
 ***********************************************************************/

/***********************************************************************
 ** GetDaysInMonth
 **
 **   Accessor; This gets how many days are in the specified month
 **---------------------------------------------------------------------
 **   Parameter: month // IN - month specified
 **   			 year  // IN - Specified year
 **---------------------------------------------------------------------
 **   Returns: number of years in the month
 ***********************************************************************/

/***********************************************************************
 ** IsLeapYear
 **
 **   Accessor; This gets true or false weather the year is a leap year
 **---------------------------------------------------------------------
 **   Parameter: None
 **---------------------------------------------------------------------
 **   Returns: bool true or false if the year is a leap year
 ***********************************************************************/

/***********************************************************************
 ** ValidateMonth
 **
 **   Accessor; This gets true or false weather the month is a valid
 **   			month
 **---------------------------------------------------------------------
 **   Parameter: month // IN - month specified
 **---------------------------------------------------------------------
 **   Returns: bool true or false if the month is valid
 ***********************************************************************/

/***********************************************************************
 ** ValidateDay
 **
 **   Accessor; This gets true or false weather the day is a valid day
 **---------------------------------------------------------------------
 **   Parameter: day // IN - day specified
 **---------------------------------------------------------------------
 **   Returns: bool true or false if the day is a valid day
 ***********************************************************************/

/***********************************************************************
 ** ValidateYear
 **
 **   Accessor; This gets true or false weather the day is a valid day
 **---------------------------------------------------------------------
 **   Parameter: year // IN - year specified
 **---------------------------------------------------------------------
 **   Returns: bool true or false if the year is a valid year
 ***********************************************************************/

/***********************************************************************
 ** ValidateDate
 **
 **   Accessor; This gets true or false weather the date is a valid date
 **---------------------------------------------------------------------
 **   Parameter: 	month // IN - month specified
 **   				year  // IN - year specified
 **   				day   // IN - day specified
 **
 **---------------------------------------------------------------------
 **   Returns: bool true or false if the date is a valid date
 ***********************************************************************/

#endif /* DATES_H_ */
