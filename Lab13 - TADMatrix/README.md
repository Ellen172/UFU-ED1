# TAD 
TMat2D.h -> (header) biblioteca com funções
TMat2D.c -> execução das funções (especificadas no .h)
main.c -> principal

## Executando programa 
gcc -o main.exe main.c TMat2D.c     //cria executavel de main.c utilizando .c
<em>ou<em>
gcc -o TMat2D.o -c TMat2D.c         //cria arquivo compilado de TMat2D.c 
gcc -o main.o -c main.c             //cria compilado de main.c
gcc -o main.exe main.o TMat2D.o     //cria executavel usando os arquivos compilados

## Envio do programa pronto 
TMat2D.h + TMat2D.o