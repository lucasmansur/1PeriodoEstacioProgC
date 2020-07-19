#include <stdio.h>
#include <stdlib.h>


int main () { 
int opcao; 
do 
 { 
printf("Menu \n");
printf("1-INCLUIR\n");
printf("2-EXLUIR\n");
printf("3-CONSULTAR\n");
printf("9-SAIR\n");
scanf("%d",&opcao);
switch(opcao){
 case 1: printf("VAI INCLUIR\n");
 break;
 case 2: printf("VAI EXCLUIR\n");
 break;
 case 3: printf("VAI CONSULTAR\n");
 break;
 case 9: break;
 default: printf("OPCAO INVALIDA\n");
 }  
 } 
 while ( opcao !=9  );
 return 0;
system ("pause");
 } 
