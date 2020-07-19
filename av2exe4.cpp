#include <stdio.h> 
#include <stdlib.h> 
 
int main(){ 
int opcao; 
int nota1,nota2,media; 
puts("digite 1 para calcular as notas e 0 para sair do programa: \n"); 
while(opcao==1){ 
printf("digite a primeira nota: \n");
scanf("%d",&nota1); 
printf("digite a segunda nota: \n");
scanf("%d",&nota2); 
media=(nota1+nota2)/2; 
printf("a media das notas e : %d \n\n",media); 
printf("deseja calcular mais uma media? 1 para sim e 0 para nao: \n");
scanf("%d",&opcao); 
} 
system("pause"); 
return 0;}
