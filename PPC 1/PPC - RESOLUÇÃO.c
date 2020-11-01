#include <stdio.h>

typedef struct acoesBolsa
{
  int codigo;
  float valorAtual;
  float valorAnterior;
  double variacao;
  };



  int main(void){
    int quantBolsa;
     printf("digite a quant de bolsas :\n" );
     scanf("%d", &quantBolsa);



     int i;
     int valor;

     /** criando um veotr
      onde cada elemento é uma acao e com um tamanho definido pelo usuario **/
     acao acoes[quantBolsa]; 


     for ( i = 0; i <quantBolsa;i++)
     {
     	// vetor para armazenar as bolsas 
     	printf(" dados da acao &d", i+1);


     	printf("digite o codigo:" );
     	scanf("%d ", &acoes[i].codigo);

     	printf("digite o valorAtual:" );
     	scanf("%d ", &acoes[i].valorAtual);

       printf("digite o valorAnterior:" );
     	scanf("%d ", &acoes[i].valorAnterior);

     	acoes[i].variacao = ((acoes[i].valorAtual / acoes[i].valorAnterior) - 1) * 100;

     }


   for (int i = 0; i < quantBolsa; i++)
   {
   	

   printf(" dados da acao &d", i+1);
   printf(" cpodigo :%d\n",acoes[i].codigo );
   printf(" valor atual :%f\n",acoes[i].valorAtual );
   printf(" valor ant :%f\n",acoes[i].valorAnterior );
   printf(" variacao :%lf\n",acoes[i].variacao );



   }

  printf("digite o valor:");
  scanf("%f",&valor);


  for (int i = 0; i < quantBolsa; i++)
  {
  	 if ( acoes[i].valorAtual < valor)
  	 {
  	 	printf(" a acao de codsigo %d tem um valor menor que o informado ", acoes[i].codigo);
  	 }
  }


float somatorio = 0;
float media ;
for (int i = 0; i < quantBolsa; i++)
{
 somatorio += acoes[i].valorAtual;

}
media = somatorio/quantBolsa;
printf("a media das acoes é %f",media);



   /** acao petro;  // instaciar variavel acao por causa do typedef 
  	petro.codigo = 12;
  	petro.valorAtual = 100.00
    petro.valorAnterior = 150.00
    petro.variacao; **/



  /** printf(" cpodigo :%d\n",petro.codigo );
   printf(" valor atual :%f\n",petro.valorAtual );
   printf(" valor ant :%f\n",petro.valorAnterior );
   printf(" variacao :%lf\n",petro.variacao );**/

   return 0;


  	{
  		
 