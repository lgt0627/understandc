#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	printf("请输入两个整数\n");
	printf("第一个整数：");
    scanf("%d", &a);
	printf("第二个整数：");
	scanf("%d", &b);
	printf("它们的积是%d\n", a*b);
	

	return 0;
}