#include <stdio.h>
#include "lista.h"

int main(void){
   Tlista *Minhalista = Tlista_Criar();
    /** essa instruçao ta indo na mem e reserva
     uma variavel que aponta para o struct 
     ,que aponta p prim e ult gaveta
**/

if(Tlista_EhVazia (Minhalista)){
	print("vazia");

}else{
	print("a lista contem elem");
}


Tlista_InsereInicio(Minhalista ,aluno);


	return 0;
}