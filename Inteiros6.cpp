//Dado o n�mero n de alunos de uma turma de Introdu��o aos Aut�matos a Pilha (MAC 414) e suas notas da primeira prova,
//determinar a maior e a menor nota obtidas por essa turma (Nota m�xima = 100 e nota m�nima = 0).

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

#define ALUNOS 6



int main(){
    setlocale(LC_ALL, "portuguese");
    int n;

    int maiorNota = 0;
    int menorNota = 100;
    int melhorAluno;
    int piorAluno;

    cout << "Digite o n�mero de alunos: " << endl;
    cin >> n;

    int nota [n];

    for (int i = 1; i <= n; i++){
        cout << "Digite a nota do " << i << "� aluno: ";
        cin >> nota[i];

        if(nota[i] < menorNota){
            menorNota = nota[i];
            piorAluno = i;
        }
        if(nota[i] > maiorNota){
            maiorNota = nota[i];
            melhorAluno = i;
        }
    }

    cout << "A maior nota foi: " << maiorNota << " do aluno " << melhorAluno << endl;
    cout << "A menor nota foi: " << menorNota << " do aluno " << piorAluno;



return 0;
}
