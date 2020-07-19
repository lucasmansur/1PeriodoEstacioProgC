/* Desenvolva um algoritmo que leia o nome e 2 notas de um aluno,
 faça a media aritmética das notas, e se a media for maior ou igual a 6,
  imprima o nome e a media do aluno,  e a msg “aluno aprovado”. 
  Se a media for menor que 6, imprima o nome e a media do aluno e a msg “aluno em prova final!”  */
  
#include <stdio.h>
#include <stdlib.h>

main ()
{

char nome[30];
float a=0,b=0,m=0;

			//caixa de entrada de datos

printf("Informe o nome do aluno: \n");
scanf ("%s",&nome);
			
printf("Informe o valor da primeira nota: \n");
scanf ("%f",&a);

printf("Informe o valor da segunda nota: \n");
scanf ("%f",&b);

m= (a+b)/2;
 
				//caixa de verificação de valores.
if (m>=6 ){
	printf("o aluno %s tem media %f e esta aprovado \n",nome,m);
}
if(m<6 )
	printf("o aluno %s tem media %f e esta de prova final \n",nome,m);


system("pause");
return  0;
}
