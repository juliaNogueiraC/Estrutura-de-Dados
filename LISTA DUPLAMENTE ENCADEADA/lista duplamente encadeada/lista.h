typedef struct{
  int dia;
  int mes;
  int ano;
}Titem;

typedef struct no{
  Titem data;
  struct no *ant;
  struct no *prox;
}Tno;

typedef struct{
  Tno *primeiro;
  int tamanho;
}TListaDupla;

TListaDupla *criarLista();
int inserirListaInicio(TListaDupla *lista, Titem novaData);
int inserirListaFim(TListaDupla *lista, Titem novaData);
void imprimirLista(TListaDupla *lista);
int removeListaInicio(TListaDupla *lista);
int removeListaFim(TListaDupla *lista);