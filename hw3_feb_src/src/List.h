/*
 * List.h
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */
 #include <iostream>
 using namespace std;
#include "Node.h"
#include "Iterator.h"
#ifndef LIST_H_
#define LIST_H_
class Iterator;
class List {
private:
	Node first;
public:

List();
	virtual ~List();

	void push_back(Data d);
	void add(Node &n);
	void insert(Iterator iter, Data  s);
	bool locate(Data key);
	void show();
	Iterator erase(Iterator i);
	Iterator  createIterator();
    friend class Iterator;

};

#endif /* LIST_H_ */
