//bibliotecas de C/C++
#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

//função principal
int main() {
    int vetor1[10], vetor2[5], concatenado[15]; //vetores e seus tamanhos definidos

    cout << "Digite os elementos do primeiro vetor(10): "; //saida para digitação do usuário
    for (int i = 0; i < 10; ++i) { //iteração para percorrer o vetor até a posição 10
        cin >> vetor1[i]; //entrada do vetor
    }

    cout << "Digite os elementos do segundo vetor(5): "; //saida para digitação do usuário
    for (int i = 0; i < 5; ++i) { //iteração para percorrer o vetor até a posição 5
        cin >> vetor2[i]; //entrada do vetor
    }

    // Concatenação
    for (int i = 0; i < 10; ++i) { //iteração para percorrer o vetor até a posição 10
        concatenado[i] = vetor1[i]; //atribuição dos elementos do vetor1 para o vetor concatenado
    }

    for (int i = 0; i < 5; ++i) { //iteração para percorrer o vetor até a posição 5
        concatenado[10 + i] = vetor2[i]; //atribuição dos elementos do vetor2 para o vetor concatenado
    }

    cout << "Vetor concatenado: "; //exibição final do vetor de tamnho 15
    for (int i = 0; i < 15; ++i) { //iteração para percorrer o vetor até a posição 15
        cout << concatenado[i] << " "; //saida do vetor
    }
    return 0; //fim do programa
}