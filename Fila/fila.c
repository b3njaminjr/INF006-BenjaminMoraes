#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criarFila() {
    Fila *fila = malloc(sizeof(Fila));
	if(fila){
		fila->inicio = NULL;
		fila->fim = NULL;
	}
	else
		printf("\n\tErro ao alocar memoria...");
    return fila;
}

void enfileirar(Fila *fila, int val) {
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = val;
        novo->proximo = NULL;
        if(fila->fim){
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
        else{
            fila->inicio = novo;
            fila->fim = novo;
        }
    }
    else
        printf("\n\tErro ao alocar memoria...\n");
}

No* atender(Fila *f) {
    No *remover = f->inicio;
    if(remover)
        f->inicio = remover->proximo;
    return remover;
}

void imprimirFila(No* inicio){
    if(inicio){
        printf("%d ", inicio->valor);
        imprimirFila(inicio->proximo);
    }
}
