#include <stdio.h>
/* . Escreva um programa que contenha duas variáveis inteiras.compare seus
endereços e exiba o maior endereço*/




int main ()
{
  int num1;
  int num2;


    printf("primeiro numero : ");
        scanf("%d", &num1);


    printf("segundo numero: ");
        scanf("%d", &num2);




    if(&num1 > &num2){
        printf(" o primeiro numero tem o maior endereco");
        return;
    }else{
        printf("o segundo numero tem o maior");

    }
    
  return 0;

}