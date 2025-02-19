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
            cout << "informe um valor: ";
            cin >> listaSimples->valor; // armazenar o valor no primeiro nó da lista 
        }
    }
}

int main(){
    criarLista(); //chamada da função

    return 0;
}
