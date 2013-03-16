/*
 * List.h
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */
 #include <iostream>
 using namespace std;
#include "Node.h"
#include "Data.h"
#include "Iterator.h"
#include "ListLoc.h"
#include "SortedLoc.h"

#ifndef LIST_H_
#define LIST_H_
class Iterator;
class Locator;

class List {
private:
	Node first;
	//========================add for hw4
	Locator* loc;
public:

List();
List(int type);
	virtual ~List();

	void push_back(Data d);
	void add(Node &n);
	void insert(Iterator iter, Data  s);
	//bool locate(Data key);
	Locator* setLocator(int type, Data d);
	void show();
	Iterator erase(Iterator i);
	Iterator  createIterator();
    friend class Iterator;
    friend class ListLoc
    ;

};

#endif /* LIST_H_ */
