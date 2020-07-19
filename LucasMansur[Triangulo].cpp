#include <stdio.h>
#include <stdlib.h>

main (){
	int a,b,c;
	
	printf("Digite o primeiro lado do triangulo:\n");
	scanf("%d",&a);
	printf("Digite o segundo lado do triangulo:\n");
	scanf("%d",&b);
	printf("Digite o terceiro lado do triangulo:\n");
	scanf("%d",&c);
	
	if((a<b+c)&&(b<a+c)&&(c<a+b)){ //verifica se e triangulo
	if((a==b)&&(b==c)){
	  	printf("Tringulo equilatero \n");
	  }
	  else{
	  	if ((a==b)||(b==c)||(c==a)){
	  		printf("Triangulo isoceles \n");
		  }
		 else {
		 	printf("Triangulo escaleno \n");
		 } 
	  }
	}
	else {
		printf("Dados informados nao representam um triangulo \n");
	}
	system ("pause");
	return 0;
}
