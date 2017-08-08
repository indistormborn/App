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