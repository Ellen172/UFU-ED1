#include<stdio.h>

int main(){
	printf("==Contagem progressiva==\n\n");
	
	int n;
	
	printf("Insira o numero de onde comecara a contagem: ");
	scanf("%d", &n);
	
	for(int i=n; i<=0; i++){
		printf("%d.. ", i);
	}
	printf("FIM!\n");
	
	return 0;
}
