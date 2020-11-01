#include <stdio.h>
void incrementa (int *a, int b){
*a += b;
}

int main (){
 int num;
 num=100;
 printf (“Valor de num %d\n”, num);
 incrementa (&num,50);
 printf (“Valor de num %d\n”, num);
}

//  programa retorna o numero 150




/** fiz algumas modificações no programa , ele ficoi asssim :


 #include <stdio.h>
void incrementa (int *a, int b)
{
*a += b;

printf("%d",*a);
}

int main (){
 int num = 100;


 
 incrementa (&num,50);
 
 
}


**/