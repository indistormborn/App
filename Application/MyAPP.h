#pragma once
#ifndef INCLUDED_MYAPP_H
#define INCLUDED_MYAPP_H

class MyUI;
class MyData;
class MyCmd;

class MyAPP
{
private:
   MyUI *ui;
   MyData *d;
   MyCmd *cmd;

   bool cmdExecute(int menuOption);

public:
   ~MyAPP();
   MyAPP();
   
   void run();
};

#endif INCLUDED_MYAPP_H