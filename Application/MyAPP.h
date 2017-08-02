#pragma once
#ifndef INCLUDED_MYAPP_H
#define INCLUDED_MYAPP_H

class MyUI;
class MyData;
class MyCmd;

class MyAPP
{
private:
   bool cmdExecute(int menuOption);
   MyUI* ui;
   MyData* d;
   MyCmd* cActual;

public:
   ~MyAPP(){}
   MyAPP(){}
};

#endif INCLUDED_MYAPP_H