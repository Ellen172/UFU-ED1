#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct phone {
    char tel[12];
    char ddd[5];
};

struct data {
    char dia[3];
    char mes[3];
    char ano[5];
};

struct end{
    char rua[50];
    char num[10];
    char compl[20];
    char cidade[50];
    char estado[5];
    char cep[12];
};

struct dados {
    char nome[50]; 
    char id[20];
    char cpf[12];
    char sexo[2];
    char eCivil[10];  
    struct data data_nascimento;
    struct end end_residencial; 
    struct phone phone_residencial; 
    struct end end_comercial;
    struct phone phone_comercial;
    struct data data_ingresso;
    char salario[15];
};

printar(struct dados cadastro[5], int t){
    for(int i=0; i<t; i++){
        printf("\nPosicao %d\n", i);
        printf("Informacoes Pessoais:\n");
        printf("Nome: %s, CPF: %s, Sexo: %s, Estado Civil: %s\n", cadastro[i].nome, cadastro[i].cpf, cadastro[i].sexo);
        printf("Salario: %s, Identidade: %s\n", cadastro[i].salario, cadastro[i].id);
        printf("Telefone residencial: (%s)%s\n", cadastro[i].phone_residencial.ddd, cadastro[i].phone_residencial.tel);
        printf("Telefone: (%s)%s\n", cadastro[i].phone_comercial.ddd, cadastro[i].phone_comercial.tel);
        printf("Data de Nascimento: %s/%s/%s\n", cadastro[i].data_nascimento.dia, cadastro[i].data_nascimento.mes, cadastro[i].data_nascimento.ano);
        printf("Data de ingresso: %s/%s/%s\n", cadastro[i].data_ingresso.dia, cadastro[i].data_ingresso.mes, cadastro[i].data_ingresso.ano);
        printf("\nEndereco comercial: \n");
        printf("Rua: %s, Nº: %s, Complemento: %s, Cidade: %s\n", cadastro[i].end_comercial.rua, cadastro[i].end_comercial.num, cadastro[i].end_comercial.compl, cadastro[i].end_comercial.cidade);
        printf("Estado: %s, CEP: %s\n", cadastro[i].end_comercial.estado, cadastro[i].end_comercial.cep);
        printf("\nEndereco residencial: \n");
        printf("Rua: %s, Nº: %s, Complemento: %s, Cidade: %s\n", cadastro[i].end_residencial.rua, cadastro[i].end_residencial.num, cadastro[i].end_residencial.compl, cadastro[i].end_residencial.cidade);
        printf("Estado: %s, CEP: %s\n", cadastro[i].end_residencial.estado, cadastro[i].end_residencial.cep);
    }
}

novo(struct dados cadastro[5]){
    int x;
    char temp[500];
    printf("Digite a posicao do novo cadastro: "); 
    fgets(temp,50,stdin); 
    sscanf(temp,"%d",&x); 

    printf("Digite o nome: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].nome,temp); 
    cadastro[x].nome[strcspn(cadastro[x].nome, "\n")] = '\0';

    printf("Digite a identidade: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].cpf,temp); 
    cadastro[x].cpf[strcspn(cadastro[x].cpf, "\n")] = '\0';

    printf("Digite o sexo: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].sexo,temp); 
    cadastro[x].sexo[strcspn(cadastro[x].sexo, "\n")] = '\0';

    printf("Digite o estado civil: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].eCivil,temp); 
    cadastro[x].eCivil[strcspn(cadastro[x].eCivil, "\n")] = '\0';

    printf("Data de nascimento: \n");
    printf("Dia: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_nascimento.dia,temp); 
    cadastro[x].data_nascimento.dia[strcspn(cadastro[x].data_nascimento.dia, "\n")] = '\0';

    printf("Mes: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_nascimento.mes,temp); 
    cadastro[x].data_nascimento.mes[strcspn(cadastro[x].data_nascimento.mes, "\n")] = '\0';

    printf("Ano: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_nascimento.ano,temp); 
    cadastro[x].data_nascimento.ano[strcspn(cadastro[x].data_nascimento.ano, "\n")] = '\0';

    printf("Endereco residencial: \n");
    printf("Rua: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.rua,temp); 
    cadastro[x].end_residencial.rua[strcspn(cadastro[x].end_residencial.rua, "\n")] = '\0';

    printf("Numero: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.num,temp); 
    cadastro[x].end_residencial.num[strcspn(cadastro[x].end_residencial.num, "\n")] = '\0';

    printf("Complemento: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.compl,temp); 
    cadastro[x].end_residencial.compl[strcspn(cadastro[x].end_residencial.compl, "\n")] = '\0';

    printf("Cidade: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.cidade,temp); 
    cadastro[x].end_residencial.cidade[strcspn(cadastro[x].end_residencial.cidade, "\n")] = '\0';

    printf("Estado: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.estado,temp); 
    cadastro[x].end_residencial.estado[strcspn(cadastro[x].end_residencial.estado, "\n")] = '\0';

    printf("CEP: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_residencial.cep,temp); 
    cadastro[x].end_residencial.cep[strcspn(cadastro[x].end_residencial.cep, "\n")] = '\0';

    printf("Telefone residencial: \n");
    printf("DDD: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].phone_residencial.ddd,temp); 
    cadastro[x].phone_residencial.ddd[strcspn(cadastro[x].phone_residencial.ddd, "\n")] = '\0';

    printf("Telefone: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].phone_residencial.tel,temp); 
    cadastro[x].phone_residencial.tel[strcspn(cadastro[x].phone_residencial.tel, "\n")] = '\0';

    printf("Endereco comercial: \n");
    printf("Rua: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.rua,temp); 
    cadastro[x].end_comercial.rua[strcspn(cadastro[x].end_comercial.rua, "\n")] = '\0';

    printf("Numero: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.num,temp); 
    cadastro[x].end_comercial.num[strcspn(cadastro[x].end_comercial.num, "\n")] = '\0';

    printf("Complemento: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.compl,temp); 
    cadastro[x].end_comercial.compl[strcspn(cadastro[x].end_comercial.compl, "\n")] = '\0';

    printf("Cidade: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.cidade,temp); 
    cadastro[x].end_comercial.cidade[strcspn(cadastro[x].end_comercial.cidade, "\n")] = '\0';

    printf("Estado: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.estado,temp); 
    cadastro[x].end_comercial.estado[strcspn(cadastro[x].end_comercial.estado, "\n")] = '\0';

    printf("CEP: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].end_comercial.cep,temp); 
    cadastro[x].end_comercial.cep[strcspn(cadastro[x].end_comercial.cep, "\n")] = '\0';

    printf("Telefone comercial: \n");
    printf("DDD: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].phone_comercial.ddd,temp); 
    cadastro[x].phone_comercial.ddd[strcspn(cadastro[x].phone_comercial.ddd, "\n")] = '\0';

    printf("Telefone: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].phone_comercial.tel,temp); 
    cadastro[x].phone_comercial.tel[strcspn(cadastro[x].phone_comercial.tel, "\n")] = '\0';

    printf("Data de ingresso: \n");
    printf("Dia: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_ingresso.dia,temp); 
    cadastro[x].data_ingresso.dia[strcspn(cadastro[x].data_ingresso.dia, "\n")] = '\0';

    printf("Mes: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_ingresso.mes,temp); 
    cadastro[x].data_ingresso.mes[strcspn(cadastro[x].data_ingresso.mes, "\n")] = '\0';

    printf("Ano: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].data_ingresso.ano,temp); 
    cadastro[x].data_ingresso.ano[strcspn(cadastro[x].data_ingresso.ano, "\n")] = '\0';

    printf("Digite o salario: ");
    fgets(temp,80,stdin); 
    strcpy(cadastro[x].salario,temp); 
    cadastro[x].salario[strcspn(cadastro[x].salario, "\n")] = '\0';
}

apos(struct dados cadastro[5], int t){
    int x[5];
    for(int i=0; i<t; i++){
        sscanf(cadastro[i].data_nascimento.ano, "%d", &x[i]);
        if(x[i] >= 1990){
            printf("\nCadastro %d\n", i+1);
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Identidade: %s\n", cadastro[i].id);
            printf("CPF: %s\n", cadastro[i].cpf);
            printf("Sexo: %s\n", cadastro[i].sexo);
            printf("Estado Civil: %s\n", cadastro[i].eCivil);
            printf("Data de Nascimento: %s/%s/%s\n", cadastro[i].data_nascimento.dia, cadastro[i].data_nascimento.mes, cadastro[i].data_nascimento.ano);
            printf("Endereco residencial: %s, %s (%s), %s-%s, %s\n", cadastro[i].end_residencial.rua, cadastro[i].end_residencial.num, cadastro[i].end_residencial.compl, cadastro[i].end_residencial.cidade, cadastro[i].end_residencial.estado, cadastro[i].end_residencial.cep);
            printf("Telefone residencial: (%s)%s\n", cadastro[i].phone_residencial.ddd, cadastro[i].phone_residencial.tel);
            printf("Endereco comercial: %s, %s (%s), %s-%s, %s\n", cadastro[i].end_comercial.rua, cadastro[i].end_comercial.num, cadastro[i].end_comercial.compl, cadastro[i].end_comercial.cidade, cadastro[i].end_comercial.estado, cadastro[i].end_comercial.cep);
            printf("Telefone comercial: (%s)%s\n", cadastro[i].phone_comercial.ddd, cadastro[i].phone_comercial.tel);
            printf("Data de ingresso: %s/%s/%s\n", cadastro[i].data_ingresso.dia, cadastro[i].data_ingresso.mes, cadastro[i].data_ingresso.ano);
            printf("Salario: %s\n", cadastro[i].salario);
        }
    }
}

copia(struct dados cadastro[5], int t){
    int a, b;
    printf("Digite a posicao que sera copiada: ");
    scanf("%d", &b);
    printf("Digite a posicao a qual sera copiada: ");
    scanf("%d", &a);
    
    strcpy(cadastro[a].nome, cadastro[b].nome);
    strcpy(cadastro[a].id, cadastro[b].id);
    strcpy(cadastro[a].cpf, cadastro[b].cpf);
    strcpy(cadastro[a].sexo, cadastro[b].sexo);
    strcpy(cadastro[a].eCivil, cadastro[b].eCivil);
    strcpy(cadastro[a].data_nascimento.dia, cadastro[b].data_nascimento.dia);
    strcpy(cadastro[a].data_nascimento.mes, cadastro[b].data_nascimento.mes);
    strcpy(cadastro[a].data_nascimento.ano, cadastro[b].data_nascimento.ano);
    strcpy(cadastro[a].end_residencial.rua, cadastro[b].end_residencial.rua);
    strcpy(cadastro[a].end_residencial.num, cadastro[b].end_residencial.num);
    strcpy(cadastro[a].end_residencial.compl, cadastro[b].end_residencial.compl);
    strcpy(cadastro[a].end_residencial.cidade, cadastro[b].end_residencial.cidade);
    strcpy(cadastro[a].end_residencial.estado, cadastro[b].end_residencial.estado);
    strcpy(cadastro[a].end_residencial.cep, cadastro[b].end_residencial.cep);
    strcpy(cadastro[a].phone_residencial.ddd, cadastro[b].phone_residencial.ddd);
    strcpy(cadastro[a].phone_residencial.tel, cadastro[b].phone_residencial.tel);
    strcpy(cadastro[a].end_comercial.rua, cadastro[b].end_comercial.rua);
    strcpy(cadastro[a].end_comercial.num, cadastro[b].end_comercial.num);
    strcpy(cadastro[a].end_comercial.compl, cadastro[b].end_comercial.compl);
    strcpy(cadastro[a].end_comercial.cidade, cadastro[b].end_comercial.cidade);
    strcpy(cadastro[a].end_comercial.estado, cadastro[b].end_comercial.estado);
    strcpy(cadastro[a].end_comercial.cep, cadastro[b].end_comercial.cep);
    strcpy(cadastro[a].phone_comercial.ddd, cadastro[b].phone_comercial.ddd);
    strcpy(cadastro[a].phone_comercial.tel, cadastro[b].phone_comercial.tel);
    strcpy(cadastro[a].data_ingresso.dia, cadastro[b].data_ingresso.dia);
    strcpy(cadastro[a].data_ingresso.mes, cadastro[b].data_ingresso.mes);
    strcpy(cadastro[a].data_ingresso.ano, cadastro[b].data_ingresso.ano);
    strcpy(cadastro[a].salario, cadastro[b].salario);
}

int main() {
    struct dados cadastro[5];
    
    //(a) Atribuição para cadastro
    strcpy(cadastro[0].nome, "Joao Carlos da Silva");
    strcpy(cadastro[0].id, "54.487.659");
    strcpy(cadastro[0].cpf, "125.354.487-68");
    strcpy(cadastro[0].sexo, "M");
    strcpy(cadastro[0].eCivil, "Casado");
    strcpy(cadastro[0].data_nascimento.dia, "02");
    strcpy(cadastro[0].data_nascimento.mes, "12");
    strcpy(cadastro[0].data_nascimento.ano, "1985");
    strcpy(cadastro[0].end_residencial.rua, "Rua Valerio Costa");
    strcpy(cadastro[0].end_residencial.num, "254");
    strcpy(cadastro[0].end_residencial.compl, "Predio B");
    strcpy(cadastro[0].end_residencial.cidade, "Uberlandia");
    strcpy(cadastro[0].end_residencial.estado, "MG");
    strcpy(cadastro[0].end_residencial.cep, "38.412-987");
    strcpy(cadastro[0].phone_residencial.ddd, "045");
    strcpy(cadastro[0].phone_residencial.tel, "99856-8775");
    strcpy(cadastro[0].end_comercial.rua, "Av Sao Jose");
    strcpy(cadastro[0].end_comercial.num, "1542");
    strcpy(cadastro[0].end_comercial.compl, "Sala 3C");
    strcpy(cadastro[0].end_comercial.cidade, "Uberlandia");
    strcpy(cadastro[0].end_comercial.estado, "MG");
    strcpy(cadastro[0].end_comercial.cep, "38.412-245");
    strcpy(cadastro[0].phone_comercial.ddd, "045");
    strcpy(cadastro[0].phone_comercial.tel, "93558-8755");
    strcpy(cadastro[0].data_ingresso.dia, "31");
    strcpy(cadastro[0].data_ingresso.mes, "08");
    strcpy(cadastro[0].data_ingresso.ano, "2014");
    strcpy(cadastro[0].salario, "RS 5680,54");

    strcpy(cadastro[1].nome, "Mariana Goncalves Costa");
    strcpy(cadastro[1].id, "45.658.943");
    strcpy(cadastro[1].cpf, "457.463.248-45");
    strcpy(cadastro[1].sexo, "F");
    strcpy(cadastro[1].eCivil, "Solteira");
    strcpy(cadastro[1].data_nascimento.dia, "02");
    strcpy(cadastro[1].data_nascimento.mes, "10");
    strcpy(cadastro[1].data_nascimento.ano, "1997");
    strcpy(cadastro[1].end_residencial.rua, "Rua Amarindo Camargo");
    strcpy(cadastro[1].end_residencial.num, "131");
    strcpy(cadastro[1].end_residencial.compl, "Casa");
    strcpy(cadastro[1].end_residencial.cidade, "Vale Azul");
    strcpy(cadastro[1].end_residencial.estado, "MG");
    strcpy(cadastro[1].end_residencial.cep, "38.412-588");
    strcpy(cadastro[1].phone_residencial.ddd, "078");
    strcpy(cadastro[1].phone_residencial.tel, "99754-6853");
    strcpy(cadastro[1].end_comercial.rua, "Av Sao Jose");
    strcpy(cadastro[1].end_comercial.num, "1542");
    strcpy(cadastro[1].end_comercial.compl, "Sala 3C");
    strcpy(cadastro[1].end_comercial.cidade, "Uberlandia");
    strcpy(cadastro[1].end_comercial.estado, "MG");
    strcpy(cadastro[1].end_comercial.cep, "38.412-245");
    strcpy(cadastro[1].phone_comercial.ddd, "045");
    strcpy(cadastro[1].phone_comercial.tel, "93558-8755");
    strcpy(cadastro[1].data_ingresso.dia, "05");
    strcpy(cadastro[1].data_ingresso.mes, "06");
    strcpy(cadastro[1].data_ingresso.ano, "2013");
    strcpy(cadastro[1].salario, "RS 5897,40");

    strcpy(cadastro[2].nome, "Caio Silveira");
    strcpy(cadastro[2].id, "35.457.986");
    strcpy(cadastro[2].cpf, "356.548.678-92");
    strcpy(cadastro[2].sexo, "M");
    strcpy(cadastro[2].eCivil, "Solteiro");
    strcpy(cadastro[2].data_nascimento.dia, "14");
    strcpy(cadastro[2].data_nascimento.mes, "12");
    strcpy(cadastro[2].data_nascimento.ano, "1989");
    strcpy(cadastro[2].end_residencial.rua, "Rua Valerio Costa");
    strcpy(cadastro[2].end_residencial.num, "348");
    strcpy(cadastro[2].end_residencial.compl, "Bloco C");
    strcpy(cadastro[2].end_residencial.cidade, "Araraquara");
    strcpy(cadastro[2].end_residencial.estado, "SP");
    strcpy(cadastro[2].end_residencial.cep, "54.248-986");
    strcpy(cadastro[2].phone_residencial.ddd, "065");
    strcpy(cadastro[2].phone_residencial.tel, "98564-9831");
    strcpy(cadastro[2].end_comercial.rua, "Rua Amaro Delgado");
    strcpy(cadastro[2].end_comercial.num, "653");
    strcpy(cadastro[2].end_comercial.compl, "Predio Unico");
    strcpy(cadastro[2].end_comercial.cidade, "Araraquara");
    strcpy(cadastro[2].end_comercial.estado, "SP");
    strcpy(cadastro[2].end_comercial.cep, "54.248-512");
    strcpy(cadastro[2].phone_comercial.ddd, "065");
    strcpy(cadastro[2].phone_comercial.tel, "95452-8614");
    strcpy(cadastro[2].data_ingresso.dia, "16");
    strcpy(cadastro[2].data_ingresso.mes, "09");
    strcpy(cadastro[2].data_ingresso.ano, "2018");
    strcpy(cadastro[2].salario, "RS 3152,54");

    strcpy(cadastro[3].nome, "Carina Amaral");
    strcpy(cadastro[3].id, "45.615.354");
    strcpy(cadastro[3].cpf, "345.658.945-95");
    strcpy(cadastro[3].sexo, "F");
    strcpy(cadastro[3].eCivil, "Solteiro");
    strcpy(cadastro[3].data_nascimento.dia, "09");
    strcpy(cadastro[3].data_nascimento.mes, "11");
    strcpy(cadastro[3].data_nascimento.ano, "1992");
    strcpy(cadastro[3].end_residencial.rua, "Rua Amada Souza");
    strcpy(cadastro[3].end_residencial.num, "356");
    strcpy(cadastro[3].end_residencial.compl, "Ap 23B");
    strcpy(cadastro[3].end_residencial.cidade, "Rosa Branca");
    strcpy(cadastro[3].end_residencial.estado, "MT");
    strcpy(cadastro[3].end_residencial.cep, "36.356-692");
    strcpy(cadastro[3].phone_residencial.ddd, "098");
    strcpy(cadastro[3].phone_residencial.tel, "8245-9622");
    strcpy(cadastro[3].end_comercial.rua, "Av Belardino Belo");
    strcpy(cadastro[3].end_comercial.num, "362");
    strcpy(cadastro[3].end_comercial.compl, "Sala 45");
    strcpy(cadastro[3].end_comercial.cidade, "Rosa Branca");
    strcpy(cadastro[3].end_comercial.estado, "MT");
    strcpy(cadastro[3].end_comercial.cep, "36.356-254");
    strcpy(cadastro[3].phone_comercial.ddd, "098");
    strcpy(cadastro[3].phone_comercial.tel, "3226-8665");
    strcpy(cadastro[3].data_ingresso.dia, "27");
    strcpy(cadastro[3].data_ingresso.mes, "10");
    strcpy(cadastro[3].data_ingresso.ano, "2016");
    strcpy(cadastro[3].salario, "RS 3659,02");

    strcpy(cadastro[4].nome, "Joana Freitas");
    strcpy(cadastro[4].id, "51.364.895");
    strcpy(cadastro[4].cpf, "256.945.694-65");
    strcpy(cadastro[4].sexo, "F");
    strcpy(cadastro[4].eCivil, "Viuva");
    strcpy(cadastro[4].data_nascimento.dia, "06");
    strcpy(cadastro[4].data_nascimento.mes, "01");
    strcpy(cadastro[4].data_nascimento.ano, "1984");
    strcpy(cadastro[4].end_residencial.rua, "Rua Valdemir Brando");
    strcpy(cadastro[4].end_residencial.num, "65");
    strcpy(cadastro[4].end_residencial.compl, "Casa");
    strcpy(cadastro[4].end_residencial.cidade, "Uberlandia");
    strcpy(cadastro[4].end_residencial.estado, "MG");
    strcpy(cadastro[4].end_residencial.cep, "38.412-356");
    strcpy(cadastro[4].phone_residencial.ddd, "034");
    strcpy(cadastro[4].phone_residencial.tel, "99451-6532");
    strcpy(cadastro[4].end_comercial.rua, "Av Mario Atiade");
    strcpy(cadastro[4].end_comercial.num, "187");
    strcpy(cadastro[4].end_comercial.compl, "Sala 990");
    strcpy(cadastro[4].end_comercial.cidade, "Uberlandia");
    strcpy(cadastro[4].end_comercial.estado, "MG");
    strcpy(cadastro[4].end_comercial.cep, "38.412-641");
    strcpy(cadastro[4].phone_comercial.ddd, "034");
    strcpy(cadastro[4].phone_comercial.tel, "3662-1478");
    strcpy(cadastro[4].data_ingresso.dia, "23");
    strcpy(cadastro[4].data_ingresso.mes, "03");
    strcpy(cadastro[4].data_ingresso.ano, "2019");
    strcpy(cadastro[4].salario, "RS 4121,25");
    
    //(b) Funções

    int n, t=5;
    char temp[100];

    printf("\n\n << Cadastro de Usuários >> \n\n");
    printf("1 - Listar todos os cadastros\n");
    printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
    printf("3 - Listar as pessoas que nasceram depois de 1990\n");
    printf("4 - Copiar dados de um cadastro para outro\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    fgets(temp, 50, stdin);
    sscanf(temp, "%d", &n);

    while (n!=0)
    {   
        if(n==1){
            printar(cadastro, t);
        }
        else if(n==2){
            novo(cadastro);
        }
        else if(n==3){
            apos(cadastro, t); 
        }
        else if(n==4){
            copia(cadastro, t);
        }

        printf("\n\n << Cadastro de Usuários >> \n\n");
        printf("1 - Listar todos os cadastros\n");
        printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
        printf("3 - Listar as pessoas que nasceram depois de 1990\n");
        printf("4 - Copiar dados de um cadastro para outro\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        fgets(temp, 50, stdin);
        sscanf(temp, "%d", &n);

        if(n==0){
            return 0;
        }
    }    
    return 0;
}
/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/