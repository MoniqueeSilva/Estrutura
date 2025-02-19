#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>    
#include <string.h>   
using namespace std;  
using std::string;
using std::getline;

// estrutura para os elementos da lista encadeada
typedef struct Telemento {
    int valor;  // Valor armazenado no nó
    struct Telemento* proximo;  // Ponteiro para o próximo elemento da lista
} ELEMENTO;  // Apelido para Telemento

// Ponteiro global que representa a lista encadeada simples
ELEMENTO* listaSimples = NULL;

// Função para criar uma nova lista encadeada
void criarLista() {
    if (listaSimples != NULL) {  // Verifica se a lista já existe
        cout << "Ja existe uma lista criada\n";
    } else {
        listaSimples = (ELEMENTO*) malloc(sizeof(ELEMENTO));  // Aloca memória para o primeiro elemento
        if (listaSimples == NULL) {  // Verifica falha na alocação
            cout << "Memoria Insuficiente\n";
        } else {
            listaSimples->proximo = NULL;  // Define o próximo como NULL
            cout << "Informe um valor:\n";
            cin >> listaSimples->valor;  // Recebe o valor do usuário
        }
    }
}

// Função para adicionar um elemento no início da lista
void adicionarElementoInicio() {
    if (listaSimples == NULL) {
        criarLista();  // Se a lista estiver vazia, cria uma nova
    } else {
        ELEMENTO* ptrtemp = (ELEMENTO*) malloc(sizeof(ELEMENTO));  // Aloca memória para novo nó
        if (ptrtemp == NULL) {
            cout << "Memoria Insuficiente\n";
        } else {
            ptrtemp->proximo = NULL;  // Inicialmente, o próximo é NULL
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;
            
            ptrtemp->proximo = listaSimples;  // Aponta para o primeiro elemento da lista
            listaSimples = ptrtemp;  // Atualiza o ponteiro da lista
        }
    }
}

// Função para adicionar um elemento no final da lista
void adicionarElementoFim() {
    if (listaSimples == NULL) {
        criarLista();  // Se a lista estiver vazia, cria uma nova
    } else {
        ELEMENTO* ptrtemp = (ELEMENTO*) malloc(sizeof(ELEMENTO));  // Aloca memória
        if (ptrtemp == NULL) {
            cout << "Memoria Insuficiente\n";
        } else {
            ptrtemp->proximo = NULL;  // Define o próximo como NULL
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;
            
            ELEMENTO* temp = listaSimples;  // Ponteiro temporário para percorrer a lista
            while (temp->proximo != NULL) {
                temp = temp->proximo;  // Avança até o último elemento
            }
            temp->proximo = ptrtemp;  // Atualiza o último elemento para apontar para o novo nó
        }
    }
}

// Função para listar os elementos da lista na ordem normal
void listarElementosNormal() {
    if (listaSimples == NULL) {
        cout << "A lista está vazia!\n";
        return;
    }
    ELEMENTO* temp = listaSimples;
    cout << "Elementos da lista:\n";
    while (temp != NULL) {
        cout << temp->valor << " -> ";
        temp = temp->proximo;
    }
    cout << "NULL\n";
}

// Função para listar os elementos na ordem inversa
void listarElementosInverso(ELEMENTO* no) {
    if (no == NULL){
        return;
    }else{
        listarElementosInverso(no->proximo);
        cout << no->valor << " -> ";
    }
}

// Função para remover um elemento do início da lista
void removerElementoInicio() {
    if (listaSimples == NULL) {
        cout << "A lista já está vazia!\n";
        return;
    }
    ELEMENTO* temp = listaSimples;
    listaSimples = listaSimples->proximo;  // Atualiza o ponteiro da lista
    delete temp;  // Libera memória
    cout << "Elemento removido do início!\n";
}

// Função para remover um elemento do fim da lista
void removerElementoFim() {
    if (listaSimples == NULL) {
        cout << "A lista já está vazia!\n";
        return;
    }
    if (listaSimples->proximo == NULL) {  // Caso especial: apenas um elemento
        delete listaSimples;
        listaSimples = NULL;
        cout << "Elemento removido do fim!\n";
        return;
    }
    ELEMENTO* temp = listaSimples;
    ELEMENTO* anterior = NULL;
    
    while (temp->proximo != NULL) {  // Percorre até o último nó
        anterior = temp;
        temp = temp->proximo;
    }
    anterior->proximo = NULL;  // Remove a referência ao último elemento
    delete temp;  // Libera memória
    cout << "Elemento removido do fim!\n";
}

int main() {
    adicionarElementoInicio();
    adicionarElementoFim();
    adicionarElementoFim();
    
    listarElementosNormal();
    
    removerElementoInicio();
    listarElementosNormal();
    
    removerElementoFim();
    listarElementosNormal();
    
    listarElementosNormal();
    listarElementosInverso(listaSimples);
    
    return 0;
}
