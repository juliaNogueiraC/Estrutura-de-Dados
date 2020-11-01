#include <stdio.h>
#include <stdlib.h>
#define INICIO 0
#define MAXTAM 1000

typedef struct {
 int chave;
 /* outros componentes */
} TItem;

typedef struct no {
 struct no *prox;
 TItem item; 
} Tno;

typedef struct{
  struct no *pPrimeiro, *pUltimo;
} TLista;

/* procedimentos e funcoes da TAD */
TLista* TLista_Criar();
int TLista_EhVazia(TLista *pLista);
int TLista_InsereInicio(TItem x, TLista *pLista);
int TLista_Tamanho(TLista *pLista);
void TLista_Imprime(TLista *pLista);
int Tlista_Tamanho(TLista *pLista);
int TLista_InsereFim(TItem x, TLista *pLista);