#include<stdio.h>

int main() {
	double jose=50000, carlos=25000;
	int mais=-1, count=0;
	
	while(mais<0){
		carlos+=3000;
		jose+=800;
		count++;
		mais = carlos-jose;
	}
	
	printf("Vai levar %d mes(es)\n", count);
	
	return 0;
}
