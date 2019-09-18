#include <stdio.h>
int main(int argc,char const *rgv[])
{
    int n1, n2;

    puts("请输入两个整数：");
    printf("整数A："); scanf("%d", &n1);
    printf("整数B："); scanf("%d", &n2);

    printf("A*B=%d\n",n1*n2);
    return 0;
}
