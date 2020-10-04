//Faça um programa que, dado n, calcula Fibonacci de n.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Sequencia fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..


int main(){

setlocale(LC_ALL, "");

int n, f3;
int f1 = 0;
int f2 = 1;
int cont = 1;

printf("Entre com um número para calcular o fibonacci dele: ");
scanf("%d", &n);

printf("%d - ", f1);
while(cont < n){
    f3 = f2 + f1;
    f1 = f2;
    f2 = f3;

    printf("%d - ", f3);

    cont++;

}

printf("\n\nO %d-ésimo termo de fibonacci é %d\n\n", n, f3);


return 0;

}
