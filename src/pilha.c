#include "../include/pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Imprimindo a Pilha
void imprimir(Pilha *p) {
  printf("\nPilha: \n");

  Pilha *aux = p;

  while (aux != NULL) {
    printf("%d ", aux->info);

    aux = aux->prox;
  }
}

// Inserindo elemento
Pilha* push(Pilha *p, int valor) {
  Pilha *aux = (Pilha *)malloc(sizeof(Pilha));

  if (aux == NULL) {
    printf("\nPilha vazia");

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
Pilha* popSuperior(Pilha *p, int cod, int vol) {
  if (p != NULL) {
    Pilha *aux = p;

    p = aux->prox;

    free(aux);
  }
  else {
    printf("\nPilha vazia");
  }

  return p;
}

int retonarTamanho(Pilha *p, int contador) {
  Pilha *aux = p;
  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;
  }

  printf("\nQuantidade de elementos == %d", contador);

  return 0;
}
