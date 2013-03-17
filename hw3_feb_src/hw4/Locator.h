/*
 * Locator.h
 *
 *  Created on: 2013-03-11
 *      Author: lisa
 */

#ifndef LOCATOR_H_
#define LOCATOR_H_
#include "Node.h"
#include "Data.h"
class Node;
class Data;

class Locator {

public:
	 Locator () ;//{new ListLoc ; }
	virtual Node*   locate(Node* node,Data key)=0;
	virtual ~Locator();

};

#endif /* LOCATOR_H_ */
