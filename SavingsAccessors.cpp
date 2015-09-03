/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Savings.h"

bool Savings :: IsOverdrawn() const
{

	return GetBalance() < -200;

}

bool Savings :: IsNegative() const
{

	return GetBalance() < 0;

}

bool Savings :: MaxLimit() const
{

	return GetBalance() == -200;

}

float Savings :: GetBalance() const
{

	return Account :: GetBalance();

}
