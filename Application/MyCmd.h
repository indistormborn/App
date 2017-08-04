#pragma once
#ifndef INCLUDED_MYCMD_H
#define INCLUDED_MYCMD_H
#include "MyData.h"
#include "MyUI.h"

class MyCmd
{
private:
   MyData& d;
   MyUI& ui;

public:
   ~MyCmd(){}
   MyCmd();
   MyCmd(MyData& _d,MyUI& _ui) : d(_d),ui(_ui) {}
   MyCmd(int command);
   
   virtual void execute (MyData& d, MyUI& ui);
};

#endif //INCLUDED_MYCMD_
