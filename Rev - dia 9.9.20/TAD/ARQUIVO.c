// aqui ele implementa as funcoes
#include "ARQUIVO.h"
#include <stdio.h>

livro inciar( int id, int quantTot ,int quantDis , bool cativo , char categoria){

livro l;
.id = id;
l.quantTot = quantTot;
l.quantDis = quantDis;
l.cativo= cativo;
l.categoria = categoria;

 return l;


}


bool alugar(livro *l){

/*
	// quando é uma struct ,usa-se seta ,nao ponto 
	// trbalha com ponteiro para estrutura

  if (l.quantDis > 0 && !l.cativo)
  {
  	l.quantDis--;
  	return true;

  }else{
  	 return false;
  }
  */
if (l->quantDis > 0 && !l->cativo)
  {
  	l->quantDis--;
  	return true;

  }else{
  	 return false;


}

// aqui ele usa o ponto pq nao trbalha com ponteiro para estrutura .

void imprime(livro l){
	printf("livro %d:  " l.id);
	printf(" quant disponivel / tot : %d/%d categoria: %c ", l.quantDis , l.quantTot , l.categoria);


if (l.cativo)
{
	printf("CATIVO\n");

}else{
	printf("nao é cativo\n");
}


}
