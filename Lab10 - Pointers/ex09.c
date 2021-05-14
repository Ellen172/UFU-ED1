#include<stdio.h>

int main() {
    double vet[10]={1.5,2.7,4.3,7.4,5.0,6.7,6.7,1.8,3.9,1.07};

    for(int i=0; i<10; i++){
        printf("%.2lf ", *(vet+i));
    }
    printf("\n");

    return 0;
}