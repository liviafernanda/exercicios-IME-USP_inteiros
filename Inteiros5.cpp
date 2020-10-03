#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define TAM 5

/*Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos.
Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.
*/

int main() {
    setlocale (LC_ALL, "");
    int i;
    int maiorQtd = 0;
    int dia;
    int qtd [TAM];

    //recebe as quantidades vendidas nos dias
    for(int i = 1; i <= TAM; i++){
        printf("Digite a quantidade vendida no %dº dia: ", i);
        scanf("%d", &qtd[i]);

        //encontra o maior número e o dia
         if(qtd[i] > maiorQtd){
            maiorQtd = qtd[i];
            dia = i;
        }

    }

    printf("A maior quantidade foi vendida no %dº dia, e foram vendidos %d discos.", dia, maiorQtd);

return 0;
}
