#pragma once
#ifndef INCLUDED_NODO_H
#define INCLUDED_NODO_H

class Nodo
{
protected: 
   int value;
   Nodo* next;
   Nodo* prev;

public:
   ~Nodo(){}
   Nodo(int _value= 0) {
      value= _value;
      next= nullptr;
      prev= nullptr;
   }
   
   void setValue(int v) {value= v;}
   void setNext(Nodo* nodo) {next= nodo;}
   void setPrev(Nodo* nodo) {prev= nodo;}
   
   int getValue() {return value;}
   Nodo* getNext() {return next;}
   Nodo* getPrev() {return prev;}
};

#endif //INCLUDED_NODO_H