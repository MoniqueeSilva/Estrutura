//bibliotecas de C/C++
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//função principal
int main(){
    int vetor[20]; //vetor de tamanho 20 definido 

    cout << "Preencha o vetor: "; //saida para o usuário
    for(int i = 0; i < 20; i++){ //iteração até a posição 20
        cin >> vetor[i]; //entrada do vetor 
    }
    for(int i = 20 - 1; i >= 0; i--){//percorre o vetor de trás para frente 
        cout << vetor[i] << " "; //saida finalizada do vetor
    }
    return 0; //fim do programa 
}