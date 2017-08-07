#include "CmdPrint.h"

void CmdPrint::execute(MyData* d, MyUI* ui)
{
   ListStructure* list = d->getActualList();
   int opt= ui->getCurrentOption();
   
   if (opt == MyUI::PRINT_F){
      ui->print( ui->getMessage(MyUI::PRINTED_BE) );
      ui->print( list->listToString());
   }
   else if (opt == MyUI::PRINT_B){
      ui->print( ui->getMessage(MyUI::PRINTED_EB) );
      ui->print( list->listToStringBack());
   }

   system("pause");
   ui->clearScreen();
   ui->manipMenu();

}