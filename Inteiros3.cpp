#include <stdio.h>
#include <iostream>

//Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.

int main(){

int n;

printf("Entre com um n�mero inteiro: \n");

scanf("%d", &n);

for(int i = 1; i <= n; i++){
    if(i%2 != 0){

        printf("%d - ", i);
    }

}


return 0;
}
