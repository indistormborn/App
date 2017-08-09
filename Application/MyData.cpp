#include <sstream>
#include "MyData.h"


void MyData::createLists()
{
   list1= new ListStructure();
   list2= new ListStructure();

   for(int i= 0; i < 10; i++){
       int x= rand() % 10;
       list1->add(x);
   }
   for(int i= 0; i < 10; i++){
       int x= rand() % 10;
       list2->add(x);
   }
}

std::string MyData::listToString()
{
   Nodo* n= getFirst();
   std::stringstream ss;
  
   //verifica se a lista está vazia
   if(n != nullptr){
      for (int i= 0; i < getSize(); i++){
         int v= n->getValue();
         ss << v << ", ";
         n= n->getNext();
      }
      return ss.str();
   }
   return "\0";
}

std::string MyData::listToStringBack()
{
   Nodo* n= getLast();
   std::stringstream ss;

   //verifica se a lista está vazia
   if(n != nullptr){
      for (int i= getSize(); i > 0; i--){
         int v= n->getValue();
         ss<<v<<", ";
         n= n->getPrev();
      }
      return ss.str();
   }
   return "\0";
}