typedef struct{
  int matricula;
  float nota1;
  float nota2;
}Titem;

typedef struct no{
  Titem aluno;//informação
  struct no *prox;
}Tno;

typedef struct{
  Tno *prim;
  int tamanho;
}TLista;

TLista *criar();
int inserirInicio(TLista *lista, Titem aluno);
int inserirFinal(TLista *lista, Titem aluno);
void imprimir(TLista *lista);
int removeInicio(TLista *lista);
int removeFim(TLista *lista);