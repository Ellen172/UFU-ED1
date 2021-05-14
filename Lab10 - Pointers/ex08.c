#include<stdio.h>

int main() {
    void *p;
    int a;
    double b;

    p = &a;

    printf("Digite o valor int: ");
    scanf("%d", (int *)p);
    printf("%d\n", *(int *)p);

    p = &b;
    printf("Digite o valor double: ");
    scanf("%lf", (double *)p);  
    printf("%lf\n", *(double *)p);

    return 0;
}