/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "MoneyMarket.h"

float MoneyMarket :: GetBalance() const
{

	return Savings :: GetBalance();

}


 bool MoneyMarket :: IsEmpty() const
 {

	return GetBalance() == 0;
 }
