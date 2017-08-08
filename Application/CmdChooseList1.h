#pragma once
#ifndef INCLUDED_CMDCHOOSELIST1_H
#define INCLUDED_CMDCHOOSELIST1_H
#include "MyCmd.h"

class CmdChooseList1 : public MyCmd
{
public:
   virtual ~CmdChooseList1() {}
   
   virtual void execute(MyData* d, MyUI* ui);
};

#endif //INCLUDED_CMDCHOOSELIST1_H
