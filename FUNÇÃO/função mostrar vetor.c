#include <stdio.h>

void mostrar(int* p);

int main(void) {
    int v[3]= {1, 2, 3};
    mostrar(v);
    int i;
    for (i = 0; i< 3; i++){
       printf("%d\n", v[i]);
   }
    return 0;
}

void mostrar(int p[3]){
   int i;
   p[2] = 90;
   for (i = 0; i< 3; i++){
       printf("%d\n", p[i]);
   }
   

}
