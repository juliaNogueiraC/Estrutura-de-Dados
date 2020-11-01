#include <"lista.h">
#include <stdlib.h>

Tlista* Tlista_Criar(){
 /** malloc : reserva o  espaço de uma variavel
de acordo com o tamanho em bytes da variavel 

exemplo :
malloc(60)
ele vai alocar um espaço de 60 bytes
reservados para o conteudo .
o tamanho vai depender do tipo da inf

malloc(sizeof(Tlista));
sizeof: retorna o tamanho da lista ,ou do valor ali no ()
**/

Tlista *novaLista = (Tlista*)  malloc(sizeof(Tlista));
/** (Tlista*) : tipo da lista

Tlista *novaLista = (Tlista*)  malloc(sizeof(Tlista));
 é como se fosse :
int a = 4
int *A = (int*) malloc(sizeof(int));
**/

if(novaLista == NULL){
	// ele vai ver se esta cheia
  print("erro na alocação");
  return NULL;
}//else 

novaLista->pPrim = NULL;
novaLista->pFim = NULL;
return novaLista;
} 






int Tlista_EhVazia(Tlista *lista){
  
if (lista-> pPtim ==NULL){
	return 1;
}else{
	return 0;
}
}



int Tlista_InsereInicio( Tlista *lista, TItem novoItem){
 // Tlista guarda prim e fim se nao for null , entao ele precisa conferir 
 if(lista == NULL){
 	 return 0;

 }
 Tno *novoNo =(Tno*) malloc(sizeof(Tno));
 if (novoNo == NULL){
 	return 0;

 } // else 
 novoNo->item = novoItem;
 if(Tlista_EhVazia(lista)){
 	// verifica se a lista esta vazia

 	lista->pPrim = novoNo;
 	lista->pFim = novoNo;
 	// ou lista->pFim = lista->pPrim


 }else{
 	// se a lista nao for vazia:

 	novoNo->prox = lista->pPrim;
 	lista->pPrim = novoNo;

 }

}


void Tlista_Imprime(Tlista *lista){

Tno *noAux = lista->pPrim;

while(noAux != NULL){
      printf("%d\n", noAux->item.matricula);
      noAux = noAux->prox;
    }


}