/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Savings.h"

Savings :: Savings()
{

}

Savings :: ~Savings()
{

}

 bool Savings :: Withdraw(float withdrawAmt,
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

 void Savings :: UpdateAccount(Date lastOpenDate)
 {



 }


void  Savings :: Deposit(float newBalance)
{

	Account :: SetBalance(newBalance);

}
