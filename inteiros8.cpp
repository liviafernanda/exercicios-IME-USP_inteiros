#include <stdio.h>
#include <iostream>
#include <locale.h>

//Dado um inteiro n�o-negativo n, determinar n!

int main() {
setlocale(LC_ALL, "");
int n;
int fatorial = 1;
int numero = 0;

printf("Digite um n�mero para fatorar: ");

scanf("%d", &n);


//for (int i = n; i >= 1; i--){
//    fatorial = fatorial * i;
//
//}


while(n >= 1){

    fatorial *= n;

    n--;
    numero++;
}


printf("O fatorial de %d � %d", numero, fatorial);


return 0;
}
