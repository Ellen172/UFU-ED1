#include<stdio.h>

int main() {
    int vet[10]={0,1,2,3,4,5,6,7,8,9};

    for(int i=9; i>=0; i--){
        printf("%d ", *(vet+i));
    }
    printf("\n");

    return 0;
}