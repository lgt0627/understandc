#include <stdio.h>
int main(int argc,char const *rgv[])
{
    double n1, n2;

    puts("请输入两个整数：");
    printf("整数A："); scanf("%lf", &n1);
    printf("整数B："); scanf("%lf", &n2);

    printf("A%%B=%.1f\n",n1/n2);
    return 0;
}
