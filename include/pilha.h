typedef char itemType;

struct pilha {
  itemType info;
  struct pilha* prox;
};
typedef struct pilha Pilha;

void imprimir(Pilha *p);

Pilha *push(Pilha *p , int valor);

Pilha *pop(Pilha *p);

int palindromo(itemType palavra[], int tamanho, itemType invertida[], int tamanhoInvertida);
