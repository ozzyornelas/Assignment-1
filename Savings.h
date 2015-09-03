/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "Account.h"

class Savings : public Account
{
		Savings();

		~Savings();

		virtual bool  Withdraw(float withdrawAmt,
								unsigned short accntNumber,
							    Date lastAccesed);

		virtual void UpdateAccount(Date lastOpenDate);

		virtual string Display() const;

	private:


		virtual void Deposit(float amntIn);

		bool IsOverdrawn() const;

		bool IsNegative() const;

		bool MaxLimit() const;

		virtual float GetBalance() const;


};

#endif /* SAVINGS_H_ */
