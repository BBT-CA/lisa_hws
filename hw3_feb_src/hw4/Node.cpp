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
				data =0;
				previous = next = this;

			}
/*Node ::Node(Node & n)
{

}  */
void Node::setPrev( Node & p)
{
	previous = &p;
}

//============================================
void Node:: setNext( Node & n)
{
	next = &n;
}

Data Node::getData()
{
	return data.get();

}

void Node::setData(Data da)
{
	data = da;
}
Node& Node::getNext()
{
	return *next;
}
Node& Node::getPrev()
{
		return *previous;
}

void Node::add(Node & n)
{
	Node newNode  = n;
	//if(previous == next)   //1st node
	//{  newNode.setPrev(this->getprev().setNext());
	 //  newNode ->setNext(first);
	//} else
	/*	Node* after = iter.position;
		Node* before = after -> prev();
		 newNode->setPrev(before);
		 newNode -> setNext(after);
		after ->setPrev(newNode);
		if(before == first) //insert at begin
		first = newNode;
		else
		before ->setNext(newNode);
 */

	newNode.setPrev(*this);
	newNode .setNext(this ->getNext());
	(this->getNext()).setPrev(newNode);
	this->setNext(newNode);
	cout<<"not emp"<<endl;
	cout <<newNode.getData().get()<<" in Node clas ----->";
}
void Node::del(Node & n)
{
	Node tmp =n;
	tmp.getNext().setPrev(tmp.getPrev());
	tmp.getPrev().setNext(tmp.getNext());
	cout<<tmp.getData().get()<<"been removed"<<endl;

}
