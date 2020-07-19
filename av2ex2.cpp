#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
int num1, num2; 
puts("digite o primeiro numero: \n");
scanf("%d",&num1);
puts("digite o segundo numero: \n");
scanf("%d",&num2);
if(num1==num2){ 
puts("os numeros sao iguais!\n");} 
else{ 
if(num1>num2){ 
printf("o numero %d e o maior numero!\n",num1);} 
else{ 
printf("o numero %d e o maior numero!\n",num2);} 
 
 
system("pause"); 
return 0;
}}
