#include <stdio.h>
#include "Jogador.h"

void atribuir(char nome,int jogos ,int gols, int assitencias) {
	 printf(" nome do jogador :" );
     scan("%s\n",&jogador.nome);

     printf(" qtd de jogos do jogador :" );
     scan("%d\n",&jogador.jogos);

     printf("qtd de gols do jogador :" );
     scan("%d\n",&jogador.gols);

     printf(" qtd de assitencias do jogador :" );
     scan("%d\n",&jogador.assitencias);

}

void imprime(Jogador *jogadorEx){
	
     printf(" o jogador %s realizou: %d jogos , %d gols e %d assitencias.", jogadorEx->nome, jogadorEx->jogos, jogadorEx->gols,jogadorEx->assitencias);


}


void EhBom(int gols){
	if ( jogadorEx->gols >= 15)
	{
          printf("ele é bom!" );
	}else {

		printf("ele não é bom!" );
	}
}