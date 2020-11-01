#define MAX 10

typedef struct{
  int senha;
}TItem;

typedef struct{
  TItem v_fila[MAX];
  int inicio;
  int fim;
  int quant;
}TFila;

TFila* criar_fila();
int tamanho_Fila(TFila *fila);
int fila_vazia(TFila *fila);
int insere_Fila(TFila *fila, TItem item);
int remove_Fila(TFila *fila);