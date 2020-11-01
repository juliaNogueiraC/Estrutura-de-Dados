#include <stdio.h>
#include "listaCircular.h"

int main(void) {
  
  TLista *lista1 = criar();

  Titem aluno1;
  aluno1.matricula = 10;
  aluno1.nota1 = 9.0;
  aluno1.nota2 = 8.0;

  //inserirInicio(lista1, aluno1);
  inserirFinal(lista1, aluno1);

  Titem aluno2;
  aluno2.matricula = 100;
  aluno2.nota1 = 9.0;
  aluno2.nota2 = 8.0;
  //inserirInicio(lista1, aluno2);
  inserirFinal(lista1, aluno2);
  
  Titem aluno3;
  aluno3.matricula = 1000;
  aluno3.nota1 = 9.0;
  aluno3.nota2 = 8.0;

  //inserirInicio(lista1, aluno3);
  inserirFinal(lista1, aluno3);

  imprimir(lista1);

  removeFim(lista1);

  imprimir(lista1);

  printf("Hello World\n");
  return 0;
}