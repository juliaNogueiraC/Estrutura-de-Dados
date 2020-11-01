#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(void) {
  TFila *fila = criar_Fila();
  TItem item;
  item.Chave = 10;
  insere_Fila(fila, item);
  item.Chave = 20;
  insere_Fila(fila, item);
  item.Chave = 30;
  insere_Fila(fila, item);
  item.Chave = 40;
  insere_Fila(fila, item);
   TItem *consulta;

   if(insere_Fila(fila, item) == 0){
     printf("Não foi possivel inserir!!");
   }

  consulta_Fila(fila, consulta);
   printf("%d\n", consulta->Chave);
   //remove_Fila(fila);
   consulta_Fila(fila, consulta);
   printf("%d\n", consulta->Chave);
   //remove_Fila(fila);
  printf("Hello World\n");
  return 0;
}