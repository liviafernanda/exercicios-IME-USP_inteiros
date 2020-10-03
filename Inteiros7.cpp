//  Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
#include <stdio.h>
#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i = 1;
    int par = 0;
    int n;
    int somaPares = 0;

    printf("Digite a quantidade de números que deseja manipular. ");
    scanf("%d", &n);

//    for (i = 1; i <= n; i++){
//        if(i%2 == 0){
//            printf("%d -", i);
//            somaPares += i;
//        }
//    }


    while(i <= n/2){
        par = i*2;
        printf("%d - ", par);
        somaPares += par;
        i++;

    }

    printf("\n A soma dos pares é: %d", somaPares);

return 0;
}
