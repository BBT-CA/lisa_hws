/*
 * Node.h
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */

 #include <string.h>
 #include <iostream>
//using namespace std;
/* expected nested-name-specifier before ‘namespace’
../src/Node.h:10:7: error: expected unqualified-id before ‘namespace’
../src/Node.h:10:7: error: expected ‘;’ before ‘namespace’
../src/Node.h:10:7: error: expected unqualified-id before ‘namespace  */
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
	Node* getNext();
	Node* getPrev();
	void add(Node * n);
	void del(Node * n);
	virtual ~Node();
friend class ListLoc;
friend class SortedLoc;
};
#endif /* NODE_H_ */
