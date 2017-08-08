#include "CmdChooseList1.h"

void CmdChooseList1::execute(MyData* d, MyUI* ui)
{
   d->setActualList(d->getList1());
   
   ui->clearScreen();
   ui->manipMenu();
}