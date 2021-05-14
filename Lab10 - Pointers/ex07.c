#include<stdio.h>

int main() {
    char nome[13]="Jose Augusto";
    char *p;
    p=nome;

    for(int i=0; i<13; i++){
        printf("%c", *(p+i));
    }

    return 0;
}