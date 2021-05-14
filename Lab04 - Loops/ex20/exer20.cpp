#include<stdio.h>

int main(){
	printf("<<Triangulo de Floyd>>\n\n");
	
	int n, l=1;
	printf("Insira a quantidade de linhas: ");
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++){
		int x=1;
		
		while(x!=i) {
			printf("%d ", l);
			l++;
			x++;
		}
		
		if (x==i) {
			printf("%d\n", l);
			l++; 
		}
	}
	
	return 0;
}
