#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int troca(lista *li, Apont *apontador)
{
 struct no *ant;
 struct no *prox = apontador->prox;

 if(prox == NULL) { 

 	return 0; 
 }

 ant= li->prim;


 while(ant->prox != apontador) {
          ant = ant->prox;
 }
 
 ant->prox = prox;
 P->prox = prox->prox;
 prox->prox = apontador;
   
   
 if(li->ult == prox) { 
 	li->ult = ant; 
 }
 return 1;
}