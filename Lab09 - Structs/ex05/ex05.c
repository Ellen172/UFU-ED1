#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct aluno{
    char matricula[20]; 
    char nome[100];
    double nota1;
    double nota2;
    double nota3;
    double media;
    int faltas;
};

int main() {
    printf("\n<< ALUNOS DA GRADUACAO >>\n\n");

    //INSERIR DADOS DE 3 ALUNOS
    struct aluno cadastro[3];
    printf("Inserir dados dos alunos: ");
    for (int i=0; i<3; i++){
        char temp[100];
        printf("\nEntre com os dados do %do aluno: \n", i+1);
        printf("Matricula: ");
        fgets(temp, 20, stdin);
        strcpy(cadastro[i].matricula, temp);
        cadastro[i].matricula[strcspn(cadastro[i].matricula, "\n")] = '\0';
        printf("Nome: ");
        fgets(temp, 100, stdin);
        strcpy(cadastro[i].nome, temp);
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
        printf("Nota da prova 1: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%lf", &cadastro[i].nota1);
        printf("Nota da prova 2: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%lf", &cadastro[i].nota2);
        printf("Nota da prova 3: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%lf", &cadastro[i].nota3);
        printf("Numero de faltas: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", &cadastro[i].faltas);
        cadastro[i].media = (cadastro[i].nota1 + cadastro[i].nota2 + cadastro[i].nota3)/3;
    }

    //MAIOR NOTA DA PRIMEIRA PROVA 
    double maior_nota1=0.0;
    char maior_nota1_nome[100];
    for(int i=0; i<3; i++){
        if(cadastro[i].nota1 > maior_nota1){
            maior_nota1 = cadastro[i].nota1;
            strcpy(maior_nota1_nome, cadastro[i].nome);
        }
    }
    
    printf("Aluno com maior nota na prova 1 foi %s com %.1lf pontos.\n", maior_nota1_nome, maior_nota1);

    //MAIOR MEDIA GERAL
    double maior_media=0.0;
    char maior_media_nome[100];
    for(int i=0; i<3; i++){
        if(cadastro[i].media > maior_media){
            maior_media = cadastro[i].media;
            strcpy(maior_media_nome, cadastro[i].nome);
        }
    }
    printf("Aluno com maior media geral foi %s com %.1lf pontos.\n", maior_media_nome, maior_media);

    //MENOR MEDIA GERAL
    double menor_media=110;
    char menor_media_nome[100];
    for(int i=0; i<3; i++){
        if(cadastro[i].media < menor_media){
            menor_media = cadastro[i].media;
            strcpy(menor_media_nome, cadastro[i].nome);
        }
    }
    printf("Aluno com menor media geral foi %s com %.1lf pontos.\n", menor_media_nome, menor_media);

    printf("\nSituacao dos Alunos:\n\n");
    int falta_minima = 72-(72*0.75);
    for(int i=0; i<3; i++){
        if(cadastro[i].media >= 60 && cadastro[i].faltas < falta_minima){
            printf("%s - %s. Aprovado.\n", cadastro[i].matricula, cadastro[i].nome);
        }
        else if(cadastro[i].media < 60 && cadastro[i].faltas < falta_minima){
            printf("%s - %s. Reprovado por nota.\n", cadastro[i].matricula, cadastro[i].nome);
        }
        else {
            printf("%s - %s. Reprovado por falta.\n", cadastro[i].matricula, cadastro[i].nome);
        }
    }

    return 0;
}

/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/