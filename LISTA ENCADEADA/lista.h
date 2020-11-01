typedef struct 
{
	int matricula;
	float nota1, nota2 , nota3;

	
}TItem;


// aponta para TItem
typedef struct no
{
	TItem item;
	struct no *prox;

}Tno;


// aponta para o prim e ult elemento de TItem
typedef struct 
{
  Tno *pPrim;
  Tno *pFim;

}Tlista;



// cabeçalho da função
Tlista* Tlista_Criar();
int Tlista_EhVazia(Tlista *lista);//verifica se a lista esta vazia ou nao
int Tlista_InsereInicio( Tlista *lista, TItem novoItem);
void Tlista_Imprime(Tlista *lista);