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
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include <iostream>
#include "Node.hpp"

using namespace std;

class SingleLinkedList
{
	private:
		Node * head;
		Node * tail;

	public:
		SingleLinkedList();
		void print();
		void append(int val);
		void push(int val);
		void insert(int index, int val);
		void deleteNode(int index);
		void printReverse();
		void reverse();
		bool compare(SingleLinkedList list2);
		void merge();
		void getValue(int index);
		void pop();
		void deleteDuplicate(SingleLinkedList list);
		void mergePoint();
		void sizeOfList();
};
#endif