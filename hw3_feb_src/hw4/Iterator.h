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
	//{ head = &listhead;
	//position= &head->getNext();
	//}
	int get() const;
	Iterator next();
	Iterator previous();
	void goHead();
	void begin();
	void end();
	bool equals(Iterator b) const;
	bool hasNext() const;
	bool isHead() const;
private:
	Node* position;
	Node* head;
friend class List;

};

#endif /* ITERATOR_H_ */
