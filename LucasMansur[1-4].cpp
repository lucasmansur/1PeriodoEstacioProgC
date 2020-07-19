/*1-  Construa um algoritmo em pseudocódigo que:
a: permita a entrada de dois números tipo inteiro 
b: calcule e exiba a soma dos números na tela.
c: Se o numero for par, exiba ao lado do numero “É par”  
d: Se o numero não for par , exiba ao lado do numero “Não é impar”*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
     
int a,b,c,x;
printf("Informe o valor do primeiro numero: ");
scanf ("%d",&a);

printf("Informe o valor do segundo numero: ");
scanf ("%d",&b);

printf("Informe o valor do segundo numero: ");
scanf ("%d",&c);

 x= a+b+c;
 
printf("O resultado da soma dos numero  %d ",x);

if (x % 2== 0){
	printf("e par \n");
}
else 
printf("e impar \n");

system("pause");
return  0;
     
     
 }
