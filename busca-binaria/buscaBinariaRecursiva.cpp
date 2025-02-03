#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int elemento) {
    if (inicio > fim)
        return -1; // Elemento não encontrado

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == elemento)
        return meio; // Elemento encontrado
    else if (vetor[meio] < elemento)
        return buscaBinariaRecursiva(vetor, meio + 1, fim, elemento); // Metade direita
    else
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, elemento); // Metade esquerda
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = 5; // Tamanho do vetor
    int elemento = 30;

    int resultado = buscaBinariaRecursiva(vetor, 0, tamanho - 1, elemento);
    cout << resultado << "\n";

    return 0;
}
