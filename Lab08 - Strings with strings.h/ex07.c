#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];

    printf("\n\t<<Sem vogais>>\n\n");
    printf("Digite o nome: ");
    gets(str);

    printf("Saida sem vogais: ");

    for(int i=0; i<strlen(str); i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}