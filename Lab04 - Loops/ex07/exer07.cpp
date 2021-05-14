#include<stdio.h>

int main(){
	printf("==Contagem progressiva==\n\n");
	
	int n;
	
	printf("Insira o numero de onde comecara a contagem: ");
	scanf("%d", &n);
	
	while(n<=0){
		printf("%d.. ", n);
		n++;
	}
	printf("FIM!\n");
	
	return 0;
}
