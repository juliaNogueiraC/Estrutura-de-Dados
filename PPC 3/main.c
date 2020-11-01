#include <stdio.h>
#include "lista.h"

 int main(void)
{

  Lista* lista = inicia_lista();
  
  Pessoa exemplo;


	
        exemplo.codigo = 1;
        exemplo.nome  = "peter";
        insere_lista_inicio(lista,exemplo);
        


        //int x = insere_lista_inicio(lista,informacoes.Pessoa);


  

 
	  printf("Tamanho da lista: %d\n\n", tamanho_lista(lista));

    imprime(lista);


	
	return 0;
}