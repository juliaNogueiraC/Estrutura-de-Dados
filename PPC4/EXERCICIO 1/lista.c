
#include <stdlib.h>
#include <stdio.h>
#include "lista.h"



Lista *inicia_lista(){
  Lista *novaLista = (Lista*) malloc(sizeof(Lista));


  if(novaLista != NULL)// verifica se é nulo
  {
    *novaLista->primeiro = NULL;
  } 

  return novaLista;
}




int tamanho(Lista *novaLista){
	if(novaLista == NULL){
		return 0; // verifica se é vazia
	}

	int contador=0;
	Tno* no =*novaLista;

	while(no != NULL){
		cont++;
		no = no->prox;


	}
	return cont;
}



int eh_vazia(Lista* novaLista){
	
	if(*novaLista == NULL){
		return 1;
	}
                 
}return 0;

elemnto=No
elem=Tno


int insere(Lista *novaLista,struct dados usuario){
  if(novaLista == NULL){
    return 0;
  }


  Tno* no =(Tno*) malloc(sizeof(Tno));

  if(no == NULL){
  	return 0;
  }
  
no->informacoes = usuario;
no->prox = (*novaLista);
no->ant = NULL;

if(*novaLista != NULL){
	(*novaLista)->ant = no;

}else{
	*novaLista = no;
	return 1;
}




void imprime(Lista *novaLista){
  Tno *aux = novaLista->primeiro;

  while(aux != NULL){
    printf("nome:%s\n ,codigo:%d\n\n", aux->usuario.nome, aux->usuario.codigo);
    aux = aux->prox;
  }
}






int remove(TListaDupla *lista){
  if(lista == NULL){
    return 0;
  }
  
  Tno *no = *novaLista;
  *novaLista = no->prox;

  if(no->prox != NULL){
  	no->prox->ant = NULL;


  }
  free(no)
  return 1;

}



