/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#ifndef CHECKING_H_
#define CHECKING_H_

#include "Account.h"

class Checking : public Account
{
public:

	Checking();

	~Checking();

	virtual bool Withdraw(float withdrawAmt, unsigned short accntNumber, Date lastAccesed);

	virtual void UpdateAccount(Date lastOpenDate);

private:

	float AddFee(float amtAdd);

	virtual void Deposit(float amntIn);

	bool IsOverdrawn() const;

	bool IsNegative() const;

	bool MaxLimit() const;

	virtual float GetBalance() const;

};


#endif /* CHECKING_H_ */
