#include "lista.h" 

TLista* TLista_Criar() {
  TLista* novaLista = (TLista*) malloc(sizeof(TLista));
  if(novaLista != NULL){
    novaLista->pPrimeiro = NULL;
    novaLista->pUltimo = NULL;
  }
  return novaLista;
}




int TLista_EhVazia(TLista *pLista) {
 //return (pLista->pPrimeiro == NULL);
 if(pLista->pPrimeiro == NULL){
   return 1;
 }else{
   return 0;
 }
}




int TLista_InsereInicio(TItem x, TLista *pLista) {
  if(pLista == NULL)
    return 0;

  Tno *novoNo = (Tno*) malloc(sizeof(Tno));

  if(novoNo == NULL)
    return 0;
  novoNo->item = x;
  novoNo->prox = NULL;


  if(pLista->pPrimeiro == NULL){
    pLista->pPrimeiro = novoNo;
    pLista->pUltimo = pLista->pPrimeiro;
  }else{
    novoNo->prox = pLista->pPrimeiro;
    pLista->pPrimeiro = novoNo;
  }
  return 1;
}





int TLista_InsereFim(TItem x, TLista *pLista) {
  if(pLista == NULL){
    return 0;
  }


  Tno *novoNo = (Tno*) malloc(sizeof(Tno));

  if(novoNo == NULL){
    return 0;
  }

  //novoNo->item = x;

  //novoNo->prox = NULL;

  novoNo->item = novoItem;
  
  if(TLista_EhVazia(lista){

    //pLista->pPrimeiro = novoNo;
    //pLista->pUltimo = pLista->pPrimeiro;

 lista->pPrim=novoNo;
 lista->pFim = lista->pPrim;
 novoNo->prox = NULL;

  }else{
    Lista->pfim->prox = novoNo;  
   lista->pFim = novoNo ;
  }
  return 1;

}

  /*  ou:





  */






void TLista_Imprime(TLista *pLista) {
 Tno *noAux = pLista->pPrimeiro;
    while(noAux != NULL){
      printf("%d\n", noAux->item.chave);
      noAux = noAux->prox;
    }
}

/*  ou:

void TLista_Imprime(TLista *pLista) {
Tno *noAux = pLista->pPrimeiro;
    while(noAux != NULL){
  
      noAux = noAux->prox;
      }

      fim->prox = novo;
      novo->prox = NULL;
      fim = novo;
}
*/



int TLista_Tamanho(TLista *pLista) {
  int cont = 0;
  Tno *noAux = pLista->pPrimeiro;
    while(noAux != NULL){
      cont++;
      noAux = noAux->prox;
    }
    return cont;
 
}

/*
int TLista_Retira(TLista *pLista, int p, TItem *pX) {
  // remoção!



  
}



int Tlista_Tamanho(TLista *pLista){
  
}*/







/* inserção num lugar desejado :

1. usar o while para correr pela lista 
2.mas do que ele definir como nulo ,ele informa a posição 






*/