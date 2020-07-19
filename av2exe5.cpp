#include<stdio.h>
#include<stdlib.h>

main() {
	int mat[5][5]; 
	int	l=0,c=0;

	for(l=0; l<=4; l++) {

		for(c=0; c<=4; c++) {

			printf("Digite o numero representativo da matriz aonde sua linha e %d e coluna %d:  \n",l+1,c+1);
			scanf("%d",&mat[l][c]);
		}
	}
	
	printf("\n\n\n");	
	puts("Matriz Completa:   \n");
	for(l=0; l<=4; l++) {
		for(c=0; c<=4; c++) {
			printf("%d",mat[l][c]);
		}
		printf("\n");
	}	
	puts ("\n\n");
	puts("Diagonal Principal da Matriz:   \n");

	for(l=0; l<=4; l++) {
		for(c=0; c<=4; c++) {

			if(mat[l][c] %2 ==0 )
				printf("%d \t", mat[l][c]);
			else
				printf("    ");
		}
		printf("\n\n\n");
	}
}
