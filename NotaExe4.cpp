#include <stdio.h> 
#include <stdlib.h>

main(){


int i, num=0, soma=0, total=0; 

for (i=0; i<=20; i++) { 

printf(" Informe numero positivo ou negativo: " );

scanf("%d", &num); 

if (num>=0) { 

soma=soma+num; 

} else { 

total=total+1; 

}

}

printf(" Soma dos numeros positivos: %d\n", soma);

printf("Total de numeros negativos: %d" , total);

    return 0;

}
