#include <stdio.h>

#include "util.c"


int main(void)
{
    int a;


    puts("求a的4次幂。");
    printf("实数a:"); scanf("%d", &a);


    printf("%5d的4次幂是%5d。\n", a, power(a));

    return 0;
}