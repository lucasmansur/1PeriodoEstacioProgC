#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
int a, b;
int num, x[3];

printf("Digite um numero: ");
scanf("%i", &num);

for(a=0; num; a++)
 {  
  x[a] = num % 10;
  num /= 10;
 }

for(b=0; b<a; b++)
 { num += x[b] * pow(10, (a-b-1)); }

printf("Num. invertido: %i", num);

}
