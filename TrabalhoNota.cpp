#include <stdio.h>
#include <stdlib.h>

main (){
	int a=0,b=0,c=0,x=0;
	
	printf("Entre com o valor de a: \n");
	scanf("%d",&a);
	
	printf("Entre com o valor de b: \n");
	scanf("%d",&b);
	
	printf("Entre com o valor de c: \n");
	scanf("%d",&c);	
	
	if (a==b && b==c){
		printf("\n\n--------------------\nValores sao iguais.\n--------------------\n\n");
	}
	
	if( a > b )
    {
        x = b;
        b = a; 
        a = x;
    }
    if( b > c )
    {
        x = c; 
        c = b;
        b = x;
    }
    if( a > b)
    {
        x = b;
        b = a;
        a = x;
    }
	
	printf("Variaveis\n A: %d\n B: %d\n C: %d\n",a,b,c);
	
	system("pause");
	return 0;
}
