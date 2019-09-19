#include <stdio.h>

int main(void)
{
    int no,i;
    i=1;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    } while (no <= 0);

    printf("该整数有位数是：");
    while (no > 0) {
        no=no/10;
        if(no<=0){printf("%d",i);}
            i++;

     }

    puts("。");

    return 0;
}