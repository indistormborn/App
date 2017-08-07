#include "CmdShowMainMenu.h"


void CmdShowMainMenu::execute(MyData* d, MyUI* ui)
{
   ui->clearScreen();
   ui->mainMenu();
}