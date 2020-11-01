#include <math.h>
#include "imaginario.h"


void iniciar(complexo *variavel, float real, float imag){
  variavel->real = real;
  variavel->imaginaria = imag;
}


float absoluto(complexo variavel){
  return sqrt((variavel.real*variavel.real) + variavel.imaginaria*variavel.imaginaria);
}



complexo soma(complexo *x, complexo *y){
  complexo res;

  res.real = x->real + y->real;
  res.imaginaria = x->imaginaria + y->imaginaria;


  return res;
}



complexo mult(complexo *x, complexo *y){
  

  complexo res;
  res.real = (x->real*y->real - x->imaginaria*y->imaginaria);
  res.imaginaria = (x->real*y->imaginaria + x->imaginaria*y->real);
  return res;
}