#include<stdio.h>

struct alunos{
    int matricula;
    char nome[100];
    float nota1, nota2, nota3;
}; //criar struct;

int main(){
    struct alunos *p;
    int n;
    scanf("%d", &n);
    p = malloc(n*sizeof(struct alunos)); //criar n elementos struct alunos p
    return 0;
}




