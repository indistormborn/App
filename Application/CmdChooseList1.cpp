#include "CmdChooseList1.h"

void CmdChooseList1::execute(MyData* d, MyUI* ui)
{
   ListStructure* actual= d->getActualList();
   ListStructure* firstList= d->getList1();
   if(actual != firstList || actual == nullptr)
      d->setActualList(firstList);
   
   ui->clearScreen();
   ui->manipMenu();
}