# TAD 
<p>TMat2D.h -> (header) biblioteca com funções</p>
<p>TMat2D.c -> execução das funções (especificadas no .h)</p>
<p>main.c -> principal</p>

## Executando programa 

### versão 1
<p>gcc -o main.exe main.c TMat2D.c <em>//cria executavel de main.c utilizando .c</em></p>

### versão 2
<p>gcc -o TMat2D.o -c TMat2D.c <em>//cria arquivo compilado de TMat2D.c</em></p>
<p>gcc -o main.o -c main.c <em>//cria compilado de main.c</em></p>
<p>gcc -o main.exe main.o TMat2D.o <em>//cria executavel usando os arquivos compilados</em></p>

## Envio do programa pronto 
<ul>
    <li>TMat2D.h</li>
    <li>TMat2D.o</li>
</ul>