#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
using std:: getline;
using std:: string;

// estrutura para lista encadeada simples
typedef struct Telemento{ // Telemento é o nome da lista
    int valor; // valor para armazenar os nó na lista
    struct Telemento *proximo; // criação de um ponteiro para o proximo elemento da lista 
}ELEMENTO; // apelido para a estrutura Telemento

ELEMENTO *listaSimples = NULL; // criação de um ponteiro para elemento na lista, iniciado em null

// função para criar uma lista simples
void criarLista(){
    if(listaSimples != NULL){ // caso na lista tenha algum valor, significa que já existe uma  
        cout << "JÁ EXISTE UMA LISTA";
    }else{
        listaSimples = (ELEMENTO*) malloc(sizeof(ELEMENTO)); // aloca um espaço na memória que armazena um valor para elemento da lista
        if(listaSimples == NULL){
            cout << "MEMÓRIA INSUFICIANTE PARA ALOCAÇÃO";
        }else{
            listaSimples->proximo = NULL; // nó(elemento) para armazenar um valor,que não tem elemento ainda 
            cout << "INFORME UM VALOR: ";
            cin >> listaSimples->valor; // armazenar o valor no primeiro nó da lista 
        }
    }
}

// função para adicionar elemento no inicio da lista
void adicionarElementoInicio(){
    if(listaSimples == NULL){ // verifica se a lista está vazia, caso esteja vai inializar uma lista com a criação
        criarLista();
    }else{
        ELEMENTO *ptrTemp = (ELEMENTO*) malloc(sizeof(ELEMENTO)); // alocou um espaço na memoria para armazenar o ponteiro temporario
        if(ptrTemp == NULL){
            cout << "MEMÓRIA INSUFICIENTE PARA ALOCAÇÃO";
        }else{
            ptrTemp->proximo = NULL; // o novo elemento para a lista está apontando para null
            cout << "INFORME UM VALOR: ";
            cin >> ptrTemp->valor; // armazena o novo valor no novo nó
            ptrTemp->proximo = listaSimples; // o novo elemento agora aponta para o ex primeiro elemento da lista
            listaSimples = ptrTemp; // atualiza a lista para apontar para o novo elemento, onde agora ele é o primeiro da lista
        }
    }
}

int main(){
    criarLista();
    adicionarElementoInicio();
    return 0;
}
