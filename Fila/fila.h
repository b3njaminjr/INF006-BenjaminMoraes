#ifndef FILA_H
#define FILA_H

typedef struct no {
    int valor;
    struct no *proximo;
} No;

typedef struct {
    No *inicio, *fim;
} Fila;

Fila* criarFila();
void enfileirar(Fila *fila, int val);
No* atender(Fila *f);
void imprimirFila(No* inicio);

#endif // FILA_H_INCLUDED
