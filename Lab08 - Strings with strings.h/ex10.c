#include<stdio.h>
#include<string.h>
#include<ctype.h>
//incompleto
int main (){
    char str[50], copy[50];

    printf("\n\t<< Palindromos >>\n\n");

    printf("Digite a palavra: ");
    gets(str);
    
    int pos=0;
    for(int i=strlen(str)-1; i>=0; i--){
        copy[pos]=str[i];
        pos++;
    }
    copy[pos] = '\0';

    if(strcmp(str,copy) == 0){
        printf("Eh palindromo!\n");
    }
    else {
        printf("Nao eh palindromo!\n");
    }

    return 0;
}