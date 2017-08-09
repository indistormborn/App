#include "CmdConcatenate.h"

void CmdConcatenate::execute(MyData* d, MyUI* ui)
{
   ListStructure* actual= d->getActualList();
   ListStructure* first= d->getList1();
   ListStructure* second= d->getList2();
   int opt= ui->getCurrentOption();
   
   if (actual != nullptr){
      if (actual == first){
         if(actual->concatenate(second))
            worked(d,ui);
         else
            ui->print( ui->getMessage(MyUI::ERROR_CONC));
      }
      else if (actual == second){
         if(actual->concatenate(first))
            worked(d,ui);
         else
         ui->print( ui->getMessage(MyUI::ERROR_CONC));
      }
   }
   else
      ui->print( ui->getMessage(MyUI::ERROR_CONC));
   
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}

void CmdConcatenate::worked(MyData* d, MyUI* ui)
{
   ui->print( ui->getMessage(MyUI::CONCATENATED));
   ui->print( d->listToString());
}