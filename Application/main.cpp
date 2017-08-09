//entry point to the application
#include <iostream>

#include "MyAPP.h"
#include "MyData.h"
#include "MyUI.h"
#include "ListStructure.h"

int main()
{ 
   MyAPP* app = new MyAPP();
   app->run();

  /* MyData* data = new MyData();
   MyUI* ui = new MyUI();
   ListStructure* list = data->getList1();
   data->setActualList(list);
   
   std::string str = data->listToString();
   std::cout << str;
   
   list= data->getActualList();
   list->clear();
   list->del(2);*/
   return 0;
}