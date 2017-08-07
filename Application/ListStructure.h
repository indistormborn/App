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
   ~ListStructure(){ clear(); }
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

   void add(int v) { addEnd(v); }
   void add(int v, int pos);
   void del(int pos);
   void set(int v, int pos);

   void bubblesort();
   void clear();
   void concatenate(ListStructure*);

   Nodo* search(int pos);

   std::string listToString();
   std::string listToStringBack();
};

#endif //INCLUDED_LISTSTRUCTURE_H
