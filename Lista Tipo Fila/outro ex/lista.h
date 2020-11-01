#define MaxTam  1000

typedef struct {
  int Chave;
  /* outros componentes */
} TItem;

typedef struct {
  TItem vItem[MaxTam+1];
  int fim, inicio;
  int  quant;
} TFila;


TFila *criar_Fila(); 
int tamanho_Fila(TFila *fila);
int fila_cheia(TFila *fila);
void libera_Fila(TFila *fila);
int insere_Fila(TFila *fila, TItem item);
int remove_Fila(TFila *fila);
int consulta_Fila(TFila *fila, TItem *item);

