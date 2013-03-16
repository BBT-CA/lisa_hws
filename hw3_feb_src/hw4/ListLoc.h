/*
 * ListLoc.h
 *
 *  Created on: 2013-03-12
 *      Author: lisa
 */
#include "Iterator.h"
#include "Locator.h"
#ifndef LISTLOC_H_
#define LISTLOC_H_
class Iterator;
class Locator;
class ListLoc:public Locator {
private:
	Data key;
public:
	ListLoc(Data d);
	Iterator locate(Data key);
	virtual ~ListLoc();
};

#endif /* LISTLOC_H_ */
