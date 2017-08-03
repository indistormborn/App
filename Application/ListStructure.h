#pragma once
#ifndef INCLUDED_LISTSTRUCTURE_H
#define INCLUDED_LISTSTRUCTURE_H

class Nodo;

class ListStructure
{

protected:
   Nodo* last;
   Nodo* first;
   
   int size;

public:
   ~ListStructure(){}
   ListStructure(){
      last= nullptr;
      first= nullptr;
      size= 0;   
   }
   
   void setLast(Nodo* nodo) {last= nodo;}
   void setFirst(Nodo* nodo) {first= nodo;}
  
   int getSize() {return size;}

   Nodo* getLast() {return last;}
   Nodo* getFirst() {return first;}
};

#endif //INCLUDED_LISTSTRUCTURE_H
