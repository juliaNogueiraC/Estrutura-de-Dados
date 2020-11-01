

#include <stdio.h>
#include <stdlib.h>


struct  Pessoa
{
	
	char nome[];
	int codigo;
	

};

typedef struct Elemento* Lista;


typedef struct Elemento
{
	 struct Pessoa informacoes;
	 struct elemento *prox;

}el;



Lista *lista; // ponteiro para ponteiro


// defini as funções :
Lista* inicia_lista();
int lista_vazia(Lista* lista);
int insere_lista_inicio(Lista* lista, struct Pessoa exemplo);
int insere_lista_final (Lista* lista,struct Pessoa exemplo);
int insere_DarPosicao(Lista* lista, struct Pessoa exemplo);
int remove_inicio(Lista* lista);
int remove_final(Lista* lista);
void Imprime(Lista *lista);
int remove_DarPosicao(Lista* lista, int codigo);
int tamanho_lista(Lista* lista);
int Inverter_lista(Lista* lista);
int retorna_impar(Lista* lista);

