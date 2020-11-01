#include <stdio.h>
#include "imaginario.h"

/* Escreva uma especificação de tipos abstratos de dados (TAD) para os números
complexos, a + bi, onde
• abs(a + bi) é sqrt(a 2 + b 2 ),
• (a + bi) + (c + di) é (a + c) + (b + d)i
• (a + b) * (c + di) é (a * c – b * d) + (a * d + b * c)i
• –(a + bi) é (-a) + (-b)i. */ 


int main(void) {
  complexo numExemplo,numExemplo2, numExemplo3, res;

  float a, b;


  printf("---- Digite o número ----");
  printf("------formato a+bi:------- \n");
  scanf("%f+%fi", &a,&b);
  iniciar(&numExemplo, a, b);


  
  iniciar(&numExemplo2, 89, 1);
  iniciar(&numExemplo3, 32, 66);
  res = soma(&numExemplo2, &numExemplo3);
  printf("soma : %.2f + %.2fi\n", res.real, res.imaginaria);

  res = mult(&numExemplo2, &numExemplo3);
  printf("multiplicação : %.2f + %.2fi\n", res.real, res.imaginaria);
    
  return 0;
}