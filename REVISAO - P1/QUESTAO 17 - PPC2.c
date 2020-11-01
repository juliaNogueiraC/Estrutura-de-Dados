/* 17. Escreva um programa que receba dois structs do tipo dma, cada um
representando uma data valida, e calcule o número de dias que decorreram
entre as duas datas. */
#include <stdio.h>
struct  dma
{
 int dia ;
 int mes;
  int ano;

};
typedef struct dma data;



int main(){

 data d1;
 data d2;
 data diferenca;

 scanf(" %d %d %d ",&d1.dia, &d1.mes, &d1.ano);
 scanf(" %d %d %d ",&d2.dia, &d2.mes, &d2.ano);
 

 diferenca.dia = d2.dia - d1.dia;
 diferenca.dia = d2.mes - d1.mes;
 diferenca.dia = d2.ano - d1.ano;


 printf(" %d anos %d meses %d dias \n ", diferenca.ano , diferenca.mes , diferenca.dia);



	return 0;

}