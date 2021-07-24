#include "./include/pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Pilha *inicio = NULL;
  int op, numero;

  do {
    printf("\n| 1 - para inserir um elemento\n");
    printf("| 2 - para imprimir os elementos\n");
    printf("| 3 - para remover um elemento\n");
    printf("| 4 - para verificar se é palindromo\n");
    printf("| 0 - para sair\n");
    scanf("%d", &op);

    switch(op) {
      case 1:
        printf("Informe um valor: ");
        scanf("%d", &numero);

        inicio = push(inicio, numero);
        break;
      case 2:
        imprimir(inicio);
        break;
      case 3:
        inicio = pop(inicio);
        break;
      case 0:
        printf("Fim das operações\n");
        break;
      default:
        if (op != 0) {
          printf("Opção inválida\n");
        }
        break;
    }
  } while(op != 0);

  return 0;
}
