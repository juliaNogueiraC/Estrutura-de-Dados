typedef struct {
  float real;
  float imaginaria;
}complexo;


void iniciar(complexo *variavel, float real, float imag);

float absoluto(complexo variavel); 

complexo soma(complexo *x, complexo *y);

complexo mult(complexo *x, complexo *y);
