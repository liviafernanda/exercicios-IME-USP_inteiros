//Dado um inteiro positivo n, verificar se n � primo.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");


int n;
int contador = 0;
printf("Entre com um n�mero e eu te direi se ele � primo. ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    if(n%i == 0){
    printf("%d divide por %d \n", n, i);
    contador++;
    }
}

if(contador > 2){
    printf("N�o � primo.");
} else {
    printf("� primo.");
}




return 0;
}
