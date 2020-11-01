#include <stdio.h>

int main()
{
    int i=99,j;
int *p;
p = &i;
j = *p + 100;
printf("%d\n",j);
   // return 0;
}


// o programa imprime o valor 199 