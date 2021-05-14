#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str1[50], str2[50];

    printf("\n\t<< Compara Nomes >>\n\n");

    printf("Digite o nome 1: ");
    gets(str1);

    printf("Digite o nome 2: ");
    gets(str2);

    if(strcmp(str1, str2)==0){
        printf("Os nomes digitados sao iguais\n");
    }else {
        printf("Os nomes digitados sao diferentes\n");
    }

    return 0;
}