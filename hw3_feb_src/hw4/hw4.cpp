#include <iostream>
#include "Iterator.h"
#include "Node.h"
#include "List.h"
/*add member function goHead() in Iterator class to init the iterator,
 *  if just create 2nd iterator, no work for not associated to list staff */

/* ???? why last data show 2times. and insert not work */
/* why after erase one node run again, the deleted node dispared,
 * more you do,less node left?????
 * =================================================
 * add" bool iAmHead " to control stack backtrace for free(),
 * for head is in stack not in heap, head is obj not by new to creat,cant free !
 */
/* add "Iterator tmp" to save Iterator position before modify it,still not print new node after insert in main() */
/* insertB() not work with push_back, have to use insertA()   ??  */


/* questions====================================== */

/*1 /insert After()====== decouple=============== ??????=  not work gave mess code in insert position data??
 * iter.position->add(*newNode);
 */
/*2 prev--=-travle wont work in list.cpp
 * //=================================uncomment about got error 8new node data
	//1===in iter pos  8sh  Insert
	//-1075377468===in Insert
	//1617430532===in Insert
 */
/* 3  how to free mem for creatIterator() ??
 * terator iter = createIterator();
 * delete &iter;
 * not work
 */


int main()
 {
// test part for hw4 ===============================================
	List l(1);
	 Iterator iter2 = l.createIterator();
	l.push_back(1);
			cout<< iter2.get()  <<  "----first elem ->";

	        l.push_back(2);
	        cout<<"itr address at 2 ==="<< iter2.get() << endl;
	       // iter.next();
	        cout<< iter2.get()  <<  "---second elem ->";
	        l.push_back(3);
	        cout<< iter2.get()  <<  "-> ---third  elem ->";

	       l.push_back(4);
	        /* print all values */
	        l.show();
	//===========================================
	       iter2.goHead();
	       iter2.next();
	       l.push_back(11);
	       	        l.show();
	        l.insert(iter2  ,10);
	        l.push_back(11);
	        l.show();
	                            cout<< "after insert"<<endl;


	       Iterator iter1 = l.createIterator();
	       Locator* myloc;
	      myloc= l.setLocator(1, 3);  //type =1, data =3
	      iter1 = myloc->locate(3);
           l.insert(iter1  ,10);
           l.show();
           cout<< "after insert"<<endl;

//======================================================

          return 0;
 }
