#include "CmdClear.h"

void CmdClear::execute(MyData* d, MyUI* ui)
{
   ListStructure* list = d->getActualList();

   if(list != nullptr)
      if(list->clear())   
         ui->print( ui->getMessage(MyUI::EMPTY_LIST));
      else
         ui->print( ui->getMessage(MyUI::ERROR_CLEAR));
   
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}