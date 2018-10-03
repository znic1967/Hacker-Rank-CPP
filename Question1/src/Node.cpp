/*
 * Node.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: lieut
 */

#include "Node.h"

Node::Node() {
	data=0;
	next=nullptr;
	random=nullptr;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

//Getters
int Node::getData(){
	return data;
}
Node* Node::getNext(){
	return next;
}
Node* Node::getRandom(){
	return random;
}

//Setters
void Node::setData(int d){
	data=d;
}
void Node::setNext(Node* n){
	next=n;
}
void Node::setRandom(Node* r){
	random=r;
}
