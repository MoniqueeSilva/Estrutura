#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

// Definição de um nó da árvore binária
typedef struct TNO {
    int valor;         // Armazena o valor do nó
    struct TNO *noESQ; // Ponteiro para o nó filho esquerdo
    struct TNO *noDIR; // Ponteiro para o nó filho direito
} NO;

// Ponteiro global que aponta para a raiz da árvore
NO *ptrRaiz = NULL;

// Função para criar o nó raiz
void criarRAIZ() {
    if (ptrRaiz != NULL) { // Verifica se a raiz já existe
        cout << "Ja existe um no raiz\n";
    } else {
        ptrRaiz = (NO *) malloc(sizeof(NO)); // Aloca memória para o nó raiz
        ptrRaiz->valor = 100;  // Define o valor do nó raiz como 100
        // Inicializa os filhos como NULL
        ptrRaiz->noESQ = NULL;
        ptrRaiz->noDIR = NULL;
    }
}

// Função para criar um novo nó da árvore
NO *criarNO() {
    NO *ptrNovoNo = (NO *) malloc(sizeof(NO)); // Aloca memória para um novo nó
    cout << "informe um numero para o novo nó: "; 
    cin >> ptrNovoNo->valor; // Lê o valor digitado pelo usuário
    // Inicializa os filhos como NULL
    ptrNovoNo->noESQ = NULL;
    ptrNovoNo->noDIR = NULL;
    printf("endereço do nó criado = %p\n", ptrNovoNo); // Mostra o endereço de memória do novo nó
    return ptrNovoNo; // Retorna o ponteiro do novo nó
}

// Função para percorrer a árvore em pré-ordem (raiz, esquerda, direita)
void preOrder(NO *ptrUmNo) {
    if (ptrUmNo != NULL) {
        cout << "[PRE-ORDER] Nó: " << ptrUmNo->valor << endl; // Imprime o valor do nó (raiz)
        preOrder(ptrUmNo->noESQ); // Percorre a subárvore esquerda
        preOrder(ptrUmNo->noDIR); // Percorre a subárvore direita
    }
}

// Função para percorrer a árvore em ordem (esquerda, raiz, direita)
void inOrder(NO *ptrUmNo) {
    if (ptrUmNo != NULL) {
        inOrder(ptrUmNo->noESQ); // Percorre a subárvore esquerda
        cout << "[IN-ORDER] Nó: " << ptrUmNo->valor << endl; // Imprime o valor do nó (raiz)
        inOrder(ptrUmNo->noDIR); // Percorre a subárvore direita
    }
}

// Função para percorrer a árvore em pós-ordem (esquerda, direita, raiz)
void posOrder(NO *ptrUmNo) {
    if (ptrUmNo != NULL) {
        posOrder(ptrUmNo->noESQ); // Percorre a subárvore esquerda
        posOrder(ptrUmNo->noDIR); // Percorre a subárvore direita
        cout << "[POS-ORDER] Nó: " << ptrUmNo->valor << endl; // Imprime o valor do nó (raiz)
    }
}

// Função para imprimir a árvore conforme a estratégia escolhida
void imprimirArvore(int estrategia) {
    cout << "\n====== Impressão da Árvore ======" << endl;
    if (estrategia == 1) {
        cout << "Ordem: Pré-Order" << endl;
        preOrder(ptrRaiz);
    } else if (estrategia == 2) {
        cout << "Ordem: Pos-Order" << endl;
        posOrder(ptrRaiz);
    } else {
        cout << "Ordem: In-Order" << endl;
        inOrder(ptrRaiz);
    }
    cout << "=================================\n" << endl;
}

// Função para buscar um valor na árvore binária
NO *buscaNaArvore(int numero, NO *ptrUmNo) {
    if (ptrUmNo != NULL) {
        if (numero == ptrUmNo->valor) { // Se encontrou o valor, retorna o nó
            return ptrUmNo;
        } else if (numero < ptrUmNo->valor) { // Se o valor for menor, busca na esquerda
            return buscaNaArvore(numero, ptrUmNo->noESQ);
        } else if (numero > ptrUmNo->valor) { // Se o valor for maior, busca na direita
            return buscaNaArvore(numero, ptrUmNo->noDIR);
        }
    } else { // Se não encontrou o valor, retorna NULL
        return NULL;
    }
}

// Função principal
int main() {
    cout << "===== Início do Programa =====" << endl;
    criarRAIZ(); // Cria a raiz da árvore com valor 100

    // Criação dos nós filhos
    ptrRaiz->noESQ = criarNO(); // Cria um nó à esquerda da raiz
    ptrRaiz->noDIR = criarNO(); // Cria um nó à direita da raiz

    // Criando mais nós filhos
    ptrRaiz->noESQ->noESQ = criarNO(); // Filho esquerdo do nó esquerdo da raiz
    ptrRaiz->noESQ->noDIR = criarNO(); // Filho direito do nó esquerdo da raiz
    ptrRaiz->noDIR->noDIR = criarNO(); // Filho direito do nó direito da raiz
    ptrRaiz->noDIR->noESQ = criarNO(); // Filho esquerdo do nó direito da raiz

    // Busca por um valor específico na árvore
    NO *noTEMP = buscaNaArvore(110, ptrRaiz); // Procura pelo valor 110 na árvore

    // Verifica se encontrou o valor na árvore
    if (noTEMP == NULL) {
        cout << "\nElemento nao encontrado\n";
    } else {
        cout << "\nValor = " << noTEMP->valor;
        printf("\nEndereço do nó = %p\n", noTEMP);
    }

    // Impressão da árvore em diferentes ordens
    imprimirArvore(1); // Impressão em pré-ordem
    imprimirArvore(2); // Impressão em pós-ordem
    imprimirArvore(3); // Impressão em ordem

    return 0;
}
