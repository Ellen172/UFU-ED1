#include<stdio.h>

int main(){
	printf("<<Contagem Regressiva>>\n\n");
	
	int n;
	
	printf("Digite o valor de inicio: ");
	scanf("%d", &n);
	
	for (int i=n; i>=0; i--){
		printf("%d... ", i);
	}
	printf("FIM!");

	return 0;
}
