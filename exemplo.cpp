#include<stdio.h>
#include<stdlib.h>


int main () { 

char nome[5]; 
 
 printf ("ler um caractere:");
 
gets (nome);       //ler um caractere: A 
printf("%s \n",nome[0]);    //A 

printf ("ler um nome:");

scanf ("%s",&nome[5]);        //ler um nome: amor 
printf("%s \n",nome[5]); //amor 
return 0;
system ("pause"); }
