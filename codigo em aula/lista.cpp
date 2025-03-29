#include <iostream>  // Inclui a biblioteca para entrada e saída padrão
#include <stdlib.h>  // Inclui a biblioteca para funções de alocação de memória
#include <stdio.h>   // Inclui a biblioteca para funções de entrada e saída
#include <string.h>  // Inclui a biblioteca para manipulação de strings

using namespace std;  // Usa o namespace padrão para evitar o uso de std::
using std::string;    // Usa a classe string do namespace std
using std::getline;   // Usa a função getline do namespace std

// Define a estrutura de um elemento da lista
typedef struct Telemento {
    int valor;               // Valor armazenado no elemento
    struct Telemento *proximo;  // Ponteiro para o próximo elemento na lista
} ELEMENTO;

ELEMENTO *listaSimples = NULL;  // Inicializa a lista como vazia

// Função para criar uma nova lista
void criarLista() {
    if (listaSimples != NULL) {  // Verifica se a lista já existe
        cout << "Ja existe uma lista criada\n";
    } else {
        listaSimples = (ELEMENTO *) malloc(sizeof(ELEMENTO));  // Aloca memória para o primeiro elemento
        if (listaSimples == NULL) {  // Verifica se a alocação de memória foi bem-sucedida
            cout << "Memoria Insuficiente\n";
        } else {
            listaSimples->proximo = NULL;  // Aponta o próximo elemento para NULL
            cout << "Informe um valor:\n";
            cin >> listaSimples->valor;  // Lê o valor do primeiro elemento
        }
    }
}

// Função para adicionar um elemento no início da lista
void adicionarElementoInicio() {
    if (listaSimples == NULL) {  // Verifica se a lista está vazia
        criarLista();  // Cria a lista se ela não existir
    } else {
        ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));  // Aloca memória para o novo elemento
        if (ptrtemp == NULL) {  // Verifica se a alocação de memória foi bem-sucedida
            cout << "Memoria Insuficiente\n";
        } else {
            ptrtemp->proximo = NULL;  // Aponta o próximo elemento para NULL
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;  // Lê o valor do novo elemento
            ptrtemp->proximo = listaSimples;  // Aponta o próximo do novo elemento para o início da lista
            listaSimples = ptrtemp;  // Atualiza o início da lista para o novo elemento
        }
    }
}

// Função para adicionar um elemento no final da lista
void adicionarElementoFim() {
    if (listaSimples == NULL) {  // Verifica se a lista está vazia
        criarLista();  // Cria a lista se ela não existir
    } else {
        ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));  // Aloca memória para o novo elemento
        if (ptrtemp == NULL) {  // Verifica se a alocação de memória foi bem-sucedida
            cout << "Memoria Insuficiente\n";
        } else {
            ptrtemp->proximo = NULL;  // Aponta o próximo elemento para NULL
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;  // Lê o valor do novo elemento
            ELEMENTO *temp = listaSimples;  // Cria um ponteiro temporário para percorrer a lista
            while (temp->proximo != NULL) {  // Percorre a lista até o último elemento
                temp = temp->proximo;
            }
            temp->proximo = ptrtemp;  // Aponta o próximo do último elemento para o novo elemento
        }
    }
}

// Função para imprimir todos os elementos da lista a partir do início
void imprimeElementosDoInicio() {
    if (listaSimples == NULL) {  // Verifica se a lista está vazia
        cout << "A lista esta vazia ou nao existe lista\n";
    } else {
        ELEMENTO *temp = listaSimples;  // Cria um ponteiro temporário para percorrer a lista
        cout << temp->valor << "\n";  // Imprime o valor do primeiro elemento
        while (temp->proximo != NULL) {  // Percorre a lista até o último elemento
            temp = temp->proximo;
            cout << temp->valor << "\n";  // Imprime o valor de cada elemento
        }
    }
}

// Função para remover um elemento da lista
void removerUmElemento() {
    if (listaSimples == NULL) {  // Verifica se a lista está vazia
        cout << "A lista esta vazia ou nao existe lista\n";
    } else {
        cout << "informe um valor a ser removido:";
        int x;
        cin >> x;  // Lê o valor a ser removido
        ELEMENTO *temp = listaSimples;  // Cria um ponteiro temporário para percorrer a lista

        // Verifica se o valor a ser removido é o primeiro elemento
        if (temp->valor == x) {
            listaSimples = temp->proximo;  // Atualiza o início da lista para o próximo elemento
            free(temp);  // Libera a memória do elemento removido
        } else {
            temp = listaSimples;
            while (temp->proximo->proximo != NULL) {  // Percorre a lista até o penúltimo elemento
                temp = temp->proximo;
            }
            // Verifica se o valor a ser removido é o último elemento
            if (temp->proximo->valor == x) {
                free(temp->proximo);  // Libera a memória do último elemento
                temp->proximo = NULL;  // Aponta o próximo do penúltimo elemento para NULL
            } else {
                temp = listaSimples;
                // Aqui você pode adicionar a lógica para remover um elemento no meio da lista
            }
        }
    }
}

// Função principal
int main() {
    adicionarElementoFim();  // Adiciona um elemento no final da lista
    adicionarElementoFim();  // Adiciona outro elemento no final da lista
    adicionarElementoFim();  // Adiciona mais um elemento no final da lista
    cout << "----------------\n";
    imprimeElementosDoInicio();  // Imprime todos os elementos da lista
    cout << "----------------\n";

    cout << "\n";
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}