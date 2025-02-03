//bibliotecas de C/C++
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::getline;

//função principal
int main() {
    //váriaveis
    string nome = "Monique da Silva Nascimento"; 
    string nomeInvertido = "";
    //percorrer o nome de trás para frente
    int i = nome.size() - 1; //averiguar tamanho da string e retirar o '\0'
    while (i >= 0) { //percorrer todos os caracteres
        nomeInvertido += nome[i]; //inverter as posições
        i--; //decremento para a próxima iteração
    }
    // Imprimindo os resultados
    cout << "Seu nome invertido: " << nomeInvertido << "\n";
    cout << "Meu nome completo e: " << nome << "\n";

    return 0; //fim do programa
}