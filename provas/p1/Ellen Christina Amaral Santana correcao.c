#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

/*
--- Instruções da prova--- 
Qualquer exercício copiado de um colega ou da internet implicará nota zero em toda a prova,
 mesmo que a cópia seja feita somente de um trecho

A nota será zerada tanto para quem deixou copiar quanto para quem fez a cópia.

Não enviar o enunciado nem as respostas para os colegas

Não haverá checagem de exercício correto. 

Formate a saída de seu programa da melhor forma possível. Por exemplo, se o exercício
pede para informar o valor de um produto, escreva no printf um texto que seja adequado 
ao que for pedido:

Forma correta 
Digite o preço do produto 1: 20
Digite o preço do produto 2: 50.6

Forma errada
20
produto: 50.6

Fique atento também à saída gerada pelo programa. Escreva textos contextualizando os cálculos 
realizado e não somente mostre número Por exemplo:

Forma correta
O consumo de gasolina no mês 5 foi 50L – valor alto
O consumo de gasolina no mês 2 foi 20L – valor baixo

Forma errada
50L
50L – alto
*/



// Fazer um programa para cadastro de carros. As informações para cadastro são: 
// modelo (ex: gol, ka, c3), o ano (ex: 1999, 2015, 2021) e o consumo (ex: 10 Km/l, 7 km/l, 16 Km/l)
// Verificar no main() abaixo os exercícios da prova


// Definir as estruturas necessárias aqui:
struct carro {
    char modelo[20];
    int ano;
    double consumo;
};

struct docCarro{
    char nome[50];
    char cpf[12];
    struct carro car;
};

// Função: Busca Maior Consumo (ex02)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados 
// Saída: índice do vetor indicando a posição de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)
int maiorConsumo(struct carro *p, int n){
    // check:<<<erro: e2.5: Maior consumo implica em menor valor de km/l - a busca deveria ser pelo menor valor>>>>
    int ind=0;
    int maior=0;
    for(int i=0; i<n; i++){
        if(p[i].consumo>maior){
            maior=p[i].consumo;
            ind = i;
        }
    }
    return ind;
}


// Função: Índice de Eficiência (ex03)
// Essa calcula a eficiência energética de um carro
// o índice de eficiência é calculado usando a seguinte fórmula
//
//                                 ano_veiculo - 1991
//   ind = consumo (em km/l)  *  ---------------------            
//                                        30                   
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos, zeros e ano menor que 1980 e maior que 2021
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Valor do índice de eficiência                 | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | acima ou igual 10                             | A              |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima ou igual a 8,8 e menor que 10           | B              |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima ou igual a 7,5 e menor que 8,8          | C              |
+-------------------+-----------------------------------------------+----------------+
| 4                 | abaixo de 7,5                                 | D              |
+-------------------+-----------------------------------------------+----------------+

*/
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência o cálculo da eficiência>>>>
int eficiencia(int ano, int consumo){
    double efic;
    int ef;
    if(ano>=1980 || ano<=2021){// check:<<<erro: e3.2: Faltou testar os valores inválidos dentro da função / teste errado>>>>
        efic = consumo * (ano-1994) /30;// check:<<<erro: e3.3: Cálculo com erros (sem consumo OU divisão inteira)>>>>
    }// check:<<<erro:  e o caso contrário??>>>>

    if(efic < 7.5){
        ef=4;
    }else if(efic < 8.8){
        ef=3;
    }else if(efic < 10){
        ef=2;
    }else if(efic >= 10){
        ef=1;
    }else {
        ef=(-1);// check:<<<erro: não chega até aqui>>>>
    }

    return ef;
}

// Função: Busca Maior Consumo - retorno Ponteiro (ex05)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados 
// Saída: ponteiro para posição de vetor de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)

int buscaMaiorConsumo(struct carro *p, int n){
    int *ind;
    int maior=0;
    for(int i=0; i<n; i++){
        if(p[i].consumo>maior){
            maior=p[i].consumo;
            ind = &i;
        }
    }
    return *ind;
}


int main(){
    char temp[50];
    struct carro *p;
    int n;

    // Ex 01: permitir que o usuário cadastre quantos carros desejar
    //  - ler do teclado a quantidade de carros que o usuário escolheu
    //  - ler do teclado as informações dos carros 

    printf("Informe quantos carros deseja cadastrar: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &n);// check:<<<comentário:  bom! >>>>

    p = (struct carro *)malloc(n*sizeof(struct carro));
// check:<<<erro: e1.05: Falou liberar memória com free>>>>
    for(int i=0; i<n; i++){
        
        printf("\nCarro %d\n", i+1);
        printf("Modelo: ");
        fgets(temp, 20, stdin);
        strcpy(p[i].modelo, temp);
        p[i].modelo[strcspn(p[i].modelo, "\n")] = '\0';
        printf("Ano: ");
        fgets(temp, 20, stdin);
        sscanf(temp, "%d", &p[i].ano);
        printf("Consumo (km/l): ");
        fgets(temp, 20, stdin);
        sscanf(temp, "%lf", &p[i].consumo);
    }

   // Ex02: utilizando a função de buscar o maior consumo, mostre
   // todas as informações do carro que possui o maior consumo.
   // Todas as funções de entrada e saída devem estar no programa
   // principal
   int x;

   x = maiorConsumo(p, n);
   printf("Carro com maior consumo\n");
   printf("Modelo: %s, Ano: %d, Consumo: %.2lf\n", p[x].modelo, p[x].ano, p[x].consumo);


   // Ex03: utilizando a função de cálculo de eficiência de um carro
   // mostre para todos os carros o seu índice de eficiência e 
   // a sua classificação de eficiência
    
    printf("Eficiencia dos veiculos cadastrados\n");
    for(int i=0; i<n; i++){
        int c;
        char class[50];
        c= eficiencia(p[i].ano, p[i].consumo);
        printf("%s - %d - %0.lf km/l; Indice: %d; Classificacao: _\n", p[i].modelo, p[i].ano, p[i].consumo, c);
        // check:<<<erro: e3.5: Não mostrou o valor da classificação>>>>
    }

   // exemplo de saída:
   // Ford Ka - 2020 - 10 km/l; Indice: 9.7; Classificação: B

   // Ex04: Crie uma estrutura para guardar informações sobre o
   // documento de um carro CRLV (Certificado de Registro e
   //  Licenciamento de Veículo)
   // Nesse documento deverá ter o Nome, CPF, e as informações
   // do carro (deve-se utilizar a estrutura dos exercícios anteriores)
   // Crie uma variável dessa estrutura e inicialize ela com valores 
   // constantes (não precisa ler do teclado) e depois mostre esses valores
    
    struct docCarro docs;

    docs.car.ano = 2011;
    docs.car.consumo = 45.5;
    strcpy(docs.car.modelo, "Ford KA");
    strcpy(docs.nome, "Marco Tulio Jr");
    strcpy(docs.cpf, "123.456-78");

    printf("Valores da CRLV\n");
    printf("Nome: %s\n", docs.nome);
    printf("CPF: %s\n", docs.cpf);
    printf("Carro - Modelo: %s\n", docs.car.modelo);
    printf("Carro - Ano: %d\n", docs.car.ano);
    printf("Carro - Consumo: %.2lf\n", docs.car.consumo);


   // Ex05: Duplique o exercício 2 e modifique ele para que ao invés de 
   // retornar o índice da posição do vetor que retorne um ponteiro
   // para a posição do vetor. Mostre no programa principal os dados
   // do carro utilizando o ponteiro retornado.

    int z;
// check:<<<erro: não mudou o ex2>>>>
    z = buscaMaiorConsumo(p, n);
    printf("Carro com maior consumo\n");
    printf("Modelo: %s, Ano: %d, Consumo: %.2lf\n", p[z].modelo, p[z].ano, p[z].consumo);
   
    return 0;
}