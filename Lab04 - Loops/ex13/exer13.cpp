#include<stdio.h>

int main() {
	printf("<< Multiplos >>\n\n");
	
	int n, i, j, k=0, l=0;
	
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	printf("Entre com o valor de i: ");
	scanf("%d", &i);
	printf("Entre com o valor de j: ");
	scanf("%d", &j);
	
	
	while(l<n){
		if(k==0){
			if(k%i==0 || k%j==0){
				printf("Os multiplos de i ou j sao: %d", k);
				l++;
			}
		}
		else if(k%i==0 || k%j==0){
			printf(", %d", k);
			l++;
		}
		k++;
	}
	
	return 0;
}
