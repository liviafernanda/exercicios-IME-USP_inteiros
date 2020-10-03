// Dados um inteiro x e um inteiro não-negativo n, calcular x n

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int x;
    int n;
    int pot = 1;
    int i = 0;

    printf("Entre com um número: ");
    scanf ("%d", &x);

    printf("Entre com um número que deseja elevar à potência: ");
    scanf("%d", &n);

    //c = pow(x,n); Sem utilizar o pow:

    while(i < n){
        pot = pot * x;
        i++;

    }

    printf("A potenciação dos números é: %d ", pot);



return 0;
}
