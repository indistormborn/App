#pragma once
#ifndef INCLUDED_CMDPRINT_H
#define INCLUDED_CMDPRINT_H
#include "MyCmd.h"

class CmdPrint : public MyCmd
{
public:
   virtual ~CmdPrint(){}
   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDPRINT_H