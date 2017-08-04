#pragma once
#include <stdlib.h>
#include <map>
#include <string>
#ifndef INCLUDED_MYUI_H
#define INCLUDED_MYUI_H

class MyUI
{
private:
   std::map<int, std::string> errMsgs;
   std::map<int, std::string> insMsgs;
   std::map<int, std::string> infMsgs;

   void createErrorMessages();
   void createInsertMessages();
   void createInfoMessages();

public:
   ~MyUI(){}
   MyUI(){
      createInfoMessages();
      createInsertMessages();
      createErrorMessages();
      mainMenu();
   }

   enum mainOptions {FIRST_LIST=11, SECOND_LIST=22, CLOSE_APP=100};
   enum manipOptions {ADD_POS, ADD_END, DEL_POS, DEL_BEG, DEL_END, PRINT_F, PRINT_B, CLEAR, ORD, CONC, BACK=100};

   enum errorMessages {ERROR_DEL=10, ERROR_SET, ERROR_GET, ERROR_OPTION};
   enum insertMessages {INSERT_V=20, INSERT_P, INSERT_V_P};
   enum infoMessages {VALUE_ADD=30, POS_REMOVED, BEG_EXCLUDED, END_EXCLUDED, PRINTED_BE, PRINTED_EB, EMPTY_LIST, ORD_LIST, CONCATENATED};
   
   int getMenuOption(int message);
   int getMenuOption();
   
   void mainMenu();
   void manipMenu();

   std::string getMessage(int valueOf);

   void clearScreen() { system("cls"); }
   
   void print(std::string s);
};

#endif //INCLUDED_MYUI_H