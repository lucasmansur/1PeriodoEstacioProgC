#include <stdio.h>
#include <stdlib.h>


int main(){ 

int y=10,x=5,z=2;

for (z=0;z<=y;z++){
	x=z++;
}

printf("%d , %d ,%d\n",z,x,y);

system("pause");
return 0;}
