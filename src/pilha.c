#include "./include/pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int palindromo(itemType palavra[], int tamanho, itemType invertida[], int tamanhoInvertida) {
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  setbuf(stdin, NULL); // limpa o buffer

  tamanho = strlen(palavra);

  int i;

  //Inverter a palavra copiada
  for (int i = 0; i < tamanho / 2; i++) { //só irá até o meio
    if (palavra[i] != palavra[tamanho - i - 1]) {
      printf("\nA palavra inserida nao é um palindromo.");

      return 1;
    }
    else {
      printf("\nA palavra inserida é um palindromo.");

      return 0;
    }
  }

  // Caso nenhuma das condições sejam aceitas
  return -1;
}

// Imprimindo a Pilha
void imprimir(Pilha *p) {
  printf("\nPilha: \n");

  Pilha *aux = p;

  while (aux != NULL) {
    printf("%d\n", aux->info);

    aux = aux->prox;
  }
}

// Inserindo elemento
Pilha* push(Pilha *p, int valor) {
  Pilha *aux = (Pilha *)malloc(sizeof(Pilha));

  if (aux == NULL) {
    printf("\nLista vazia");

    return aux;
  }
  else {
    aux->info = valor;
    aux->prox = p;

    printf("\nElemento adicionado!");

    return aux;
  }
}

// Removendo elemento
Pilha* pop(Pilha *p) {
  if (p != NULL) {
    Pilha *aux = p;

    p = aux->prox;

    free(aux);

    printf("\nElemento removido!");
  }
  else {
    printf("\nPilha vazia");
  }

  return p;
}
