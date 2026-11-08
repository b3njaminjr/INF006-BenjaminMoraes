#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    No *pilha = criarPilha();
    int opcao, valor;

    do{
        printf("\n\t0 - Sair\n\t1 - Empilhar\n\t2 - Desempilhar\n\t3 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("\tSaindo...\n");
            break;
        case 1:
            printf("\tDigite um valor a ser empilhado: ");
            scanf("%d", &valor);
            empilhar(&pilha, valor);
            break;
        case 2:
            No *no = desempilhar(&pilha);
            if(no){
                printf("\tFoi desempilhado o valor: %d\n", no->valor);
                free(no);
            }
            else
                printf("\tPilha vazia...\n");
            break;
        case 3:
            printf("\n\tTopo: ");
            imprimir(pilha);
            printf("\n");
            break;
        default:
            printf("\tOpcao invalida!");
        }
    }while(opcao != 0);
    return 0;
}
