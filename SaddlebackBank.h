/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#ifndef SADDLEBACKBANK_H_
#define SADDLEBACKBANK_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Date.h"
 using namespace std;

#include "Account.h"

class Bank
{

public :

	Bank();

	virtual ~Bank();

	void    Deposit(Account destination, float depositAmt);


	void Transfer(float 		 amountTransfer,
				  unsigned short originalAcct,
				  unsigned short destinyAcct);

	void OpenAccount(Account *newAccount);

	string Display()const;



//	virtual string Display() const;

private:

	bool IsEmpty() const;

	void FindAccount(Account *&findAccount) const;

	struct BankNode
	{

		Account  * myAccountNode;
		BankNode * next;
		BankNode * prev;

	};

	BankNode * head;
	BankNode * tail;

};


#endif /* SADDLEBACKBANK_H_ */
