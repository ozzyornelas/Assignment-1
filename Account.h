/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Date.h"
using namespace std;

class Account
{

public:
	Account();

	Account(string accntName,
			unsigned short accntNumber,
			Date openDate,
			float balanceAmt,
			string  acctType);

	virtual ~Account();

	virtual void UpdateAccount();

	string GetName() const;

	unsigned short GetAccountID()const;

	void SetinitialValues(string accntName,
						  unsigned short accntNumber,
						  Date openDate,
						  float balanceAmt,
						  string  acctType);

	void Deposit(float amountIn);

	virtual bool Withdraw(float withdrawAmt, unsigned short accntNumber, Date lastAccesed);

	virtual float GetBalance()const;

	virtual void  SetBalance(float newBalance);

private:

	string name;
	unsigned short accountNumber;

	Date openingDate;

	float balance;

	string accountType;

};




#endif /* ACCOUNT_H_ */
