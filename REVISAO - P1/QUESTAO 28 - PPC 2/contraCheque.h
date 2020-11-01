typedef struct {
 char  nome;
 int num_inscricao;
 float salario_horasNormais;
 float salario_horasExtras ;
 float  deducaoInss;
 float salarioLiquido;
}contraCheque;


void iniciar(contraCheque *ex, char  nome, int num_incrição);

void calcularSalario(contraCheque *ex , float salarioLiquido ,float salario_horasExtras);

void inss(contraCheque *ex ,  float salarioLiquido ,float salario_horasNormais, float salario_horasExtras,float deducaoInss);