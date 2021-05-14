#include<stdio.h>

int main() {
	printf("<< Fatorial >> \n\n");
	
	long long int f;
	int n=10; 
	/*
	Com int retornaria erro, pois ele nao possui espaco de 
	armazenamento suficiente para numeros tao grandes quanto 13! 
	*/
	
	for (int i=1; i<=n; i++){
		f*=i;	
		printf("%lld! = %lld\n", i, f);
	}
	

	
	return 0;
}

