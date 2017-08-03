#include "MyUI.h"
#include <iostream>

int MyUI::getMenuOption(int message)
{
   std::string msg= insMsgs.find(message)->second;
   int t;
   std::cout << msg;
   std::cin >> t;
   std::cout << std::endl;
   return t;
}


//////////////////////////////////////////////////////////////////////////////////////////////////
void MyUI::welcome()
{
   std::cout << "------------------- BEM-VINDO -------------------" << std::endl;
   std::cout << "Deseja gerar as MyLists? [s/n]" << std::endl;
   std::cout<<std::endl;
  

}

void MyUI::mainMenu()
{
   std::cout << "--------------- MENU PRINCIPAL ---------------"<< std::endl;
   std::cout << "|                                            |"<<std::endl;
   std::cout << "| 1- Configurar Primeira Lista               |"<<std::endl;
   std::cout << "| 2- Configurar Segunda Lista                |"<<std::endl;
   std::cout << "| 100- Fechar aplicacao                      |"<< std::endl;
   std::cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |"<<std::endl;
   
}

void MyUI::manipMenu()
{
   std::cout << "------------------- Opcoes de manipulacao -------------------" <<std::endl;
   std::cout << "0- Adicionar na posicao" <<std::endl;
   std::cout << "1- Adicionar no fim"<<std::endl;
   std::cout << "-----------------" <<std::endl;
   std::cout << "2- Deletar posicao" <<std::endl; 
   std::cout << "3- Deletar inicio da lista"<<std::endl;
   std::cout << "4- Deletar fim da lista"<<std::endl;
   std::cout << "-----------------" <<std::endl;
   std::cout << "5- Imprimir sentido inicio-fim"<<std::endl;
   std::cout << "6- Imprimir sentido fim-inicio"<<std::endl;
   std::cout << "-----------------" <<std::endl;
   std::cout << "7- Esvaziar lista" <<std::endl;
   std::cout << "8- Ordenar" <<std::endl;
   std::cout << "9- Concatenar" <<std::endl;
   std::cout << "100- Voltar para o menu principal" <<std::endl;
   
}

//////////////////////////////////////////////////////////////////////////////////////////////////

void MyUI::createErrorMessages()
{
   errMsgs[ERROR_DEL]= "AVISO: impossivel deletar, posicao informada nao existe na lista \n";
   errMsgs[ERROR_SET]= "Posicao a ser atualizada nao existe na lista \n";
   errMsgs[ERROR_GET]= "Posicao a ser consultada nao existe na lista \n";
   errMsgs[ERROR_OPTION]= "Opcao invalida! Insira outra:  \n";
}

void MyUI::createInsertMessages()
{
   insMsgs[INSERT_V]= "Insira valor:  \n";
   insMsgs[INSERT_P]= "Insira a posicao:  \n";
   insMsgs[INSERT_V_P]= "Insira valor e posicao:  \n";
}

void MyUI::createInfoMessages(){
   infMsgs [VALUE_ADD]= "Valor adicionado com sucesso! \n";
   infMsgs [POS_REMOVED]= "Posicao removida da lista! \n";
   infMsgs [BEG_EXCLUDED]= "Inicio da lista excluido! \n";
   infMsgs [END_EXCLUDED]= "Fim da lista excluido! \n";
   infMsgs [PRINTED_BE]= "Impressao da lista no sentido INICIO-FIM \n";
   infMsgs [PRINTED_EB]= "Impressao da lista no sentido FIM-INICIO \n";
   infMsgs [EMPTY_LIST]= "Lista esvaziada! \n";
   infMsgs [ORD_LIST]= "Lista ordenada! \n";
   infMsgs [CONCATENATED]= "Lista concatenada! \n";

}

//////////////////////////////////////////////////////////////////////////////////////////////////

std::string MyUI::getMessage(int value){
   //10,11,12,13
   if(value >= 10 && value < 20){
      if ( errMsgs.find(value) != errMsgs.end())
         return errMsgs.find(value)->second;
   }
  //20,21,22
   else if(value >=20 && value < 30){
      if ( insMsgs.find(value) != insMsgs.end())
         return insMsgs.find(value)->second;
   }
   //30,31,32,33,34,35,36,37,38,39
   else { 
      if ( infMsgs.find(value) != infMsgs.end())
         return infMsgs.find(value)->second;
   }

   return "mensagem n encontrada \n";
}