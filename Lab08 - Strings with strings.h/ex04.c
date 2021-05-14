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

    for(int i=0; i<strlen(str1); i++){
        str1[i]=tolower(str1[i]);
    }

    for(int i=0; i<strlen(str2); i++){
        str2[i]=tolower(str2[i]);
    }

    if(strcmp(str1, str2)==0){
        printf("Os nomes digitados sao iguais\n");
    }else {
        printf("Os nomes digitados sao diferentes\n");
    }

    return 0;
}