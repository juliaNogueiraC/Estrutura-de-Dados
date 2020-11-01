#include <stdlib.h>
#include "Fila.h"


TFila* criar_fila(){
  TFila *minhaFila = (TFila*) malloc(sizeof(TFila));
  if(minhaFila == NULL){
    return NULL;
  }
  minhaFila->inicio = 0;
  minhaFila->quant = 0;
  minhaFila->fim = 0;
  return minhaFila;
}


int tamanho_Fila(TFila *fila){
  if(fila == NULL){
    return 0;
  }
  return fila->quant;
}

int fila_cheia(TFila *fila){
  if(fila->quant < MAX){
    return 0;
  }else{
    return 1;
  }
}

int fila_vazia(TFila *fila){
  if(fila->quant == 0){
    return 1;
  }else{
    return 0;
  }
}



int insere_Fila(TFila *fila, TItem item){
  if(fila_cheia(fila) == 1){
    return 0;
  }
  fila->v_fila[fila->fim] = item;
  fila->quant++;

  if(fila->fim+1 < MAX){
    fila->fim++;
  }else{
    fila->fim = 0;
  }
  return 1;
}

int remove_Fila(TFila *fila){
  if(fila_vazia(fila) == 1){
    return 0;
  }
  fila->v_fila[fila->inicio] = item;
  fila->quant--;
  
  if(fila->inicio+1 < MAX){
    fila->inicio++;
  }else{
    fila->inicio = 0;
  }
  return 1;
}