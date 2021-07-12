#include <stdio.h>
#include <stdlib.h>
#include "ListaCir.h"

int main() {
    Lista *li;
    li = create();

    int tam = list_size(li);
    printf("O tamanho da lista eh %d\n", tam);

    list_free(li);

    return 0;
}