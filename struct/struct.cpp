#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

typedef struct Taluno{ //<tipo> pode ser chamado de Taluno ou ALUNO 
string nome;
int idade;
int mat;
string curso;
struct Taluno * proximo;
}ALUNO;


int main(){
int variavel1;

int * ponteiro = &variavel1;

ALUNO variavel2;
variavel2.nome = "Monique";
variavel2.idade = 19;
variavel2.mat = 12345;
variavel2.curso = "TSI";

ALUNO * p = &variavel2;

//estatico
cout << variavel2.nome << "\n";
cout << variavel2.idade << "\n";
cout << variavel2.mat << "\n";
cout << variavel2.curso << "\n";
cout << "------------------------------" << "\n";

//dinamico
cout << (*p).nome << "\n";
cout << (*p).idade << "\n";
cout << (*p).mat << "\n";
cout << (*p).curso << "\n";
cout << "------------------------------" << "\n";

//dinamico simples
cout << p->nome << "\n";
cout << p->idade << "\n";
cout << p->mat << "\n";
cout << p->curso << "\n";
cout << "\n";
return 0;
}

//vamos usar a forma dinamica simples, pois é melhor 