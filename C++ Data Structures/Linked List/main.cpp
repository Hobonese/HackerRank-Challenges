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

#include "SingleLinkedList.cpp"

int main()
{
	SingleLinkedList list;
	list.append(7);
	list.push(3);
	list.push(5);
	list.push(1);
	//list.insert(2,8);
	//list.deleteNode(3);
	//list.append(5);Node * newNode = new Node;
	//list.print();

	SingleLinkedList list2;
	list2.append(5);
	list2.push(3);
	list2.push(7);
	list2.push(1);
	
	cout << list.compare(list2) << endl;

	return 0;
}