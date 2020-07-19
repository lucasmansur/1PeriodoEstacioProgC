#include <stdio.h>
#include <stdlib.h>
main()
{
   float a, b, area=0,p=0;
   printf("Digite a medida do lado 1: ");
   scanf("%f",&a);
   printf("Digite a medida do lado 2: ");
   scanf("%f",&b);
   area = a * b;
   p = a+b;
   printf("Area da figura = %f \n",area);
   printf("Perimetro da figura = %f \n",p);
   system("pause");
}
