#include "Fila.h"
#include <stdlib.h>
#include <stdio.h>

int tamanho_Fila(TFila *fila){
  if(fila == NULL)
    return -1; 
  return fila->quant;
}

int fila_cheia(TFila *fila){
  if(fila == NULL){
    return -1;
 }
    if(fila->quant == MaxTam){
      return 1;
    }else{
      return 0;
    }
}

int fila_vazia(TFila *fila){
  if(fila == NULL)
    return -1;
    if(fila->quant == 0){
      return 1;
    }else{
      return 0;
    }
}

TFila *criar_Fila(){
  TFila *fila = (TFila*) malloc(sizeof(TFila));
  if(fila != NULL){
    fila->quant = 0 ;
    fila->inicio = 0 ;
    fila->fim = 0 ;
  }
  return fila;
}

void libera_Fila(TFila *fila){
  free(fila);
}

int insere_Fila(TFila *fila, TItem item){
  if(fila == NULL){
    return 0;
  }
  printf("%d", fila->fim);
  
  if(fila_cheia(fila) == 1){
    return 0;
  } 
  
  fila->vItem[fila->fim] = item;
  
  fila->fim = (fila->fim+1) % MaxTam;
  
  fila->quant = fila->quant+1;
   
  return 1; 
}

int remove_Fila(TFila *fila){
  if(fila == NULL){
    return 0;
  }
  if(fila_vazia(fila) == 1){
    return 0;
  }
  fila->inicio = (fila->inicio+1)%MaxTam;
  fila->quant--;
  printf("%d", fila->inicio);
  return 1;
}

int consulta_Fila(TFila *fila, TItem *item){
  if(fila == NULL){
    return 0;
  }
  if(fila_vazia(fila) == 1){
    return 0;
  }
  *item = fila->vItem[fila->inicio];
  return 1;
}