#include <stdio.h>
/**
Escreva um programa que declare um inteiro, um real e um char, e ponteiros
para inteiro, real, e char. Associe as variáveis aos ponteiros(use &). Modifique
os valores de cada variável usando ponteiros. Imprima os valores das variáveis
antes e após a modificação.
**/

int main(void) {
  int i = 2 ;
  float f  = 5.6;
  char c = 'char';

  int *p1;
  float *p2;
  char *p3;


  p1  = &i;
  p2  = &f;
  p3  = &c;



// antes da modificação
  printf("p1 %d\n",p1);
  printf("p1 %d\n",*p1);

  printf("p2 %d\n",p2);
  printf("p2 %f\n",*p2);

  printf("p3 %d\n",p3);
  printf("p3 %c\n",*p3);
  

  // modificando 
  *p1 = 6;
  *p2 = 7.88;
  *p3 = 'texto';


// depois da modificação 

  printf("p1 %d\n",p1);
  printf("p1 %d\n",*p1);

  printf("p2 %d\n",p2);
  printf("p2 %f\n",*p2);

  printf("p3 %d\n",p3);
  printf("p3 %c\n",*p3);
  


  
  printf("Int: %d\n",i);

  printf("float: %f\n",f);

  printf("Char :%c\n",c);
  
  return 0;
}