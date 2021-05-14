#include<stdio.h>

int main() {
    int nota[5], maior=0;

    printf("\n<<Normalizando as notas>>\n\n");

    for(int i=0; i<5; i++){
        printf("Entre com a nota do aluno %d: ", i+1);
        scanf("%d", &nota[i]);
        if(nota[i]>maior){
            maior=nota[i];
        }
    }
    
    printf("\nNotas normalizadas\n\n");
    for(int i=0; i<5; i++){
        printf("A nota do Aluno %d e: %d\n ", i+1, (nota[i]*100)/maior);
    }

    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/