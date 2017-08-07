#include "CmdClear.h"

void CmdClear::execute(MyData* d, MyUI* ui)
{
   ListStructure* list = d->getActualList();
   int opt= ui->getCurrentOption();
   if(list != nullptr)
      if(opt == ui->CLEAR)
         list->clear();
     
   ui->print( ui->getMessage(MyUI::EMPTY_LIST));
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}