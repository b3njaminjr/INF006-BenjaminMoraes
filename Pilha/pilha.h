#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct no {
    int valor;
    struct no *proximo;
} No;

No* criarPilha();
void empilhar(No **topo, int valor);
No* desempilhar(No **topo);
void imprimir(No *topo);

#endif // PILHA_H_INCLUDED
