#pragma once
#ifndef INCLUDED_CMDSET_H
#define INCLUDED_CMDSET_H
#include "MyCmd.h"

class CmdSet : public MyCmd
{
public:
   virtual ~CmdSet(){}
   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDSET_H