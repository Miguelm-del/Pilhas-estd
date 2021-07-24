typedef char itemType;

struct pilha {
  itemType info;
  struct pilha* prox;
};
typedef struct pilha Pilha;

struct volume {
  int codigo;
  float peso;
  char origem[100];
};
typedef struct volume Volume;

void imprimir(Pilha *p);

Pilha *push(Pilha *p , int valor);

Pilha *pop(Pilha *p, int cod, int vol);

int retonarTamanho(Pilha *p, int contador);
