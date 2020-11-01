/*Implemente um programa que leia o nome, a idade e o endereço de uma
pessoa e armazene os dados em uma estrutura */

#include <stdio.h>
struct inf{

	char nome;
	int idade;
	char endereco;

};

typedef struct inf pessoa;


int main(){
	 pessoa exemplo;

       
     printf("nome :" );
     scanf("%c",exemplo.nome);

     printf("idade:" );
     scanf("%d",exemplo.idade);

     printf("endenreço:" );
     scanf("%c",exemplo.endereco);

	 return 0;

}