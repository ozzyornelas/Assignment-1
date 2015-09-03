/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include "Savings.h"

class MoneyMarket : public Savings
{

	MoneyMarket();

	MoneyMarket(float intRate,
				float fee);

	~MoneyMarket();

	virtual void UpdateAccount(Date lastOpenDate);

	virtual bool Withdraw(float withdrawAmt,
							 unsigned short accntNumber,
							 Date lastAccesed);

	float GetBalance() const;

private:

	virtual bool IsEmpty() const;

	float interestRate;

	float withdrawalFee;

};



#endif /* MONEYMARKET_H_ */
