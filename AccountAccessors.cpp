/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Account.h"

unsigned short Account :: GetAccountID()const
{

	return accountNumber;

}

string Account :: GetName() const
{
	return name;
}

float Account :: GetBalance()const
{

	return balance;

}

void  Account :: SetBalance(float newBalance)
{

	balance -= newBalance;

}
