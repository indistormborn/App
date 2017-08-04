#pragma once
#ifndef INCLUDED_CMDADD_H
#define INCLUDED_CMDADD_H
#include "MyCmd.h"

class CmdAdd : public MyCmd
{
public:
   virtual ~CmdAdd(){}

   virtual void execute(MyData& d, MyUI& ui);

};

#endif //INCLUDED_CMDADD_H