/*
 * sorted_loc.cpp
 *
 *  Created on: 2013-03-11
 *      Author: lisa
 */
#include <iostream>
#include "SortedLoc.h"
#include "Iterator.h"
Node*  SortedLoc:: locate(Node* node,Data key)

{  cout<< "sorted loc called" <<endl;
	  /*{
			bool found;
			Iterator iter = createIterator();
				iter.goHead();
				      while(iter.hasNext())
				          {
				    	  if(key.get() == iter.get())
				    	  {  found = true;
				    	   cout<<"found key"<< iter.get()  <<  " ->";
				    	   return &iter;
				    	  } else
				    	   iter.next();
				    	   }
				      if(found == false)
				    	  cout<< " cant locate key"<<key.get()<<endl;
				      return false;

	}  */
}
SortedLoc::~SortedLoc() { }
