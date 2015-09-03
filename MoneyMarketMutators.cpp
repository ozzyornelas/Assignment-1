/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "MoneyMarket.h"

MoneyMarket :: MoneyMarket()
{
	 interestRate   =  .20;

	 withdrawalFee  = 1.5;
}

MoneyMarket :: MoneyMarket(float intRate,
						   float fee)
{

	interestRate   = intRate;

	withdrawalFee  = fee;

}

MoneyMarket :: ~MoneyMarket()
{

}

bool MoneyMarket :: Withdraw(float withdrawAmt,
							 unsigned short accntNumber,
							 Date lastAccesed)
 {

	 bool withdraw = false;

	 if(!IsEmpty() && withdrawAmt < GetBalance())
	 {

		 Deposit(withdrawAmt);

		 withdraw = true;

	 }
	 else if(!IsEmpty() && withdrawAmt > GetBalance() && !IsOverdrawn())
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

 void MoneyMarket :: UpdateAccount(Date lastOpenDate)
 {



 }
