/*
 * List.cpp
 *
 *  Created on: 2013-02-12
 *      Author: lisa
 */
#include <iostream>
#include "List.h"

List::List()
{
			first.setNext(first);
			first.setPrev(first);

};

 Iterator List::createIterator() {
	 //  Iterator * iter = new Iterator ((this->first));
	 Iterator  *iter = new Iterator (first);
	 cout <<"iter created"<< endl;
	 return *iter;
 }

 void List::push_back(Data d)
 {
	 cout<< "push back called"<<endl;
	 Iterator 	 iter= createIterator();
	 Node *newNode = new Node(d);
	 		if (iter.isHead())
	 		 	{
	 			first = *newNode;

	 		/*	first.add(*newNode);
	 			(*newNode).setNext(first);
	 			first.setPrev(*newNode);   */
	 			newNode -> setPrev(first);
	 			newNode -> setNext(first);
	 			first.setNext(*newNode);
	 			first.setPrev(*newNode);
	 			iter.position->setData(d);

	 			cout<<"1st data node created"<<endl;
	 		 	}
	 		else
	 		{	while (iter.hasNext())
	 			{
	 				iter.next();
	 			}
	 		//iter.position->setData(d);
	 		iter.position->add(*newNode);
	 		(*newNode).setNext(first);

	 		newNode->setPrev(*iter.position);
	 		//newNode ->setNext(iter.position->getPrev());
	 		newNode ->setNext(first);
	 		iter.position->setNext(*newNode);
	 		iter.position->setData(d);
	 	//	first.setPrev(*newNode);
			cout<< iter.get()<<"===in list"<<endl;

	 	}
 }
/* insert one node before iterator */
void List::insert(Iterator iter,Data s)
{
	Node *newNode = new Node(s);

// Insert before()====================
	/*newNode ->setPrev(iter.position->getPrev());
	newNode ->setNext(*iter.position);
	cout<< newNode->getData().get()<<"new node data"<<endl;
	iter.position->setPrev(*newNode);
	iter.position->getPrev().setNext(*newNode);  */
//insert After()=======================

		newNode ->setPrev(*iter.position);
		newNode ->setNext(iter.position->getNext());
		cout<< newNode->getData().get()<<"new node data"<<endl;
		iter.position->setNext(*newNode);
		iter.position->getNext().setPrev(*newNode);
//insert After()====== decouple=============== ??????==

	//	iter.position->add(*newNode);

		cout<< newNode->getData().get()<<"new node data"<<endl;

	//tmp.position->getPrev().setNext(*newNode);

	//cout<< tmp.get()<<"==try with tmp =should be== 2==="<<endl;

	/*iter.previous();
	cout<< iter.get()<<"===in iter pos  8sh  Insert"<<endl;
	 iter.previous();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.previous();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.previous();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.previous();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.previous();
	cout<< iter.get()<<"===in Insert"<<endl; */
	//=================================uncomment about got error 8new node data
	//1===in iter pos  8sh  Insert
	//-1075377468===in Insert
	//1617430532===in Insert


	iter.goHead();
	cout<< iter.get()<<"===in iter pos next be 8shInsert"<<endl;
	iter.next();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.next();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.next();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.next();
	cout<< iter.get()<<"===in Insert"<<endl;
	iter.next();
	cout<< iter.get()<<"===in Insert"<<endl;

}

Iterator List::erase(Iterator i)
  {
	Iterator iter = createIterator();
	 iter  = i;
	 bool iAmHead;
	// if(iter.isHead())
	 //{ cout <<iter.isHead()<<"---bool iter is head"<<endl;
	//	 iAmHead=true;}
	//	 return iter;
//iter.position->getNext().setPrev(iter.position->getPrev());
//iter.position->getPrev().setNext(iter.position->getNext());
	 iter.position->del(*iter.position);
     Iterator tmp= iter;
	 iter.position= iter.next().position;
	 cout  <<tmp.get()<< "iter been deleted"<<endl;
	 if(!iAmHead)

     delete tmp.position;

/*	Node* remove = iter.position;
	Node* before = & (remove ->getPrev());
	Node* after =& (remove ->getNext());

		 before -> setNext(*after);
		 after -> setPrev(*before);
		iter.position  = after;
		cout  <<iter.get()<< "iter been delected"<<endl;
		if(!iAmHead)
		delete remove;
	//	}
*/

		return iter;
}
bool List:: locate(Data key)
	{
	bool found;
	Iterator iter = createIterator();
		iter.goHead();
		      while(iter.hasNext())
		          {
		    	  if(key.get() == iter.get())
		    	  {  found = true;
		    	   cout<<"found key"<< iter.get()  <<  " ->";
		    	   return true;
		    	  } else
		    	   iter.next();
		    	   }
		      if(found == false)
		    	  cout<< " cant locate key"<<key.get()<<endl;
		      return false;

	}
void List:: show()
	{
	Iterator iter = createIterator();
	iter.goHead();
	      while(iter.hasNext())
	          {
	    	   cout<< iter.get()  <<  " ->";
	    	   iter.next();
	    	   }
	     //  delete &iter;
	}

List::~List() {

	Iterator iter = createIterator();
	iter.goHead();
	while(!iter.isHead())
	{
		Node *tmp =iter.position;
		iter = iter.next();
	    delete tmp;
	}
}
