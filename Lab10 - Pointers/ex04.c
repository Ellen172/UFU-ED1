#include<stdio.h>

int main() {
    int val[5] = {2,4,5,8,10};
    int *end0, *end1, *end2, *end3, *end4;

    end0 = &val[0];
    end1 = &val[1];
    end2 = &val[2];
    end3 = &val[3];
    end4 = &val[4];

    *end0 -=1;
    *end1 -=1;
    *end2 -=1;
    *end3 -=1;
    *end4 -=1;

    printf("\nOs valores de val sao: %d, %d, %d, %d, %d\n", *end0, *end1, *end2, *end3, *end4);

    return 0;
}