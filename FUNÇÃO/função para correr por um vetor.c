#include <stdio.h>


void run(int v[3]){
   int i;
   
   for (i = 0; i< 3; i++){
       printf("%d\n", v[i]);
   }
   

}

int main(void) {
    int v[3]= {1, 2, 3};
    mostrar(v);
    int i;
}