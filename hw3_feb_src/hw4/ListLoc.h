/*
 * ListLoc.h
 *
 *  Created on: 2013-03-12
 *      Author: lisa
 */

#include "Locator.h"

#ifndef LISTLOC_H_
#define LISTLOC_H_

class Locator;


class ListLoc : public Locator
{

public:
	ListLoc(); //{new  ListLoc;   }
	Node* locate(Node* node,Data key);

	virtual ~ListLoc();
};

#endif /* LISTLOC_H_ */
