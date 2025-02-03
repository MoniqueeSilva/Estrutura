#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#include <iostream>

using namespace std;

int main() {
    int vetor1[5] = {1, 2, 3, 4, 5};
    int vetor2[5] = {5, 8, 1, 0, 3};

    // Preenchendo o primeiro vetor
    for (int i = 0; i < 5; i++) {
        vetor1[i];
    }

    // Preenchendo o segundo vetor
    for (int i = 0; i < 5; i++) {
        vetor2[i];
    }

    // Comparando e exibindo elementos iguais
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor1[i] == vetor2[j]) {
                cout << "- Vetor1[" << i << "] é igual a Vetor2[" << j << "]";
            }
        }
    }

    return 0;
}