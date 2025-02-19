#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

// estrutura do aluno 
typedef struct Taluno{
string nome;
int idade;
int mat;
string curso;
struct Taluno *proximo;
}ALUNO; // apelido para Taluno

int main(){
ALUNO a1;
a1.nome = "anny";
a1.idade = 15;
a1.mat = 123;
a1.curso = "NAOSABE";
a1.proximo = NULL;

ALUNO a2;
a2.nome = "vascaino";
a2.idade = 23;
a2.mat = 111;
a2.curso = "TSI";
a2.proximo = NULL;

ALUNO a3;
a3.nome = "HarryPotter";
a3.idade = 13;
a3.mat = 222;
a3.curso = "Hogwarts";
a3.proximo = NULL;

//apontametos, criando uma ligação entre os alunos (lista encadeada)
a1.proximo = &a2; //a1 aponta para a2
a2.proximo = &a3; //a2 aponta para a3

ALUNO *primeiro = &a1; //ponteiro que aponta para o primeiro aluno da lista

// acesso aos dados dos alunos apartir do primeiro até chegar ao terceiro
cout << primeiro->proximo->proximo->nome << "\n";
cout << primeiro->proximo->proximo->idade << "\n";
cout << primeiro->proximo->proximo->mat << "\n";
cout << primeiro->proximo->proximo->curso << "\n";

//adicionando um quarto aluno no final da lista
primeiro->proximo->proximo->proximo = (ALUNO *) malloc(sizeof(ALUNO)); //malloc que alocar memoria de forma dinamica para adicionar um novo aluno

// verificação
if(primeiro->proximo->proximo->proximo != NULL){ // o ultimo aluno aponta para NULL

// dados do novo aluno
primeiro->proximo->proximo->proximo->nome = "Aniversariante";
primeiro->proximo->proximo->proximo->idade = 22;
primeiro->proximo->proximo->proximo->mat = 333;
primeiro->proximo->proximo->proximo->curso = "Conceicao";
primeiro->proximo->proximo->proximo->proximo = NULL;
cout << primeiro->proximo->proximo->proximo->nome << "\n";
cout << primeiro->proximo->proximo->proximo->idade << "\n";
cout << primeiro->proximo->proximo->proximo->mat << "\n";
cout << primeiro->proximo->proximo->proximo->curso << "\n";
}else{
cout << "Memoria Insuficiente\n";
}


cout << "\n";
return 0;
}
