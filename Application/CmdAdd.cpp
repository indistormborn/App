#include "CmdAdd.h"


void CmdAdd::execute(MyData* d, MyUI* ui)
{
   ListStructure* list = d->getActualList();
   int opt= ui->getCurrentOption();
   int value= 0;   
   int pos= 0;
   if (opt == ui->ADD_POS){
      value= ui->getMenuOption(ui->INSERT_V);
      pos= ui->getMenuOption(ui->INSERT_P);
      list->add(value, pos);
   }
   else if (opt == ui->ADD_END){
      pos= ui->getMenuOption(ui->INSERT_V);
      list->add(pos);
   }

   ui->print( ui->getMessage(MyUI::VALUE_ADD) );
   ui->print( list->listToString());
   system("pause");
   ui->clearScreen();
   ui->manipMenu();
}
