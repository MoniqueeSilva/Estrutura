//importações padrão de C/C++
#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

//função principal
int main() {
    //vetores com valores definidos
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[5] = {2, 4, 6, 8, 10};
    int concatenado[15]; //vetor que será concatenado
    
    for (int i = 0; i < 10; i++) { //iteração para percorrer o vetor 1 até a posição 10
       concatenado[i] = vetor1[i]; //atribuido os elementos do vetor 1 na concatenação
    }

    for (int i = 0; i < 5; i++) { //iteração para percorrer o vetor 2 até a posição 5
        concatenado[i + 10] = vetor2[i]; //atribuido os elementos do vetor 2 na concatenação
    }

    for (int i = 0; i < 15; i++) { //iteração para percorrer o vetor até a posição final, 15
        cout << concatenado[i]; //exibe o vetor concatenado 
    }
    return 0; //fim do programa
}
