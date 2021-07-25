// Alagoas
struct pilha {
  int info;
  struct pilha* prox;
};
typedef struct pilha Pilha;

// Fora do estado
struct pilha2 {
  int info;
  struct pilha2* prox;
};
typedef struct pilha2 Pilha2;

// Fora do Brasil
struct pilha3 {
  int info;
  struct pilha3* prox;
};
typedef struct pilha3 Pilha3;

struct volume {
  int codigo;
  float peso;
  char origem[100];
};
typedef struct volume Volume;

void imprimir(Pilha *p);

Pilha *push(Pilha *p , int valor);

Pilha *popSuperior(Pilha *p, int cod, int vol);

int retonarTamanho(Pilha *p, int contador);
