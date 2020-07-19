#include <stdio.h>
#include <stdlib.h>


int main(){
int numero=0,i=0,i2=0;
printf("Digite o numero que deseja calcular o fatorial: ");
scanf("%d",&numero);
i=numero;
i2=numero;
while(i>1){
    --i;
    numero=numero*i;
}
printf("O fatorial de %d eh igual a: %d ",i2,numero);

system("pause");
return 0;}
