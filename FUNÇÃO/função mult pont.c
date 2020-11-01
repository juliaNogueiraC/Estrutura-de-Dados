#include <stdio.h>

void calculo(int *x, int *y, int z);

int main(void) {
  int x, y, z;
  x = 3;
  y = 5;
  z = 9;
  calculo(&x, &y, z);
  printf("x = %d y = %d z = %d" , x, y, z);
  return 0;
}
void calculo(int *x, int *y, int z) {
  z = z * 3;
  *x = *x * 3;
  *y = *y * 3;
}
