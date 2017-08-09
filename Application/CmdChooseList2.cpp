#include "CmdChooseList2.h"

void CmdChooseList2::execute(MyData* d, MyUI* ui)
{
   d->setActualList(d->getList2());
   
   ui->clearScreen();
   ui->manipMenu();
}