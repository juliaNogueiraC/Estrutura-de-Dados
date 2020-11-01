/*Faça um programa para ler a nota da prova de 15 alunos e armazene num
vetor, calcule e imprima a media geral.*/

#include <stdio.h>

int main(){
   
   int i;
   float media;
   float notas[15];
    
   for(i=0;i<15;i++){
       printf(" nota do aluno numero - %d ",i+1);
          scanf("%f",&notas[i]);
    
          media += notas[i];

   }
   
    float mediaGeral = media / 15.0;
   printf("media : %1.f\n ", mediaGeral);

   return 0;
}