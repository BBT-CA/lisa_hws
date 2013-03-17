/*
 * ListLoc.cpp
 *
 *  Created on: 2013-03-12
 *      Author: lisa
 */

#include "ListLoc.h"
#include <iostream>


Node*  ListLoc:: locate(Node* node,Data key)
	{
			   bool found =false;
			   // if data is 0 prblem ????   for first has no data.
		        while (!(node->getNext()->getData().get ()))  // already finish travel
		          {
		    	  if(key.get() == node->getData().get())
		    	  {  found = true;
		    //	   cout<<"found key"<< node->getData().get()  <<  " ->";
		    	   return node;
		    	  } else
		    	   node = node->next;
		    	   }

		    //	  cout<< " cant locate key"<<key.get()<<endl;
		      found = false;
		      return node;
	}

ListLoc::~ListLoc() {

}
