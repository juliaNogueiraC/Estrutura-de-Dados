#include <stdio.h>
#include "lista.h"

int main(void) {
  TLista *lista;
  TItem item;
  lista = TLista_Criar();
  if(TLista_EhVazia(lista))
    printf("Lista Vazia!!!\n\n");

  item.chave = 10;
  TLista_InsereFim(item, lista);  
  item.chave = 11;
  TLista_InsereFim(item, lista);  
  item.chave = 12;
  TLista_InsereFim(item, lista);  
  item.chave = 13;
  TLista_InsereFim(item, lista);  
  printf("Hello World\n");

  printf("Tamanho da lista: %d\n\n", TLista_Tamanho(lista));

  TLista_Imprime(lista);
  return 0;
}