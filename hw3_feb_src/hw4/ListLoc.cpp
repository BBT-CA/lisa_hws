/*
 * ListLoc.cpp
 *
 *  Created on: 2013-03-12
 *      Author: lisa
 */

#include "ListLoc.h"
#include <iostream>
ListLoc::ListLoc(Data d) :key(d) {

}
Iterator  ListLoc::locate(Data key)
{
	/*{
		bool found;
		Iterator iter = Iterator(first) ;
			iter.goHead();
			      while(iter.hasNext())
			          {
			    	  if(key.get() == iter.get())
			    	  {  found = true;
			    	   cout<<"found key"<< iter.get()  <<  " ->";
			    	   return iter;
			    	  } else
			    	   iter.next();
			    	   }
			      if(found == false)
			    	  cout<< " cant locate key"<<key.get()<<endl;
			      //return false;
	} */
	cout<< "listloc called"<< endl;

}
ListLoc::~ListLoc() {

}
