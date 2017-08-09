#pragma once
#ifndef INCLUDED_LISTSTRUCTURE_H
#define INCLUDED_LISTSTRUCTURE_H

#include <iostream>

class Nodo;

class ListStructure
{

protected:
   Nodo* last;
   Nodo* first;
   
   int size;

   void addEnd(int v);
   void addBegin(int v);
   Nodo* searchForward(int pos);
   Nodo* searchBackward(int pos);

public:
   ~ListStructure() { clear(); }
   ListStructure(){
      size= 0;   
      last= first= nullptr;
   }
   
   void setLast(Nodo* nodo) { last= nodo; }
   void setFirst(Nodo* nodo) { first= nodo; }
   void setSizeToZero() { size= 0; }

   int getSize() { return size; }

   Nodo* getLast() { return last; }
   Nodo* getFirst() { return first; }

   void add(int v) { addEnd(v); }
   void add(int v, int pos);
   
   bool del(int pos);

   bool clear();
   bool bubblesort();
   bool concatenate(ListStructure*);

   Nodo* search(int pos);

};

#endif //INCLUDED_LISTSTRUCTURE_H
