/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "Account.h"

Account :: Account()
{
	name.clear();
		 accountNumber = 0;

		 openingDate.SetDate(0,0,0);

		balance = 0.0;

		accountType.clear();
}

Account :: Account(string accntName,
					unsigned short accntNumber,
					Date openDate,
					float balanceAmt,
					string  acctType)
{
	 name = accntName;
		 accountNumber = accntNumber;

		 openingDate = openDate;

		balance = balanceAmt;

		accountType = acctType;
}

Account :: ~Account()
{

}

void Account :: SetinitialValues(string accntName,
						  unsigned short accntNumber,
						  Date openDate,
						  float balanceAmt,
						  string  acctType)
{
	 name = accntName;
	 accountNumber = accntNumber;

	 openingDate = openDate;

	balance = balanceAmt;

	accountType = acctType;

}

void UpdateAccount()
{



}

 bool Account :: Withdraw(float withdrawAmt, unsigned short accntNumber, Date lastAccesed)
 {

//	 float currentBalance;
//
//	 currentBalance = GetBalance();
//
//	 if(currentBalance > 0)
//	 {
//		 currentBalance -= withdrawAmt;
//	 }
//	 else if(currentBalance < 0)
//	 {
//
//		 cout << endl << endl <<"Insufficient Funds" << endl << endl;
//
//	 }

	 return false;

 }





