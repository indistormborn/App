#include "CmdDel.h"

void CmdDel::execute(MyData* d, MyUI* ui)
{
   ListStructure* list= d->getActualList();
   int opt= ui->getCurrentOption();
   int pos= 0;

   if(opt == MyUI::DEL_POS){
      pos= ui->getMenuOption(ui->INSERT_P);
      list->del(pos);
      ui->print( ui->getMessage(MyUI::POS_REMOVED));
   }
   else if(opt == MyUI::DEL_BEG){
      list->del(1);
      ui->print( ui->getMessage(MyUI::BEG_EXCLUDED));
   }
   else if(opt == MyUI::DEL_END){
      list->del( list->getSize() );
      ui->print( ui->getMessage(MyUI::END_EXCLUDED));
   }
   
   ui->print( list->listToString());
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
   
}