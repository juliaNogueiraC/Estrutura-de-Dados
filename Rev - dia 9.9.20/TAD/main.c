#include <stdio.h>
#include "ARQUIVO.h"

int main(int argc, char const *argv[])
{
	livro meuLivro;
    
    meuLivro = inciar (1,5,5, false ,'A');

    imprime(meuLivro);

    
  // ponteiro 
     alugar(&meuLivro);


	return 0;
}