#include <stdio.h>

int num3 = 80;

int soma (int num1, int num2);
int subtracao (int num1, int num2);

int main(void) {
  int num1 = 9, num2 = 10;
  int resultado = 90;
  printf("O valor do num3 no main é %d\n", num3);
  printf("O resultado é %d\n", resultado);
  resultado = soma(num1,num2);
  printf("O resultado é %d\n", resultado);
  num3 = 76;
  printf("O valor do num3 no main é %d", num3);
  return 0;
}

int soma (int num1, int num2){
  int resultado;
  printf("O valor do num3 na função é %d\n", num3);
  num3 = 20;
  printf("O valor do num3 na função é %d\n", num3);
  resultado = num1+num2;
  return resultado;
}

int subtracao (int num1, int num2){
  int resultado;
  printf("O valor do num3 na função é %d\n", num3);
  num3 = 20;
  printf("O valor do num3 na função é %d\n", num3);
  resultado = num1-num2;
  return resultado;
}