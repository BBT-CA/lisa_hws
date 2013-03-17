/*
 * Node.cpp
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */

#include "Node.h"
#include "Data.h"
 #include <iostream>
 #include <cassert>

Node:: ~Node(){}
Node :: Node(Data d) {
				data =d;
				previous = next = this;

			}
Node :: Node( ) {

				previous = next = this;

			}

//============================================

Data Node::getData()
{
	return data.get();

}

void Node::setData(Data da)
{
	data = da;
}
Node* Node::getNext()
{
	return next;
}
Node* Node::getPrev()
{
		return previous;
}

void Node::add(Node * n)
{
	n->next =this->getNext();
	n->previous   =this;
	this->getNext()->previous=n;
	this ->next = n;

}


void Node::del(Node * n)
{

	n->getNext()->previous =n->getPrev();
	n->getPrev()->next =  n->getNext();
    std::cout<<n->getData().get()<<"been removed";

}
