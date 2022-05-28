# TAD 
TMat2D.h -> (header) biblioteca com funções
TMat2D.c -> execução das funções (especificadas no .h)
TMat2D.o -> compilado de TMat2d.c (usado para ocultar o .c)
main.c -> principal

## Executando programa 

gcc -o main.exe main.c TMat2D.c     //cria executavel de main.c utilizando .c

gcc -o TMat2D.o -c TMat2D.c         //cria arquivo compilado de TMat2D.c 
gcc -o main.exe main.c TMat2D.o     //cria executavel de main.c utilizindo arquivo compilado

## Envio do programa pronto 
TMat2D.h + TMat2D.o