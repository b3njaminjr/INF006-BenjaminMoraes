#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

No* criarPilha() {
    return NULL;
}

// push
void empilhar(No **topo, int valor) {
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = valor;
        novo->proximo = *topo;
        *topo = novo;
    }
    else
        printf("\n\tErro ao alocar memoria...\n");
}

// pop
No* desempilhar(No **topo) {
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }
    return NULL;
}

void imprimir(No *topo) {
    if (topo){
        printf("\n\t%d ", topo->valor);
        imprimir(topo->proximo);
    }
}
