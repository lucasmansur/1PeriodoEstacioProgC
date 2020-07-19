#include <stdio.h>
#include <stdlib.h>
main()
{
	
   float altura, res;
   char sexo;
   
   printf("Digite seu sexo: M ou F\n");
   scanf("%s",&sexo);
   
   printf("Digite sua Altura: \n");
   scanf("%f",&altura);
   
   if( sexo =='M'|| sexo =='m'){
   	res=((72.7 * altura)- 58);
   	
   }else if(sexo =='f'|| sexo =='F'){
   	res = ((62.1*altura)-44.7);
   }

   printf("peso Ideal %f \n",res);
   
   system("pause");
   return 0;
   
}
