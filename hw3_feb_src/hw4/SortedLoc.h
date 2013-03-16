/*
 * sortedLoc.h
 *
 *  Created on: 2013-03-12
 *      Author: lisa
 */
#include "Iterator.h"
#include "Data.h"
#ifndef SORTEDLOC_H_
#define SORTEDLOC_H_
class Iterator;
class Data;

class SortedLoc :public  Locator{
private :
		Data key;
public:
	SortedLoc(Data d);
	Iterator locate(Data key);
	virtual ~SortedLoc();
};

#endif /* SORTEDLOC_H_ */
