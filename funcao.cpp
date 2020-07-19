#include <cstdlib>
 #include <iostream>
 
using namespace std;

 int quadrado(int);

 int main(int argc, char *argv[]){
int numero, quad;
 cout<< "Digite um valor inteiro: ";
 cin >> numero; 
 quad = quadrado(numero);
cout<< "Quadrado de " << numero<< " igual a " << quad << endl;
                         return 0;
                        }

                           int quadrado (int n){ 
                           n = n*n;
                           return (n);
                          }

