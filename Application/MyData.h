#pragma once
#include "Nodo.h"
#include "ListStructure.h"
#ifndef INCLUDED_MYDATA_H
#define INCLUDED_MYDATA_H

class MyData 
{

private: 
   ListStructure* list1;
   ListStructure* list2;
   ListStructure* actual;

public:
   ~MyData(){}
   MyData(){
      createLists();
      actual= nullptr;
   }

   ListStructure* getActualList() { return actual; }
   ListStructure* getList1() { return list1; }
   ListStructure* getList2() { return list2; }
   void setActualList(ListStructure* list) { actual = list; }

   void setLast(Nodo* nodo) {actual->setLast(nodo);}
   void setFirst(Nodo* nodo) {actual->setFirst(nodo);}
  
   int getSize() {return actual->getSize();}

   Nodo* getLast() {return actual->getLast();}
   Nodo* getFirst() {return actual->getFirst();}

   void createLists();

};

#endif //INCLUDED_MYDATA_H