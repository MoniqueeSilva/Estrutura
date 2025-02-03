#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::getline;

int main() {
    string nomeCompleto = "Monique Nascimento";

    // Encontrando o índice do último espaço
    int ultimaPosicao = nomeCompleto.find_last_of(' ');

    // Invertendo a ordem
    string sobrenome = nomeCompleto.substr(ultimaPosicao + 1);
    string nome = nomeCompleto.substr(0, ultimaPosicao);

    cout << "Nome invertido: " << sobrenome << " " << nome << "\n";

    return 0;
}