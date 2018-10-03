/*
 * Node.h
 *
 *  Created on: Oct 2, 2018
 *      Author: lieut
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();
	virtual ~Node();

	//Getters
	int getData();
	Node* getNext();
	Node* getRandom();
	//Setters
	void setData(int d);
	void setNext(Node* n);
	void setRandom(Node* r);

private:
	int data;
	Node* next;
	Node* random;

};

#endif /* NODE_H_ */
