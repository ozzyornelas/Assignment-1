/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "SaddlebackBank.h"

Bank :: Bank()
{

	head = NULL;
	tail = NULL;

}

Bank :: ~Bank()
{

	BankNode   *deleteAcct;
	deleteAcct = head;

	while(head != NULL)
	{
		head = head->next;
		delete deleteAcct;
		deleteAcct = head;
	}

	deleteAcct = NULL;
}

void Bank :: Deposit(Account destination,
					 float depositAmt)
{



}

void Bank :: Transfer(float  amountTransfer,
			  unsigned short originalAcct,
			  unsigned short destinyAcct)
{


}

void Bank :: OpenAccount(Account *newAccount)
{

			bool        found;			//PROC - true if the item is found
			BankNode  *searchPtr;	    //PROC - Pointer to move through the list
			BankNode  *bankNodePtr;
			searchPtr = new BankNode;
			searchPtr     = head;
			bankNodePtr = new BankNode;

			if(bankNodePtr != NULL)
			{
				//PROC - Assign the new sheep object to the sheep node pointer to add
				bankNodePtr->myAccountNode = newAccount;

				//PROC - Case if list is empty or new node needs to be in the front
				if(IsEmpty() ||
				   head-> myAccountNode->GetAccountID() > bankNodePtr->myAccountNode->GetAccountID())
				{

					bankNodePtr->prev = NULL;
					bankNodePtr -> next = head;
					if(!IsEmpty())
					{
						head->prev = bankNodePtr;
					}
					head = bankNodePtr;
					bankNodePtr = NULL;
				}
				//PROC - Find the proper location
				else
				{

					while(searchPtr->next != NULL && !found)
					{

						if(searchPtr->next->myAccountNode->GetAccountID() >
						bankNodePtr->myAccountNode->GetAccountID())
						{
							found = true;
						}
						else
						{
							searchPtr = searchPtr->next;
						}
					}
					//PROC - Insert the new node in the found location
					bankNodePtr -> prev = searchPtr;
					bankNodePtr -> next = searchPtr -> next;
					searchPtr     -> next = bankNodePtr;

					//PROC - Link in the node to the tail end of list unless at end


					if(bankNodePtr -> next != NULL)
					{
						bankNodePtr -> next -> prev = bankNodePtr;
						tail = bankNodePtr;
					}
					bankNodePtr = NULL;
				}

//				count++;

			}
			else
			{
				cout << "**** OUT OF MEMORY!!****";
			}

			delete bankNodePtr;
			bankNodePtr = NULL;
	}
