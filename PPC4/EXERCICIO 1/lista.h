#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[];
  int codigo;

}dados;

typedef struct EL* Lista;

typedef struct EL{
  dados usuario;
  struct EL *ant;
  struct EL *prox;
}Tno;





Lista* inicia_lista();
int eh_vazia(Lista* novaLista);
int insere(Lista* lista, struct dados usuario);
int remove(Lista* lista);
void Imprime(Lista *lista);
int tamanho(Lista *novaLista);

/* nao consegui:
void media();
void iguais();
int removeTudo();
int remove_Maior();
void sao_iguais();
*/




 




