/*
 * Locator.h
 *
 *  Created on: 2013-03-11
 *      Author: lisa
 */

#include "Iterator.h"
#ifndef LOCATOR_H_
#define LOCATOR_H_
class Iterator;
class Data;

class Locator {

private :
	Data key;

public:
//	virtual Locator() = NULL;
	virtual Iterator locate(Data key)= 0;
	virtual ~Locator();

};

#endif /* LOCATOR_H_ */
