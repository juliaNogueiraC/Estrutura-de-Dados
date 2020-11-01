#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
 struct no *prim;
 struct no *ult;
}lista;

typedef struct no {
 struct no *ant;
 struct no *prox;

} Apont;


 int troca(lista *li, Apont *apontador);