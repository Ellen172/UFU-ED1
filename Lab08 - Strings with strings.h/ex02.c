#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int i=0;
    char str[50];

    printf("\n  << Vetor de char >>  \n\n");

    printf("Digite um nome: ");
    gets(str);

    for(i=0; i<strlen(str); i++){
        str[i]=toupper(str[i]);
    }

    printf("O nome digitado e: %s\n", str);

    for(i=0; i<strlen(str); i++){
        str[i]=tolower(str[i]);
    }

    printf("O nome digitado e: %s\n", str);

    return 0;
}