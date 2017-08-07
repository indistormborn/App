#include "CmdSort.h"

void CmdSort::execute(MyData* d, MyUI* ui)
{
   ListStructure* list = d->getActualList();
   int opt= ui->getCurrentOption();
   if(list != nullptr)
      if(opt == ui->ORD)
         list->bubblesort();

   ui->print( ui->getMessage(MyUI::ORD_LIST));
   ui->print( list->listToString());
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}