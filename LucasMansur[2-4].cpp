/*Construa um algoritmo em pseudocódigo que:
a: Permite a entrada via teclado de 4 números inteiros.
b: Calcule e exiba a soma dos números na tela.
c: selecione o maior num e o imprima com a msg “O maior numero é:” */


#include <stdio.h>
#include <stdlib.h>

main ()
{
     
int a,b,c,d;
			//caixa de entrada de datos
printf("Informe o valor do primeiro numero: ");
scanf ("%d",&a);

printf("Informe o valor do segundo numero: ");
scanf ("%d",&b);

printf("Informe o valor do terceiro numero: ");
scanf ("%d",&c);

printf("Informe o valor do quarto numero: ");
scanf ("%d",&d);
 
				//caixa de verificação de valores.
if (a>b || a>c || a>d ){
	printf("o primeiro numero digitado, %d e o maior dentre todos. ",a);
}
else if (b>a || b>c || b>d ){
	printf("o segundo numero digitado, %d e o maior dentre todos. ",b);}
	
	else if (c>a || c>b || c>d ){
	printf("o terceiro numero digitado, %d e o maior dentre  todos. ",c);}
	
	else if (d>a || d>b || d>c ){
	printf("o quarto numero digitado, %d e o maior dentre todos. ",d);}

system("pause");
return  0;
}
