#pragma once
#ifndef INCLUDED_CMDSEARCH_H
#define INCLUDED_CMDSEARCH_H
#include "MyCmd.h"

class CmdSearch : public MyCmd
{
public:
   virtual ~CmdSearch(){}
   virtual void execute(MyData& d,MyUI& ui);
};

#endif //INCLUDED_CMDSEARCH_H