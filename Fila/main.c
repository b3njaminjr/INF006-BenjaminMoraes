#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila *fila = criarFila();
    int opcao, valor;

    do{
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("\tSaindo...\n");
            break;
        case 1:
            printf("\tDigite um valor para inserir: ");
            scanf("%d", &valor);
            enfileirar(fila, valor);
            break;
        case 2:
            No *no = atender(fila);
            if(no){
                printf("\tFoi removido o valor: %d\n", no->valor);
                free(no);
            }
            else
                printf("\tFila vazia...\n");
            break;
        case 3:
            printf("\n\tFila: ");
            imprimirFila(fila->inicio);
            printf("\n");
            break;
        default:
            printf("\tOpcao invalida!");
        }
    }while(opcao != 0);
    return 0;
}
