#include "CmdDel.h"

void CmdDel::execute(MyData* d, MyUI* ui)
{
   ListStructure* list= d->getActualList();
   int opt= ui->getCurrentOption();
   int pos= 0;

   if(opt == MyUI::DEL_POS){
      pos= ui->getMenuOption(ui->INSERT_P);
      if (list->del(pos))
         ui->print( ui->getMessage(MyUI::POS_REMOVED));
      else
         ui->print( ui->getMessage(MyUI::ERROR_DEL));
   }

   else if(opt == MyUI::DEL_BEG){
      if (list->del(1))
         ui->print( ui->getMessage(MyUI::BEG_EXCLUDED));
      else
         ui->print( ui->getMessage(MyUI::ERROR_DEL));
   }

   else if(opt == MyUI::DEL_END){
      if (list->del(list->getSize()))
         ui->print( ui->getMessage(MyUI::END_EXCLUDED));
      else
         ui->print( ui->getMessage(MyUI::ERROR_DEL));
   }
   
   ui->print( d->listToString());
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
   
}