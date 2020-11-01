// cada elemento é tratradi como um ´ponteiro 
// nao mvimenta os elementos em operações de inserção e remoção
// necessidade de percorrer a lista para acessar um elemento 
// defdinir protoipo dad funcao
// os dados 
// o ponteiro "lista"
#include <stdio.h>
#include <stdlib.h>


struct  aluno
{
	int matricula;
	char nome[30];
	floar n1,n2,n3;

};

typedef struct elemento* Lista;


struct elemento
{
	 struct aluno dados;
	 struct elemento *prox;

};

typedef struct  elemento elem;


lista *li; // ponteiro para ponteiro

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final (Lista* li,struct aluno al);
int insere_Ordenada(Lista* li, struct aluno al);
