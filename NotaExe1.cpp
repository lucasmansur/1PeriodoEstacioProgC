#include <stdio.h>
#include <stdlib.h>


main(){
	
float altura, idade;

printf("Digite a altura do jogador: ");
scanf("%d",&altura);
printf("Digite a idade do jogador: ");
scanf("%d",&idade);

if(idade>=15 || altura<=1.75){
    printf("Candidato reprovado!\n");
}
else{
    if(idade<15 && altura>1.75){
        printf("Candidato aprovado!\n");
    }
}

system("pause");
return 0;}
