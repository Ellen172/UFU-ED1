#include<stdio.h>

int main() {
	printf("<< Equacao de segundo grau >> \n\n");
	
	int a, b, c, raiz, delta;
	
	printf("Entre com o valor a: ");
	scanf("%d", &a);
	printf("Entre com o valor b: ");
	scanf("%d", &b);
	printf("Entre com o valor c: ");
	scanf("%d", &c);
	
	delta = (b*b) - (4 * a * c);
	raiz = sqrt(delta);
	
	if(raiz%10 !=0) { //se a raiz nao for divisivel por zero, nao for um numero natural.
		int x = (b * -1);
		
		if(x%(a*2)==0){
			printf("x1 = %d + sqrt(%d)\n", x, delta);
			printf("x2 = %d - sqrt(%d)\n", x, delta);
		}
		else {
			printf("x1 = (%d + sqrt(%d) )/ %d\n", x, delta, (2*a));
			printf("x2 = (%d - sqrt(%d) )/ %d\n", x, delta, (2*a));
		}
	}
	else if(delta > 0){
		int x1, x2;
		
		x1 = (b*-1) - raiz;
		x2 = (b*-1) + raiz;
		
		if(x1%(a*2) == 0){
			printf("x1 = %d\n", x1/(a*2));
		}
		else {
			x1 = (b*-1)-raiz;
			printf("x1 = %d / %d\n", x1, (a*2));
		}
		
		if(x2%(2*a) == 0){
			printf("x2 = %d\n", x2/(a*2));
		}
		else {
			x2 = (b*-1)+raiz;
			printf("x2 = %d / %d\n", x2, (a*2));
		}
	}
	else if(delta == 0){
		int x;
		x = b*-1;
		if(x%(2*a)==0){
			printf("x = %d\n", x/(a*2));
		}
		else {
			printf("x = %d / %d\n", x, (a*2));
		}
	}
	else {
		delta *=-1;
		raiz = sqrt(delta);
		
		if( (b*-1)%(a*2) == 0 && raiz%(2*a) == 0){
			printf("x1 = %d - %di\n", (b*-1)/(a*2), raiz/(2*a));
			printf("x2 = %d + %di\n", (b*-1)/(a*2), raiz/(2*a));
		}
		else if( (b*-1)%(a*2) != 0 && raiz%(2*a) == 0){
			printf("x1 = (%d / %d) - %di\n", (b*-1), (a*2), raiz/(2*a));
			printf("x2 = (%d / %d) + %di\n", (b*-1), (a*2), raiz/(2*a));
		}
		else if( (b*-1)%(a*2) == 0 && raiz%(2*a) != 0){
			printf("x1 = %d - (%di / %d)\n", (b*-1)/(a*2), raiz, (2*a));
			printf("x2 = %d + (%di / %d)\n", (b*-1)/(a*2), raiz, (2*a));
		}
		else {
			printf("x1 = (%d - %di) / %d\n", (b*-1), raiz, (2*a));
			printf("x2 = (%d + %di) / %d\n", (b*-1), raiz, (2*a));
		}
	}
	
	return 0;
}
