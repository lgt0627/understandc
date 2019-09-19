#include <stdio.h>

int main(void)
{
    int i , j;
    int a, b;
    int height, width;
    puts("让我们来画一个长方形。");
    printf("一边长："); scanf("%d", &a);
    printf("另一边长："); scanf("%d", &b);
    if (a <= b)
    {   height = a;
        width = b;
    }
    else {
        height = b;
        width = a;
    }

    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}