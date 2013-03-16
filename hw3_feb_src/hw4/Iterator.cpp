/*
 * Iterator.cpp
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */
 #include <cassert>
 #include <string>
#include "Iterator.h"
#include "Data.h"
class List;

Iterator ::Iterator(Node &listHead)
{
	head = &listHead;
	position = &head->getNext();
}

int Iterator:: get() const

{
	return ( position ->getData().get());
}
Iterator Iterator:: next()
{
		position = &(position -> getNext());
		return *position;
}
Iterator Iterator::previous()
{
		position = &(position -> getPrev());
		return *position;
}

void Iterator::goHead()
{
	position = head;
}

bool Iterator::isHead() const

{
	return (position  == head);
}
bool Iterator:: hasNext() const
{	bool boo =&(position->getNext()) == head;
cout<< boo<<"=boo---";
     return (&(position->getNext()) != head );
}
		bool Iterator::equals(Iterator b) const
{
	return position == b.position;
}
