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
	position =  head->getNext();
}

int Iterator:: get() const

{
	return ( position ->getData().get());
}
void Iterator:: next()
{
		position = position -> getNext();

}
void  Iterator::previous()
{
		position = position -> getPrev();

}


bool Iterator:: hasNext() const
{

     return ( (position->getNext() ) != head );
}
		bool Iterator::equals(Iterator& b) const
{
	return position == b.position;
}
