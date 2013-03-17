/*
 * sorted.h
 *
 *  Created on: 2013-03-11
 *      Author: lisa
 */

#ifndef SORTED_H_
#define SORTED_H_
#include "List.h"
class List;

class Sorted:public List  {
//private: Node* locate(Node *node, Data key);
public:
	//Sorted():List() {new Node ;}
	/*//undefined reference to `vtable for Sorted'
	collect2: ld returned 1 exit status   */
	Sorted();
	void insert(Iterator & iter, Data  s);
	Iterator locate( Data key);
	virtual ~Sorted();
};

#endif /* SORTED_H_ */
