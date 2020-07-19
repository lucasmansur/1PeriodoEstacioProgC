
#include <stdio.h>
#include <stdlib.h>

main() { 
 int i, vetor [6], dobro [6]; 
 
 for (i=0;i <6;i++){  
 printf("Qual o valor de  vetor[%d]? ",i); 
scanf("%d",&vetor[i]);
dobro[i] = vetor[i]*2; 
} 
for (i=0;i <6;i++){ 
printf("dobro[%d] = %d \n",i,dobro[i]); 
} 
system ("pause"); 
return 0; 
 }
