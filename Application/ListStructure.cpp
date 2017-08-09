#include <ostream>
#include <stdlib.h>
#include "Nodo.h"
#include "ListStructure.h"

/////////////////////////////////////////////////////////////////////////

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

bool ListStructure::del(int pos)
{
   Nodo *n= search(pos);

   //verifica se a lista está vazia
   if(first){
      //verifica se a posicao existe na lista
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
         return true;
      }
   }
   return false;
}

/////////////////////////////////////////////////////////////////////////

bool ListStructure::clear()
{
   Nodo* aux;
   
   //verifica se a lista não está vazia
   if(first != nullptr){
      while (first) {
         aux= first->getNext();
         delete first;
         first= aux;      
      }
      size= 0;
      first= last= nullptr;
      return true;
   }
   return false;
}

bool ListStructure::bubblesort()
{
   Nodo* actual;
   int countLaco1= size;

   //verifica se a lista não está vazia
   if(first != nullptr){
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
      return true;
   }
   //caso a lista esteja vazia, retorna falso
   return false;
}

bool ListStructure::concatenate(ListStructure* l)
{
   Nodo* firstNodo= l->getFirst();

   //verifica se a lista passada como entrada foi instanciada 
   if (l != nullptr){

      //verifica se a lista atual e a lista passada como parametro estÃ£o vazias 
      if ((first != nullptr) && (firstNodo != nullptr)) {
         last->setNext(firstNodo);
         firstNodo->setPrev(last);
         last= l->getLast();
         size= size + l->getSize();
         
         l->setSizeToZero();
         l->setFirst(nullptr);
         l->setLast(nullptr);

         return true;
      }
   } 
   return false; 
}

/////////////////////////////////////////////////////////////////////////

Nodo * ListStructure::searchForward(int pos)
{
   Nodo *n= nullptr;

   if ((pos <= size) && (pos > 0)) {
      n= first;
      for (int i= 1 ; i < pos ; i++) {
         n= n->getNext();
      }
   }   

   return n;
}

Nodo* ListStructure::searchBackward(int pos)
{
   Nodo *n= nullptr;

   if ((pos <= size) && (pos > 0)){
      n= last;
      for (int i= size; i > pos; i--){
         n= n->getPrev();
      }  
   }
   
   return n;
}

Nodo* ListStructure::search(int pos)
{
   Nodo *n;
   int meio= size/2;

   if (pos >= meio)
      n= searchBackward(pos);
   else if (pos <= meio)
      n= searchForward(pos);
   return n;
}