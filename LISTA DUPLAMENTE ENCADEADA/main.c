#include <stdio.h>
#include "listaDupla.h"

int main(void) {
  TListaDupla *novaLista = criarLista();
  
  Titem novaData;
  novaData.ano = 2020;
  novaData.dia = 07;
  novaData.mes = 10;

  inserirListaInicio(novaLista, novaData);

  novaData.ano = 2020;
  novaData.dia = 8;
  novaData.mes = 10;

  inserirListaInicio(novaLista, novaData);

  novaData.ano = 2020;
  novaData.dia = 9;
  novaData.mes = 10;

  inserirListaInicio(novaLista, novaData);

  imprimirLista(novaLista);

  printf("----------------------------\n");
  removeListaFim(novaLista);
  //removeListaFim(novaLista);
  //removeListaInicio(novaLista);
  imprimirLista(novaLista);
  printf("Hello World\n");
  return 0;
}