#pragma once
#ifndef INCLUDED_CMDDEL_H
#define INCLUDED_CMDDEL_H
#include "MyCmd.h"

class CmdDel : public MyCmd
{
public:
   virtual ~CmdDel(){}
   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDDEL_H