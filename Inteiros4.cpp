// Dados um inteiro x e um inteiro n�o-negativo n, calcular x n

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

    printf("Entre com um n�mero: ");
    scanf ("%d", &x);

    printf("Entre com um n�mero que deseja elevar � pot�ncia: ");
    scanf("%d", &n);

    //c = pow(x,n); Sem utilizar o pow:

    while(i < n){
        pot = pot * x;
        i++;

    }

    printf("A potencia��o dos n�meros �: %d ", pot);



return 0;
}
