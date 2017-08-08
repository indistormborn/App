#pragma once
#ifndef INCLUDED_MYCMD_H
#define INCLUDED_MYCMD_H
#include "MyData.h"
#include "MyUI.h"

class MyCmd
{

public:
   virtual ~MyCmd() {}
   MyCmd() {}
   MyCmd(int command) {}
   
   virtual void execute (MyData* d, MyUI* ui) = 0;
};

#endif //INCLUDED_MYCMD_
