/***
Implementing HackerRank Data structure Linked List challenges

When to use a Linked List?
When one needs a quick dynamic allocation of memory than accessing

Inserting/Deleting with LinkedList O(1)
Inserting/Deleting with array O(n)

Downside
Finding index or specific data O(n)
Array does it in O(1)

By Raymond Xia 11/16/17
***/

#include "SingleLinkedList.hpp"

// Basic Contructor for Linked List
SingleLinkedList::SingleLinkedList()
{
	head = NULL;
	tail = NULL;
};

// Print the elements of the Linked List
void SingleLinkedList::print()
{
	Node * current = new Node;
	current = head;
	while(current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
};

// Add to the end of Linked List. If a empty list create a List with one element
void SingleLinkedList::append(int val)
{
	Node * newNode = new Node;
	newNode->data = val;
	newNode->next = NULL;

	if(head==NULL)
	{
		head = newNode;
		tail = newNode;
		newNode = NULL;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
};

// Add element to the beginging of the List. If empty list create a new list with one element
void SingleLinkedList::push(int val)
{
	Node * newNode = new Node;
	newNode->data = val;
	newNode->next = NULL;

	if(head==NULL)
	{
		head = newNode;
		tail = newNode;
		newNode = NULL;
	}
	else
	{
		newNode->next = head; 
		head = newNode;
	}
};

// Insert at any index of Linked List. If empty list create a new list with one element
void SingleLinkedList::insert(int index, int val)
{
	Node * newNode = new Node;
	newNode->data = val;

	if(head==NULL)
	{
		head = newNode;
		tail = newNode;
		newNode = NULL;
		return;
	}

	Node * prev = new Node;
	Node * current = new Node;
	current = head;

	for(int i = 1; i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	
	prev->next = newNode;
	newNode->next = current;
};

// Delete a node at any given position. If empty list return false
void SingleLinkedList::deleteNode(int index)
{
	if(head==NULL) { return; }

	Node * current = new Node;
	Node * prev = new Node;
	current = head;

	for(int i = 1; i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	prev->next = current->next;
};

// Print the Linked list in a reverse order. O(n)
void SingleLinkedList::printReverse()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		int counter = 0;
		Node * nodeCount = new Node;
		Node * current = new Node;
		
		nodeCount = head;
		current = head;
		while(nodeCount != NULL)
		{
			counter++;
			nodeCount = nodeCount->next;
		}
		
		int array[counter];
		int i = 0;

		while(current != NULL)
		{
			array[i] = current->data;
			i++;
			current = current->next;
		}

		for(int j = (counter - 1); j >=0; j--)
		{
			cout << array[j] << endl;
		}
	}
};

// Reverse a Linkedlist by changing pointers.
void SingleLinkedList::reverse()
{
	Node * current = new Node;
	Node * prev = new Node;
	Node * nextNode = new Node;

	current = head;
	prev = NULL;
	nextNode = NULL;

	while(current != NULL)
	{
		nextNode = current->next;
		current->next = prev;
		prev = current;
		current = nextNode;
	}

	head = prev;
};

// compare a list with another list. return true of false if equals
bool SingleLinkedList::compare(SingleLinkedList list2)
{
	if(this->head == NULL && list2.head == NULL)
	{
		return true;
	}
	else if (this->head != NULL && list2.head == NULL)
	{
		return false;
	}
	else if (this->head == NULL && list2.head != NULL)
	{
		return false;
	}
	else
	{
		int counter = 0;
		Node * nodeCount = new Node;
		nodeCount = this->head;
		
		while(nodeCount != NULL)
		{
			counter++;
			nodeCount = nodeCount->next;
		}

		int counter2 = 0;

		Node * nodeCount2 = new Node;
		nodeCount2 = list2.head;
		
		while(nodeCount2 != NULL)
		{
			counter2++;
			nodeCount2 = nodeCount2->next;
		}

		if(counter == counter2)
		{
			Node * current = new Node;
			current = this->head;

			int array[counter];
			int i = 0;

			while(current != NULL)
			{
				array[i] = current->data;
				i++;
				current = current->next;
			}

			Node * current2 = new Node;
			current2 = list2.head;

			int array2[counter];
			int k = 0;

			while(current2 != NULL)
			{
				array2[k] = current2->data;
				k++;
				current2 = current2->next;
			}

			bool currentState;

			for(int j = 0; j < counter; j ++)
			{
				if(array[j] == array2[j])
				{
					currentState = true;
				}
				else
				{
					return false;
				}
			}

			return currentState;

		}
		else
		{
			return false;
		}
	}
};

/*void merge();
void getValue(int index);
void pop();
void deleteDuplicate(SingleLinkedList list);
void mergePoint();
void sizeOfList();*/