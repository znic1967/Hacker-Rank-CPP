/*
 * LinkedList.h
 *
 *  Created on: Oct 2, 2018
 *      Author: lieut
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"
class LinkedList {
public:
	LinkedList();
	virtual ~LinkedList();

	Node* getHead();
	Node* getTail();

	void insertBack(Node* p);
	void printList();
private:
	Node* head;
	Node* tail;
	int length;
};

#endif /* LINKEDLIST_H_ */
