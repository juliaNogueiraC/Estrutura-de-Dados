#include <stdio.h>
#include "lista.h"

int main(void) {
  
  TLista lista;
  TItem x;
  x.matricula = 10; //0
  
  TLista_Criar(&lista);
  TLista_InsereFinal(&lista, x);
  
  x.matricula = 12;//1
  TLista_InsereFinal(&lista, x);

  x.matricula = 13;//2
  TLista_InsereFinal(&lista, x);
  
  x.matricula = 14;//2
  TLista_InsereFinal(&lista, x);

  TLista_Imprime(&lista);

  /*TLista_Remove(&lista, 2);
  printf("\n\nLista após remoção do elemento da pos 1\n\n");
  TLista_Imprime(&lista);*/
  
  printf("\n\n");
  x.matricula = 20;//1
  TLista_Insere(&lista, 2, x);
  TLista_Imprime(&lista);

  return 0;
}