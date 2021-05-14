#include<stdio.h>

int main() {
	printf("<< Forca de uma letra so >> \n\n");
	
	int n=5;
	char c, resp = 'g';

	while(n>0){
		n--;
		printf("Qual a letra? ");
		setbuf(stdin,NULL);
		scanf("%c", &c);
		
		if(c==resp){
			printf("ACERTOU!\n");
			return 0;
		}
		
		else if(n==1){
			printf("Ultima Chance!!!\n");
		}
		
		else if(n==0){
			printf("Acabaram suas chances! A letra correta eh %c\n", resp );
		}

		else {
			printf("Errado! Voce tem mais %d chances\n", n);
		}
	}
	
	
	
	return 0;
}
