//entry point to the application
#include <iostream>
#include "MyUI.h"
#include "MyAPP.h"
#include "ListStructure.h"

int main()
{  
   MyAPP* app = new MyAPP();
   app->run();
}