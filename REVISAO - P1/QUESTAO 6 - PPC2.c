/* Faça um programa que calcule o desvio ppadrão de um vetor v contendo n =
10 números, onde m e a media do vetor */

#include <stdio.h>
#include <math.h>

//#define QTD_ELEMENTOS 5

int main() {
    int vetor[10];
    int somatorio = 0;
    float ex = 0;

    


    for (int i = 0; i < 10 ; i++) {
        printf("insira o num: ");
        scanf("%d", &vetor[i]);
    }



    
    for (int i = 0; i < 10; i++) {
        somatorio += vetor[i];
    }


    float m = somatorio / 10 ;


 
    for (int i = 0; i < 10; i++) {
        
        float v = vetor[i] - m;
        
        
        ex += v * v;
    }
    
    
    

    float desvioPadrao = sqrt(ex / 10);
    
    printf("a media é : %1.f ", m);
    
    printf(" o desvio padrao é :%1.f",desvioPadrao);
    
    
    
    
}