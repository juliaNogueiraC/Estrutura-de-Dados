// definir o tipo de dado "lista"
// implemeta as funcçoes
#include "lista.h" 

Lista* cria_lista(){
	Lista* li = (Lista*) malloc(sizeof(lista));

	if(li != NULL)
		*li = NULL;
	return li;

}









void libera_lista(Lista* li){
	if(li != NULL){
		Elem* no;

		while((*li) != NULL){
			no = *li;
			*li = (*li)->prox;
			free(no);

		}
		free(li);

	}
}









int tamanho_lista(Lista* li){
	if(li == NULL)
		return 0;
// aqui ele confere se a lista é valida ,se nao for ,ele retorna 0!
	
	int cnt = 0;
	Elem* no = *li;
	// esse no auxi ,xaponta onde esta o começo da lista

	while(no != NULL){
		cont ++;
		no = no->prox;

	}
	return cont;
}








int lista_cheia(Lista* li){
	return 0;
}






int lista_vazia(Lista* li){
	if(li == NULL)
		return 1;
	if(*li == NULL)
		return 1;
	return 0;

}






int insere_lista_inicio(Lista* li, struct aluno al)
{
	if(li==NULL) return 0; // verifica se a lista é valida ,se existe

	Elem* no =(ELEM*) malloc(sizeof(ELem));// cria o no 

	if(no == NULL) return 0;// ,aloca mem pro novo no

	no->dados = al;
	no->prox = (*li); // meio que "afasta" o prim elemento par inserir o novo no
	*li = no; //insere o novo no no lugar do prim ,o prim ta no segundo agora 

	return 1;





	}







int insere_lista_final (Lista* li,struct aluno al)
{
	
if (li == NULL) return 0; // ve se  alista é valida 


Elem* no =(ELEM*) malloc(sizeof(ELem)); // aloca espaço de mem 

if(no == NULL)return 0;

no->dados = al;
no->prox = NULL;// como ele quer o ult ,ele informa que o prox elem é o null



// inserção ocorre aqui !
if((*li) == NULL){
	//lista vazia: insere inicio 
	*li = no;

}else{
	Elem *aux = *li; // aqui ele vai buscar onde inserir 
	while(aux->prox != NULL){
		aux = aux->prox;

	}
	// insere depois do aux 
}    aux->prox = no; 
/** quando ele sai do loop ,ou seja 
 quando ele achar o null, ele insere no final 
**/
}





int insere_Ordenada(Lista* li, struct aluno al)
{
	if (li == NULL) return 0; // ve se  alista é valida 


Elem* no =(ELEM*) malloc(sizeof(ELem)); // aloca espaço de mem 

if(no == NULL)return 0;

no->dados = al;


if(lista_vazia(li)){
	// insere no inicio ja que ela nao tem nada 
	no->prox = (*li);
        *li = no;

}else{
	// vai procurar onde inserir 
	Elem *ant,*atual = *li;

	while(atual != NULL && atual->dados.matricula < al.matricula/**elem que eu quero inserir**/){
		ant = atual;
		atual = atual->prox;

}
	if(atual == *li){
		// insere inicio 
		no->prox = (*li);
		*li = no;

	}else{
		no->prox = ant->prox;
		ant->prox = no;

	}
	return 1;
}







int remove_inicio(Lista* li){
	if (li == NULL) return 0;

	if((*li) ==NULL) return 0;//lista vazia

	Elem *no/** elemnto auxiliar**/ = *li; //aponta pro inicio da lista
	*li = no->prox; //incio da lista aponta pro prox elemnto
	free(no);//libera o no

	return 1;
}






int remove_final(Lista* li){
	if (li == NULL) return 0;

	if((*li) ==NULL) return 0;//lista vazia

Elem *ant,*no /** cira dois aux **/= *li;

while(no->prox != NULL){
	ant = no;
	no = no->prox;
	// o anterior recebe o no ,e o no recebe o elem seguinte 

}
if(no == (*li)) // ve se o no esta no inicio da lista ,se si
// remove o prim
  
 *li = no->prox;


else
	// se nao for o inicio da lista o anteiror aponta por no 
	ant->prox = no->prox;

free(no); //libera o no 

return 1;

}







int remove_elemQualquer(Lista* li, int mat){

	if (li == NULL) return 0; // a lista é valida ?


	Elem *ant,*no /** cria dois aux  e aponta pro inicio da lista**/= *li;

while(no != NULL && no->dados.matricula != mat/** matricula que eu quero remover **/){

	ant = no;
	no = no->prox;
	// anterior passa a ser o no e o no aponta para o prox elemento

}
if(no == NULL ) return 0;
// matrciula nao encontrada!

if(no == *li)
	//encontrei o elemnto

	*li = no->prox;
else

	ant->prox = no->prox;
free(no);

return 1;

}