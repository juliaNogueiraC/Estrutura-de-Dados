// cabeçalho , struct 
 // definie a estrutura e o cabeçalho das funçoes

#include <stdbool.h>

typedef struct {
	int id;
	int quantTot;
	int quantDis;
	bool cativo;
	char categoria;


}livro;
  

void inciar( int id, int quantTot ,int quantDis , bool cativo , char categoria);
/* voce pode retrnar tipo livro ou usar  ponteiro ,
na qual vamos usar aqui :
*/
bool alugar(livro *l);

void imprime(livro l);
