// Dados n e dois números inteiros positivos i e j diferentes de 0,
//imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int n, i, j;
    int multiplo = 0;
    int contador = 0;

    cout << "Cálculo dos n primeiros múltiplos de i e j. " << endl;
    cout << "Escolha a quantidade n de números a serem impressos: ";
    cin >> n;

    cout << "Escolha o valor do i: ";
    cin >> i;

    cout << "Escolha o valor do j: ";
    cin >> j;

    cout << "Os " << n << " primeiros múltiplos de " << i << " e "<< j << " são: ";

    while (contador < n){

        if(multiplo%i == 0 || multiplo%j == 0){
                printf("%d - ", multiplo);
                contador++;
        }
        multiplo++;

    }




return 0;
}
