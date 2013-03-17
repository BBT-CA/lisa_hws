/*
 * Iterator.h
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */
 #include <iostream>
 using namespace std;
#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "Node.h"
#include "List.h"
 class List;
class Iterator {
public:

	Iterator (Node &listhead);
	int get() const;
	void next();
	void previous();

	bool equals(Iterator& b) const;
	bool hasNext() const;

private:
	Node* position;
	Node* head;
friend class List;

};

#endif /* ITERATOR_H_ */
