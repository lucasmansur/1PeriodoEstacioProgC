#include <stdio.h>
#include <stdlib.h>
main()
{
	
   int idade=0;
   
   
   printf("Digite sua Idade: \n");
   scanf("%d",&idade);
   
   if (idade <16|| idade >65){
   	printf("nao Eleitor\n");
   }   else {
   	printf("Eleitor\n");
   }
   
   
   system("pause");
   return 0;
   
}
