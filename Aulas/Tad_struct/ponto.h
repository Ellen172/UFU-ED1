typedef struct ponto Ponto;

// cria um novo ponto
Ponto* cria_ponto(Ponto *p, int x, int y);
// libera um ponto
int libera_ponto(Ponto *p);
// acessa os valores 'x' e 'y' de um ponto
int acessa_ponto(Ponto *p, int *x, int *y);
// atribui valores 'x' e 'y' a um ponto
int atribui_valores(Ponto *p, int x, int y);
// calcula a distancia entre dois pontos
float distancia(Ponto *p, Ponto *q);