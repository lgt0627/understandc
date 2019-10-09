#include <stdio.h>


#include "util.c"


int main(void)
{

    int m;

    puts("求1到m的和。");
    printf("整数m:"); scanf("%d", &m);


    printf("1到%d是%d。\n", m, sumup( m));

    return 0;
}