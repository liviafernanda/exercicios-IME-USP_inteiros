#include <stdio.h>
#include <iostream>

using namespace std;

//Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros inteiros positivos


int main(){

    int n;

    int soma = 0;

    cout << "Entre com um n�mero inteiro para somar " << endl;
    cin >> n;


    for (int i = 1; i <= n; i++){
        soma += i;

        cout << soma << " + ";
    }

    cout << " = " << soma;



return 0;
}
