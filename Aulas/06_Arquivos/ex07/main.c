#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }

    // escrevendo string com fputs
    fputs("Hello", f);
    fputc('\n', f); // sem essa gravação as strings estarão coladas
    fputs("World", f);

    fclose(f);

    system("pause");
    return 0;
}