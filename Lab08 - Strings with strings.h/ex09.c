#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];

    printf("\n\t<< Invertendo >>\n\n");
    printf("Digite a string: ");
    gets(str);

    printf("Saida invertida: ");
    for(int i=strlen(str); i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}