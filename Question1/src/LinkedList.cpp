/*
 * LinkedList.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: lieut
 */

#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
	head=NULL;
	tail=NULL;
	length=0;
}

LinkedList::~LinkedList() {
	Node *next = head;
	while(next) {              // iterate over all elements
		Node *deleteMe = next;
		next = next->getNext();     // save pointer to the next element
		delete deleteMe;       // delete the current entry
	}
}

Node* LinkedList::getHead(){
	return head;
}
Node* LinkedList::getTail(){
	return head;
}
void LinkedList::insertBack(Node *p)
{
	p->setNext(NULL);
	if (length==0)
	{
		p->setNext(NULL);
		 head = tail = p;
		 length++;
		 return;
	}
	tail->setNext(p);
	tail=p;
	length++;
}
void LinkedList::printList(){
	Node* next=head;
	for (Node* i=head; i!=NULL; i=i->getNext()){
		cout<<i->getData()<<", ";
	}
}
