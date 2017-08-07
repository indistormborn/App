#include "CmdConcatenate.h"

void CmdConcatenate::execute(MyData* d, MyUI* ui)
{
   ListStructure* actual= d->getActualList();
   ListStructure* first= d->getList1();
   ListStructure* second= d->getList2();
   int opt= ui->getCurrentOption();
   
   if(actual != nullptr){
      if(opt == ui->CONC){
         if(actual == first)
            actual->concatenate(second);
         else if(actual == second)
            actual->concatenate(first);
      }
   }
     
   ui->print( ui->getMessage(MyUI::CONCATENATED));
   ui->print( actual->listToString());
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}