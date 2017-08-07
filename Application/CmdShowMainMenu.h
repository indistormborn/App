#pragma once
#ifndef INCLUDED_CMDSHOWMAINMENU_H
#define INCLUDED_CMDSHOWMAINMENU_H
#include "MyCmd.h"

class CmdShowMainMenu : public MyCmd
{
public:
   virtual ~CmdShowMainMenu(){}

   virtual void execute(MyData* _d, MyUI* _ui);
};

#endif //INCLUDED_CMDSHOWMAINMENU_H