#include <stdio.h>
 typedef struct
{
  int matricula;
  float nota1;
  float nota2;

  
  }Alunos;




  float media(){
    float nota1;
     float nota2;
  
    float media = (nota1 + nota2)/2;
    
    printf("%f",media);


    return media;

  }


  int main(){

 
   Alunos aluno;

  printf("\n matricula do aluno:");
  scanf("%d",&aluno.matricula);

  printf("\n primeira nota:");
  scanf("%f",&aluno.nota1);

  printf("\n segunda nota:");
  scanf("%f",&aluno.nota2);

  media();
  






  

  }