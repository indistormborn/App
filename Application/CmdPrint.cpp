#include "CmdPrint.h"

void CmdPrint::execute(MyData* d, MyUI* ui)
{
   std::string msg;
   ListStructure* list = d->getActualList();
   int opt= ui->getCurrentOption();

   if (opt == MyUI::PRINT_F){
      if(verifyString(d)){
         ui->print( ui->getMessage(MyUI::PRINTED_BE) );
         ui->print( d->listToString());
      }
      else
         ui->print( ui->getMessage(MyUI::ERROR_PRINT));
   }

   else if (opt == MyUI::PRINT_B){
      if(verifyString(d)){
         ui->print( ui->getMessage(MyUI::PRINTED_EB) );
         ui->print( d->listToStringBack());
      }
      else
         ui->print( ui->getMessage(MyUI::ERROR_PRINT));
   }

   system("pause");
   ui->clearScreen();
   ui->manipMenu();

}

bool CmdPrint::verifyString(MyData* d)
{
   std::string str= d->listToString();
   if(str == "\0")
      return false; 
   return true;
}