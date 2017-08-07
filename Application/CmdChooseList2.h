#pragma once
#ifndef INCLUDED_CMDCHOOSELIST2_H
#define INCLUDED_CMDCHOOSELIST2_H
#include "MyCmd.h"

class CmdChooseList2 : public MyCmd
{
public:
   virtual ~CmdChooseList2(){}
   
   virtual void execute(MyData* d, MyUI* ui);
};

#endif //INCLUDED_CMDCHOOSELIST2_H
