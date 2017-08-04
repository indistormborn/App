#include "MyAPP.h"
#include "MyData.h"
#include "MyUI.h"
#include "MyCmd.h"

MyAPP::~MyAPP()
{
   if (ui != nullptr)
      delete ui;
   else if (d != nullptr)
      delete d;
   else if (cmd != nullptr)
      delete cmd;
}

MyAPP::MyAPP()
{
   ui= new MyUI();
   d= new MyData();
}

void MyAPP::run()
{
   while(true){
      //if(d->getActualList()== nullptr)
         
      if(!cmdExecute (ui->getMenuOption()))
         break;
   }
}

bool MyAPP::cmdExecute(int menuOption)
{
  /*if(cmd)
     delete cmd;
  cmd= nullptr;

   switch(menuOption) {
   case MyUI::ADD_POS:    
   case MyUI::ADD_END:
   case MyUI::DEL_POS:
   case MyUI::DEL_BEG:
   case MyUI::DEL_END:
   case MyUI::PRINT_F:
   case MyUI::PRINT_B:*/
  return true;

}