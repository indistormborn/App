#pragma once
#ifndef INCLUDED_CMDGET_H
#define INCLUDED_CMDGET_H
#include "MyCmd.h"

class CmdGet : public MyCmd
{
public:
   virtual ~CmdGet(){}
   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDGET_H