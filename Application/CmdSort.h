#pragma once
#ifndef INCLUDED_CMDSORT_H
#define INCLUDED_CMDSORT_H
#include "MyCmd.h"

class CmdSort : public MyCmd
{
public:
   virtual ~CmdSort(){}
   virtual void execute(MyData* _d, MyUI* _ui);
};

#endif //INCLUDED_CMDSORT_H