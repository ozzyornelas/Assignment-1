/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Checking.h"

Checking :: Checking()
{

}

Checking :: ~Checking()
{

}

 bool Checking :: Withdraw(float withdrawAmt,
							 unsigned short accntNumber,
							 Date lastAccesed)
 {

	 bool withdraw = false;

	 if(!IsNegative() && withdrawAmt < GetBalance())
	 {

		 Deposit(withdrawAmt);

		 withdraw = true;

	 }
	 else if(!IsNegative() && withdrawAmt > GetBalance() && !IsOverdrawn())
	 {
		 Deposit(withdrawAmt + 20.0);

		 withdraw = true;
	 }
	 else
	 {
		 cout << endl << "Cannot withdraw from account (under 200)" << endl;
	 }

	 return withdraw;
 }

 void Checking :: UpdateAccount(Date lastOpenDate)
 {



 }

float Checking :: AddFee(float amtAdd)
{

	float newBalance;

	newBalance = GetBalance();

	if(IsNegative() && !IsOverdrawn())
	{
		newBalance += - amtAdd;
	}
	else
	{
		cout << endl << "Cannot withdraw. Not enough funds" << endl << endl;
	}

return newBalance;
}

void  Checking :: Deposit(float newBalance)
{

	Account :: SetBalance(newBalance);

}
