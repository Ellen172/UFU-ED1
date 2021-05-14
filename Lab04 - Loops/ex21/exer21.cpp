#include<stdio.h>

int main() {
	printf("<< Fatorial >> \n\n");
	
	int n=1, f;
	
	while(n<=10){
		f=1;
		for (int i=1; i<=n; i++){
			f*=i;	
		}
		printf("%d! = %d\n", n, f);
		n++;
	}
	
	return 0;
}
