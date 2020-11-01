/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela
possui.*/

#include <stdio.h>

int main()
{
    int matriz[4][4]
    int cont = 0;
   
    
    for(int linha=0; linha<4; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
            printf("%d\n linha, %d\n coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
   
     
    for(int linha=0; linha<4; linha++)
        for(int coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] > 10)
                cont++;
 
 
    printf(" números maiores que 10: %d", cont);
   
    return 0;
}




