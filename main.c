#include "./include/pilha.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 1 - Adapte de modo a implementar a pilha com listas encadeadas.
 * 2 - Utilizando a pilha criada, faça uma função que leia uma string e retorne 1,
 * se a string for um palíndromo, 0, caso contrário.
 * Exemplos de palavras palíndromos: ovo, subinoonibus, ana
*/

int main(void) {
  Pilha *inicio = NULL;

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
      case 4:
        palindromo(palavra, qtd1, invertida, qtd2);
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
