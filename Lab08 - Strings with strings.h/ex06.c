#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];

    printf("\n\t<<Separa letras>>\n\n");
    printf("Digite o nome: ");
    gets(str);

    for(int i=0; i<strlen(str); i++){
        printf("%do letra: %c\n", i+1, str[i]);
    }

    return 0;
}