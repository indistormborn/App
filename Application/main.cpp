//entry point to the application
#include <iostream>

#include "MyAPP.h"
#include "MyData.h"
#include "MyUI.h"

#include "ListStructure.h"

int main()
{ 
   //MyAPP* app = new MyAPP();
   //app->run();

   MyData* data = new MyData();
   MyUI* ui = new MyUI();
   ListStructure* list = data->getList1();
   
   ui->print (list->listToString());   
   list->add(100, -1000);
   ui->print (list->listToString());


   return 0;
}