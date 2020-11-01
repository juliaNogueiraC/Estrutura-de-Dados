#include <stdlib.h>
#include <stdio.h>
#include "listaCircular.h"

TLista *criar(){
  TLista *nova = (TLista*) malloc(sizeof(TLista));
  if(nova != NULL){
    nova->prim = NULL;
    nova->tamanho = 0;
  }
  return nova;
}

int inserirInicio(TLista *lista, Titem novoAluno){
  if(lista == NULL){
    return 0;
  }
  Tno *novoNo = (Tno*) malloc(sizeof(Tno));
  novoNo->aluno = novoAluno;
  if(lista->prim == NULL){
    lista->prim = novoNo;
    lista->tamanho++;
    novoNo->prox = novoNo;
  }else{
    Tno *aux = lista->prim;
    while(aux->prox != lista->prim){
      aux = aux->prox;
    }
    aux->prox = novoNo;
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
  }

  return 1;
}

void imprimir(TLista *lista){
  Tno *aux = lista->prim;
  int i = 1;

  if(lista->prim != NULL){
    do{
        printf("------Aluno %d -----\n\n", i);
        printf("Maticula: %d\n", aux->aluno.matricula);
        printf("nota 1: %f\n", aux->aluno.nota1);
        printf("nota 2: %f\n", aux->aluno.nota2);
        i++;
        aux = aux->prox;
    }while(aux != lista->prim);
  }

}

int inserirFinal(TLista *lista, Titem novoAluno){
  if(lista == NULL){
    return 0;
  }
  Tno *novoNo = (Tno*) malloc(sizeof(Tno));
  novoNo->aluno = novoAluno;
  if(lista->prim == NULL){
    lista->prim = novoNo;
    lista->tamanho++;
    novoNo->prox = novoNo;
  }else{
    Tno *aux = lista->prim;
    while(aux->prox != lista->prim){
      aux = aux->prox;
    }
    aux->prox = novoNo;
    novoNo->prox = lista->prim;
  }

  return 1;
}

int removeInicio(TLista *lista){

  if(lista->prim == NULL){
    return 0;
  }

  if(lista->prim->prox == lista->prim){
    free(lista->prim);
    lista->prim = NULL;
  }

  Tno *aux = lista->prim;
  while(aux->prox != lista->prim){
    aux = aux->prox;
  }
  aux->prox = lista->prim->prox;
  Tno *remove = lista->prim;
  lista->prim = lista->prim->prox;
  free(remove);
  return 1;

}

int removeFim(TLista *lista){

  if(lista->prim == NULL){
    return 0;
  }

  if(lista->prim->prox == lista->prim){
    free(lista->prim);
    lista->prim = NULL;
  }

  Tno *ant, *atual = lista->prim;
  while(atual->prox != lista->prim){
    ant = atual;
    atual = atual->prox;
  }
  ant->prox = atual->prox;
  free(atual);
  return 1;


}