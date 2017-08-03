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
      list1= new ListStructure();
      list2= new ListStructure();
      actual= nullptr;
   }

   ListStructure* getActualList();
   void setActualList(ListStructure* list);

   void setLast(Nodo* nodo) {actual->setLast(nodo);}
   void setFirst(Nodo* nodo) {actual->setFirst(nodo);}
  
   int getSize() {return actual->getSize();}

   Nodo* getLast() {return actual->getLast();}
   Nodo* getFirst() {return actual->getFirst();}


};

#endif //INCLUDED_MYDATA_H