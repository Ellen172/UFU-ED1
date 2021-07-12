#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// check:<<<erro: a string resultante deveria ser passada como ponteiro de ponteiro para char>>>>
int contatena(char *str1, char *str2, char **text) {
    int tam = strlen(str1) + strlen(str2) + 1;
    *text = malloc(tam *sizeof(char)); // check:<<<erro: faltou alocar text>>>> 
    
    if(text == NULL)
        return -1;
    
    int i, j;
    for(i=0; i<strlen(str1); i++){
        **text = str1[i]; 
        printf("**text = %c \n", **text);
        *text += 1; // passa para a proxima posição do ponteiro 
    }
    for(j=0; j<strlen(str2)+1; j++){
        **text = str2[j];  
        printf("**text = %c \n", **text);
        *text += 1; // passa para a proxima posição do ponteiro 
    }
    printf("tam = %d\n", tam);
    *text = *text - tam;
    printf("\n*text = %s\n", *text);

    printf("\nfim da funcao\n");
    return 0;
}

//  check:<<<erro: chamada no programa principal?>>>>
int main(){
    char str1[15] = "Oi ";
    char str2[15] = "Como vai?";
    char *text;
    
    int ret = contatena(str1, str2, &text);
    if(ret == 0){
        printf("\n*text = %s\n", text);
        free(text);
    }

    printf("\nfim do programa\n");
    system("pause");
    return 0;
}