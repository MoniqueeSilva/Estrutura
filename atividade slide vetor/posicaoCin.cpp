#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int vetor1[5], vetor2[5];

    cout << "digite o vetor1(5): ";
    for(int i = 0; i < 5; i ++){
        cin >> vetor1[i];
    }

    cout << "digite o vetor2(5): ";
    for(int i = 0; i < 5; i ++){
        cin >> vetor2[i];
    }

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            if(vetor1[i] == vetor2[j]){
                cout << "Vetor1[" << i << "] é igual a Vetor2[" << j << "]" << "\n";
            }
        }
    }
    return 0;
}