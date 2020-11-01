#include "lista.h" 

Lista* inicia_lista(){
	Lista *lista = (Lista*) malloc(sizeof(lista)); // aloca memomoria

	if(lista != NULL){
		*lista = NULL;

	}else{
  return lista;

	}
	
}




int lista_vazia(Lista *lista){
	/**if(lista == NULL){  
		return 1;
	}**/


	if(*lista == NULL){

		return 1;
	}else{
return 0;
	}
	

}







int insere_lista_inicio(Lista *lista, struct Pessoa exemplo)
{
	if(lista ==NULL){
		 return 0; // verifica se a lista é valida ,se existe

	}

	el *no =(el*) malloc(sizeof(el));// cria o no 

	if(no == NULL){
		 return 0;//aloca mememoria para o novo no
	}

	no->informacoes = exemplo;
	no->prox = (*lista); // meio que "afasta" o prim elemento pra inserir o novo no
	*lista = no; //insere o novo no no lugar do prim ,o prim ta no segundo agora 

	return 1;





	}







int insere_lista_final (Lista* lista,struct Pessoa exemplo)
{
	
if (lista == NULL){
	return 0; // ve se  alista é valida 

} 


el* no =(el*) malloc(sizeof(el)); // aloca espaço de memoria

if(no == NULL){
	return 0;
}


no->informacoes = exemplo;
no->prox = NULL;// como ele quer o ult ,ele informa que o prox elem é o null



// inserção ocorre aqui !
if((*lista) == NULL){
	//lista vazia: insere inicio 
	*lista = no;

}else{
	el *aux = *lista; // aqui ele vai buscar onde inserir 
	while(aux->prox != NULL){
		aux = aux->prox;

	}
	// insere depois do aux 
}    aux->prox = no; 
/** quando ele sai do loop ,ou seja 
 quando ele achar o null, ele insere no final 
**/
}





int insere_DarPosicao(Lista* lista, struct Pessoa exemplo){


}






int remove_inicio(Lista* lista){
	if (lista == NULL) return 0;

	if((*lista) ==NULL) return 0;//lista vazia

	el *no/** elemnto auxiliar**/ = *lista; //aponta pro inicio da lista
	*lista = no->prox; //incio da lista aponta pro prox elemnto
	free(no);//libera o no

	return 1;
}






int remove_final(Lista* lista){
	if (lista == NULL) {
		return 0;
	}

	if((*lista) ==NULL){
		return 0;//lista vazia

	} 

el *anterior , *no /** cria dois aux **/= *li;

while(no->prox != NULL){
	anterior = no;
	no = no->prox;
	// o anterior recebe o no ,e o no recebe o elemento seguinte 

}

if(no == (*lista)) // ve se o no esta no inicio da lista ,se sim ele remove o prim

  
 *lista = no->prox;


else
	// se nao for o inicio da lista o anteiror aponta para o no 
	anterior->prox = no->prox;

free(no); //libera o no 

return 1;

}






void Imprime(Lista *lista){

no *noAux = lista->*lista;

while(noAux != NULL){
      printf("%d\n", noAux->exemplo.codigo);
      printf("%s\n", noAux->exemplo.nome);
      noAux = noAux->lista;
    }


}





int remove_DarPosicao(Lista* lista, int codigo){


}





int tamanho_lista(Lista* lista){
	if(lista == NULL)
		return 0;
// aqui ele confere se a lista é valida ,se nao for ,ele retorna 0!
	
	int cont = 0;
	el* no = *lista;
	// esse no auxiliar ,aponta onde esta o começo da lista

	while(no != NULL){
		cont ++;  // contador while
		no = no->prox;

	}
	return cont;
}






int Inverter_lista(Lista* lista){


}


int retorna_impar(Lista* lista){


}