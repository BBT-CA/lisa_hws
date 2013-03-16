/*
 * Node.h
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */

 #include <string.h>
 #include <iostream>
 using namespace std;
#include "Data.h"
#ifndef NODE_H_
#define NODE_H_

class Data;

class Node {
private:
	Data data;
	Node* previous;
	Node* next;
//============================================

public:
	Node(Data d);
     Node()  ;
	Data getData();
	void setData(Data da);
	Node& getNext();
	Node& getPrev();
	void setPrev( Node & p);
	void setNext( Node & n) ;

	void add(Node & n);
	void del(Node & n);
	virtual ~Node();

};
#endif /* NODE_H_ */
