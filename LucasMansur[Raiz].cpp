#include <stdio.h>
#include <stdlib.h>

main (){
	int i=0;
	float y,x,aux;
	
	printf("qual valor de y? :");
	scanf("%f",&y);
	
	if(y == 0){
		
		printf("Raiz de Y = 0\n");
		
	}else{
		
		if(y <= 0){
		printf("Nao e possivel calcular a Raiz\n");
		
	}else{
		x=y/2;
		aux=0;
		
			while (x!=aux){
			aux = x;
			x=x-(x*x-y)/(2*x);
			i ++;
			}
			
		printf("Raiz de Y = %f \n",x);
		printf("Numero de Repeticoes %d \n",i);
	}	
		}	
		
	system ("pause");
	return 0;
}
