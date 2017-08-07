#include "CmdChooseList2.h"

void CmdChooseList2::execute(MyData* d, MyUI* ui)
{
   ListStructure* actual= d->getActualList();
   ListStructure* secondList= d->getList2();
   if(actual != secondList || actual == nullptr)
      d->setActualList(secondList);

   ui->clearScreen();
   ui->manipMenu();
}