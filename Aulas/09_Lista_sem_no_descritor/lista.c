#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef lista_no Lista_no;

struct lista_no {
    struct aluno dado;
    Lista *prox;
};
