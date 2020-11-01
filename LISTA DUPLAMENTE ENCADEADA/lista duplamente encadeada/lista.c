#include <stdlib.h>
#include <stdio.h>
#include "listaDupla.h"

TListaDupla *criarLista(){
  TListaDupla *novaLista = (TListaDupla*) malloc(sizeof(TListaDupla));
  if(novaLista != NULL){
    novaLista->primeiro = NULL;
    novaLista->tamanho = 0; 
  } 
  return novaLista;
}

int inserirListaInicio(TListaDupla *lista, Titem novaData){
  if(lista == NULL){
    return 0;
  }
  Tno *novo = (Tno*) malloc(sizeof(Tno));
  novo->data = novaData;
  if(lista->primeiro == NULL){ //SE LISTA É VAZIA
    lista->primeiro = novo;
    novo->ant = NULL;
    novo->prox = NULL;
  }else{ // se já estiver elemento
    novo->prox = lista->primeiro;
    lista->primeiro->ant = novo;
    lista->primeiro = novo;
    novo->ant = NULL;
  }
  return 1;
}


int inserirListaFim(TListaDupla *lista, Titem novaData){
  if(lista == NULL){
    return 0;
  }
  Tno *novoNo = (Tno*) malloc(sizeof(Tno));
  novoNo->data = novaData;

  if(lista->primeiro == NULL){
    novoNo->prox = NULL;
    novoNo->ant = NULL;
    lista->primeiro = novoNo;
  }else{
    Tno *aux = lista->primeiro;
    while(aux->prox != NULL){
      aux = aux->prox;
    }
    aux->prox = novoNo;
    novoNo->ant = aux;
    novoNo->prox = NULL;
  }
  return 1;

}

void imprimirLista(TListaDupla *lista){
  Tno *aux = lista->primeiro;
  while(aux != NULL){
    printf("%d/%d/%d\n\n", aux->data.dia, aux->data.mes, aux->data.ano);
    aux = aux->prox;
  }
}

int removeListaInicio(TListaDupla *lista){
  if(lista == NULL){
    return 0;
  }
  if(lista->primeiro == NULL){//VERIFICAR SE A LISTA É VAZIA
    return 0;
  }

  Tno *remove = lista->primeiro;
  lista->primeiro = remove->prox;
  if(remove->prox != NULL){
    remove->prox->ant = NULL;
  }
  //free(remove);
  lista->tamanho--;
  return 1;

}

int removeListaFim(TListaDupla *lista){
    if(lista == NULL){
    return 0;
  }
  if(lista->primeiro == NULL){//VERIFICAR SE A LISTA É VAZIA
    return 0;
  }

  Tno *remove = lista->primeiro;
  while(remove->prox != NULL){
    remove = remove->prox;
  }
  if(remove->ant == NULL){//lista tem apenas um elemnto
    lista->primeiro = remove->prox; //NULL
  }else{
    remove->ant->prox = remove->prox;//NULL;
  }
  free(remove);
  return 1;
}