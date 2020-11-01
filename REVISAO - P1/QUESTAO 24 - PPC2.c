#include <stdio.h>

int main()
{
   int i=7, j=3;
int *p;
int **r;
p = &i;
r = &p;
int c = **r + j;
printf("%d\n",c);
   // return 0;
}

// o programa imprime o valor 10