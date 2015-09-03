/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Checking.h"

bool Checking :: IsOverdrawn() const
{

	return GetBalance() < -200;

}

bool Checking :: IsNegative() const
{

	return GetBalance() < 0;

}

bool Checking :: MaxLimit() const
{

	return GetBalance() == -200;

}

float Checking :: GetBalance() const
{

	return Account :: GetBalance();

}

