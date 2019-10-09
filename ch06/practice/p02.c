#include <stdio.h>

#include "util.c"


int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);


    printf("最小的值是%d。\n", min2(a, b));

    return 0;
}