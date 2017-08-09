#include "MyAPP.h"
#include "MyData.h"
#include "MyUI.h"
#include "MyCmd.h"
#include "CmdChooseList1.h"
#include "CmdChooseList2.h"
#include "CmdAdd.h"
#include "CmdClear.h"
#include "CmdConcatenate.h"
#include "CmdDel.h"
#include "CmdPrint.h"
#include "CmdSort.h"
#include "CmdShowMainMenu.h"

MyAPP::~MyAPP()
{
   delete d;
   delete ui;
   if (cmd != nullptr)
      delete cmd;
}

MyAPP::MyAPP()
{
   ui= new MyUI();
   d= new MyData();
   cmd= nullptr;
}

void MyAPP::run()
{
   while (cmdMainExecute(ui->getMenuOption())){   
      while (true){
         if (!cmdExecute(ui->getMenuOption()))
            ui->print(ui->getMessage(MyUI::ERROR_OPTION));

         if (ui->getCurrentOption() == ui->BACK)
            break;
      }
   }
}

bool MyAPP::cmdMainExecute(int menuOption)
{
   if (cmd)
      delete cmd;
   cmd= nullptr;

   switch(menuOption){
   case MyUI::FIRST_LIST : cmd= new CmdChooseList1(); break;
   case MyUI::SECOND_LIST: cmd= new CmdChooseList2(); break;
   case MyUI::CLOSE_APP  : exit(0);
   }

   if (!cmd)
      return false;

   cmd->execute(d,ui);

   return true;
}

bool MyAPP::cmdExecute(int menuOption)
{
   if (cmd)
      delete cmd;
   cmd= nullptr;

   switch(menuOption) {
   case MyUI::ADD_POS: cmd= new CmdAdd(); break;    
   case MyUI::ADD_END: cmd= new CmdAdd(); break;
   case MyUI::DEL_POS: cmd= new CmdDel(); break;
   case MyUI::DEL_BEG: cmd= new CmdDel(); break;
   case MyUI::DEL_END: cmd= new CmdDel(); break;
   case MyUI::PRINT_F: cmd= new CmdPrint(); break;
   case MyUI::PRINT_B: cmd= new CmdPrint(); break;
   case MyUI::CLEAR  : cmd= new CmdClear(); break;
   case MyUI::ORD    : cmd= new CmdSort(); break;
   case MyUI::CONC   : cmd= new CmdConcatenate(); break;
   case MyUI::BACK   : cmd= new CmdShowMainMenu(); break;
   }

   if (cmd)
      cmd->execute(d, ui);
   else
      return false;

   return true;

}