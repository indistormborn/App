#pragma once
#ifndef INCLUDED_CMDCONCATENATE_H
#define INCLUDED_CMDCONCATENATE_H
#include "MyCmd.h"

class CmdConcatenate : public MyCmd
{
public:
   virtual ~CmdConcatenate(){}
   virtual void execute(MyData* d, MyUI* ui);
   void worked(MyData* d, MyUI* ui);
};

#endif //INCLUDED_CMDCONCATENATE_H