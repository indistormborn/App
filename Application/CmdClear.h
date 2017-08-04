#pragma once
#ifndef INCLUDED_CMDCLEAR_H
#define INCLUDED_CMDCLEAR_H
#include "MyCmd.h"

class CmdClear : public MyCmd
{
public:
   virtual ~CmdClear(){}

   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDCLEAR_H