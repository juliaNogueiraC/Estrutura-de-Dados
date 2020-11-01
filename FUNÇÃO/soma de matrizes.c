#include <stdio.h>

void leia_matriz(int matriz[5][5])
{
	int i, j;
	int valor;
/* leitura de matriz */
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; i++)
		{
			printf("matriz[%d][%d]: ", i, j );
			scanf("%d", &valor);
			matriz[i][j] = valor;


		}
	}
}

void soma_matrizes( int matriz1[5][5], int matriz2[5][5], int resposta[5][5])
{
	int i, j;
	int valor;
/* leitura de matriz */
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			/* função de soma das matrizes,mas ainda nao serve pro calculo */

               valor = matriz1[i][j] + matriz2[i][j];
               resposta[i][j] = valor;
          }     
      }
   }


/*e aqui no main que ocorre a operação ,conmo no java */
int main(void){
	int a[5][5], b[5][5];
	int res[5][5];

	printf("leitura da matriz a\n);
	leia_matriz(a);

	printf("leitura da matriz b\n");
	leia_matriz(b);

   soma_matrizes(a, b, res);


   printf("resultado 1\n");
   for (i = 0; i < 5; i++)
   {
    for (j = 0; j < 5; j++)
    {
    	/valor = res[i][j];

    	printf("%d", valor );
    }

    
    printf("\n");
   }

   return 0;
}

