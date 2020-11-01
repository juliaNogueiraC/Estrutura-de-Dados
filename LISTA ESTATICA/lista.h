
#define MAXTAM 1000

typedef struct{
  int matricula;
  float nota1, nota2,nota3;
} TItem;

typedef struct {
  TItem itens[MAXTAM];
  int primeiro, ultimo;
}TLista;

//prototipos das funções
void TLista_Criar(TLista *lista);
int TLista_InsereFinal(TLista *lista, TItem x);
void TLista_Imprime(TLista *lista);
int TLista_Insere(TLista *lista, int posicao, TItem item);
int TLista_Remove(TLista *lista, int posicao);
