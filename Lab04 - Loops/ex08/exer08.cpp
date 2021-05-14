#include<stdio.h>

int main(){
	printf("==Contagem progressiva==\n\n");
	
	int n;
	
	printf("Insira o numero de onde comecara a contagem: ");
	scanf("%d", &n);
	
	do{
		printf("%d.. ", n);
		n++;
	}while(n<=0);
	printf("FIM!\n");

	//Em do..while o valor do contador será aumentado antes de ser avaliado pelo while, podendo ocorrer erros;
	
	return 0;
}
