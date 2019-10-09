#include <stdio.h>

int main(void)
{
    unsigned a, b, c, i, j, m, n, q;
    printf("请输入一个非负整数。\n");
    printf("a: "); scanf("%u", &a);
    printf("你要左移几位：\n");
    scanf("%d", &i);
    printf("你要右移几位：\n");
    scanf("%d", &j);
    n = a;
    q = a;
    for (m = 0; m < i; m++)
    {   n *= 2;
        b = n;
    }
    for (m = 0; m < j; m++)
    {   q /= 2;
        c = q;
    }

    printf("a*2^i无符号表示：%u", b);
    printf("\n");
    printf("a/2^j无符号表示：%u", c);
    printf("\n");

    printf("无符号整数位左移后的值:%u", a << i);
    printf("\n");
    printf("无符号整数位右移后的值:%u", a >> j);
    printf("\n");

    return 0;
}