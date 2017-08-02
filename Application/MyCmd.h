#pragma once
#ifndef INCLUDED_MYCMD_H
#define INCLUDED_MYCMD_H

class MyData;
class MyUI;

class MyCmd
{
private:
   MyData& d;
   MyUI& ui;

public:
   ~MyCmd(){}
   MyCmd();
   MyCmd(MyData& _d,MyUI& _ui) : d(_d),ui(_ui) {}
   MyCmd(int command);
   
   virtual void execute (MyData& d, MyUI& ui) = 0;
};

#endif //INCLUDED_MYCMD_

//class MyCmdDoEtc1 : public  MyCmd
//{
//public:
//   ~MyCmdDoEtc1();
//   MyCmdDoEtc1(MyData& _d,MyUi& _ui) : MyCmd(_d,_ui)) {}
//
//   virtual execute(MyData& d,MyUi& ui);
//};
