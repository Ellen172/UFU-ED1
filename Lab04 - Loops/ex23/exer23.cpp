#include<stdio.h>

int main() {
    printf("<< Numero Neperiano >> \n\n");

	int n;
    double nep=1, f=1; 

    printf("Entre com o quantidade de termos: ");
    scanf("%f", &n);
    
    for(int i=1; i<=n; i++){
        f*=i;
        nep += 1/f;
    }

    printf("e ~ %.14lf\n", nep);

    return 0;
}

