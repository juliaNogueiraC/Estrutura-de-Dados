/* Fazer um
algoritmo que processe a tabela e emita, para cada funcionário seu
contracheque cujo formato é dado a seguir:
 nome:
 num de incrição :
 salario horas normais :
 salario horas extras :
  dedução inss:
  salario liquido :


  O salário de referência deverá ser lido previamente.
O salário referente às horas extras é calculado acrescentando 30% ao salário-hora
normal.
O desconto do INSS é de 11% do salário bruto (salário correspondente às horas
normais trabalhadas + salário correspondente às horas extras).
Para o cálculo do salário, considerar que existem duas classes de funcionários, a
classe 1, cujo salário é 1,3 vezes o salário de referência, e a classe 2, cujo salário
é 1,9 vezes o salário de referência. */

#include "contracheque.h"
contracheque funcionario;

  char  nome;
  int num_inscricao;



  printf("--------- Digite os dados:--------------");
  printf("------nome / numero de inscrição:------- \n");
  scanf("%c / %d", &nome,&num_inscricao);
  iniciar(&funcionario, nome, num_inscricao);

  