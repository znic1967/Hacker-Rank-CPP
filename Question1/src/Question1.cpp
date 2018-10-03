//============================================================================
// Name        : Question1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Given a linked list with three fields: a data field, a next  field and a random pointer field
//(which is a field that points to null or to an element in the linked list)
//write a function to return a copy of the linked list without destructively modifying the original linked list

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

Node* initializeList(int size, LinkedList &l);
int main() {
	LinkedList list;
	Node* head;
	head = initializeList(10, list);
	list.printList();
	cout<<"Done"<<endl;
	return 0;
}

Node* initializeList(int size, LinkedList &l){
	for (int i=0; i<size; i++){
		Node *n = new Node();
		l.insertBack(n);
		n->setData(i); //initialize data to count up from 0.
	}
	return l.getHead(); //returns head of LL
}
