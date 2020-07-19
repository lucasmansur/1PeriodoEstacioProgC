/*3. Construa um algoritmo em pseudocódigo que leia 2 números inteiros,
 do teclado, verifique e exiba qual é o maior, o menor ou se são iguais. */
 
#include <stdio.h>
#include <stdlib.h>

main ()
{
     
int a,b;
			//caixa de entrada de datos
printf("Informe o valor do primeiro numero: ");
scanf ("%d",&a);

printf("Informe o valor do segundo numero: ");
scanf ("%d",&b);
 
				//caixa de verificação de valores.
if (a> b ){
	printf("o numero %d e maior e diferente do %d \n",a,b);
}
else if (b> a ){
	printf("o numero %d e maior e diferente do %d \n",b,a);}
	else 
	printf("os numeros sao iguais\n");

system("pause");
return  0;
}
