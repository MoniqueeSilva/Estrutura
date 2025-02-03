#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int buscaBinaria(int vetor[], int tamanho, int elemento) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == elemento){
            return meio; // Elemento encontrado
        }else if (vetor[meio] < elemento){
            inicio = meio + 1; // Procura na metade direita
        }else{
            fim = meio - 1; // Procura na metade esquerda
        }
    }

    return -1; // Elemento não encontrado
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    int elemento = 60;

    int resultado = buscaBinaria(vetor, tamanho, elemento);
    cout << resultado << "\n";

    return 0;
}