//entry point to the application
#include <iostream>
#include "MyUI.h"

int main()
{  
   MyUI *ui = new MyUI();
   std::cout << ui->getMessage(23);
}