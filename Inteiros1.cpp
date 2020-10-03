#include <stdio.h>
#include <iostream>

using namespace std;

//Dada uma sequencia de números inteiros não nulos, seguida por 0, imprima seus quadrados.


int calculaQuadrado(int numero){

int quadrado = numero*numero;

return quadrado;
}

int main(){

int n [] = {0, 1, 12, 85, 402, 500, 1893};

int tam = sizeof(n)/sizeof(int);

for (int i = 0; i < tam; i++){
    cout << calculaQuadrado(n[i]) << " - ";
}



return 0;

}
