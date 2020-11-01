#include <stdbool.h>
#include <stdio.h>

typedef struct {
	int id;
	int quantTot;
	int quantDis;
	bool cativo;
	char categoria;


}livro;

 int funcao(int a){

   a + a * 10;

  return a/2;



 }


int funcao2(int *a){

*a = 100;
return 1;



}

int main(int argc, char const *argv[])
{
	/*
  int a = 10;

  int * ponteiro = &a;

  double vetor [10];

  double *pont = &vetor[0];

  vetor = pont;
//////

	int a = 10;
	printf("%d\n", a);
	printf("%d\n",funcao(a) );
/////

	int vetor[5]={1,2,3,4,5};

	int * pont = vetor;

printf("%p - %d\n ",pont , *pont );

pont = pont + 1;

printf("%p - %d\n ",pont , *pont );



*/

// ponteiro para ponteiro :

	int **pont;
	// matriz 



return 0;

}