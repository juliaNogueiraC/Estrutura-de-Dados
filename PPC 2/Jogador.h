typedef struct {
 char nome;
 int jogos;
 int gols;
 int assitencias;
} Jogador;

void atribuir(Jogador *jogadorEx ,char ,int );
void imprime(Jogador *jogadorEx);
void EhBom(Jogador *jogadorEx ,int);