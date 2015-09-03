/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  5/12/15
 *****************************************************/

#include "SaddlebackBank.h"

bool Bank :: IsEmpty() const
{


	return head == NULL;
}

void Bank :: FindAccount(Account *&findAccount) const
{

	bool       found;
	BankNode *currentNode;

	found       = false;
	currentNode = head;

	if(!IsEmpty())
	{
		while(currentNode != NULL && found == false)
		{
			if(findAccount != currentNode->myAccountNode)
			{
				currentNode = currentNode->next;
			}
			else
			{
				found = true;
				findAccount = currentNode->myAccountNode;
			}
		}
}

}

//string Bank :: Display() const
//{
//
//}
