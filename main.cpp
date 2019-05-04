#include <iostream>
#include "list.h"
#include "linkedlist.h"

struct Node 
{ 
	int data; 
	Node * next; 
}; 

struct Node * newNode (int data)  
	{
		Node *temp = new Node; 
		temp->data = data; 
		temp->next = nullptr; 
		return temp; 
	} ; 
void RemoveDuplicates(struct Node *start) 
{ 
	struct Node *ptr1 , *ptr2, *dup; 

	ptr1 = start; 


	while (ptr1 != nullptr && ptr1->next != nullptr) 
	{ 
		ptr2 = ptr1; 

		// compare elements
		while (ptr2->next != nullptr) 
		{ 
			if (ptr1->data == ptr2->next->data) 
			{ 

			dup = ptr2->next; 
			ptr2->next = ptr2->next->next; 
			delete (dup); 
			} 
			else 
				ptr2 = ptr2->next; 
		} 
		ptr1 = ptr1->next; 
	}
} 

using namespace std; 






int main() 
{ 

	
} 
