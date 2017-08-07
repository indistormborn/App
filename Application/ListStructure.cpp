#include "ListStructure.h"
#include "Nodo.h"
#include <ostream>
#include <stdlib.h>
#include <sstream>

void ListStructure::addEnd(int v)
{
   Nodo* n= new Nodo(v);

   if (last) {
      n->setPrev(last);
	   last->setNext(n);
	}
   else
	   first= n;

   last= n;
   size++;
}

void ListStructure::addBegin(int v)
{
   Nodo* n= new Nodo(v);

   if (first) {
      n->setNext(first);
	   first->setPrev(n);
	}
   else
	   last= n;

   first= n;
   size++;
}

void ListStructure::add(int v, int pos)
{
   Nodo *position= first;
	Nodo *newNodo= new Nodo(v);
 
   if (pos > 1) {
      position= search(pos);
      if (position) {
         Nodo *auxPrevious= position->getPrev();

         newNodo->setPrev(auxPrevious);
         newNodo->setNext(position);

         position->setPrev(newNodo);

         if (!auxPrevious) 
            first= newNodo;
         else
            auxPrevious->setNext(newNodo);
   
         size++;
      }
      else
         addEnd(v);
   }
   else
      addBegin(v);
}

void ListStructure::del(int pos)
{
   Nodo *n= search(pos);

   if (n) {
      Nodo* next= n->getNext();
      Nodo* prev= n->getPrev();
      
      if (next != nullptr)
         next->setPrev(prev);
      else
         last= prev;    

      if(prev != nullptr)
         prev->setNext(next);
      else
         first= next;      

      size--;
      delete n;
   }
   else {
      exit(0);
   }
}

void ListStructure::set(int v, int pos)
{
   Nodo *n= search(pos);
   
   if(n != nullptr)
      n->setValue(v);
   else
      exit(0);
}

void ListStructure::clear()
{
   Nodo *aux;

   while (first) {
      aux= first->getNext();
      delete first;
      first= aux;      
   }

   size= 0;
   first= last= nullptr;
}

void ListStructure::bubblesort()
{
   Nodo* actual;
   int countLaco1= size;

   while (countLaco1 > 0) {
      int countLaco2= countLaco1 - 1;
      actual= first;
      while (countLaco2 > 0) {
         Nodo* auxNext= actual->getNext();
         if (actual->getValue() > auxNext->getValue()) {
            int temp= actual->getValue();
            actual->setValue(auxNext->getValue());
            auxNext->setValue(temp);
         }
         actual= auxNext;
         countLaco2--;
      }
      countLaco1--;
   }
}

Nodo * ListStructure::searchForward(int pos)
{
   Nodo *n= first;

   if ((pos <= size) || (pos != 0)) {
      for (int i= 1; i < pos; i++){
         if(n->getNext() == nullptr)
            break;
         n= n->getNext();
      }
   }
   else
      n= nullptr;   
  
   return n;
}

Nodo * ListStructure::searchBackward(int pos)
{
   Nodo *n= last;

   if(pos <= size || pos != 0){
      for (int i= size; i > pos; i--){
         if(n->getPrev() == nullptr)
            break;
         n= n->getPrev();
      }   
   }else
      n= nullptr;
   
   return n;
}

Nodo * ListStructure::search(int pos)
{
   Nodo *n;
   int meio= size/2;

   if (pos >= meio)
      n= searchBackward(pos);
   else if (pos <= meio)
      n= searchForward(pos);
   return n;
}

void ListStructure::concatenate(ListStructure* l){
  Nodo *n= l->getFirst();

   if( l != nullptr ){
      if( (first != nullptr) && (l->getFirst() != nullptr) ){
         last->setNext(l->getFirst());
         last= l->getLast();
         size= size + l->getSize();
         }
      l->setFirst(nullptr);
      l->setLast(nullptr);
   }   
}

std::string ListStructure::listToString()
{
   Nodo* n= first;
   std::stringstream ss;
   for (int i= 0; i < size; i++){
      int v= n->getValue();
      
      ss<<v<<", ";
      
      if(n->getNext() == nullptr)
         break;
      n= n->getNext();
   }
     
   
   return ss.str();
}

std::string ListStructure::listToStringBack()
{
   Nodo* n= last;
   std::stringstream ss;
   for (int i= size; i > 0; i++){
      int v= n->getValue();
      
      ss<<v<<", ";
      
      if(n->getPrev() == nullptr)
         break;
      n= n->getPrev();
   }
   
   return ss.str();
}