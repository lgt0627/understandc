#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("请输入三个整数\n");
	printf("第一个整数：");
    scanf("%d", &a);
	printf("第二个整数：");
	scanf("%d", &b);
	printf("第三个整数：");
	scanf("%d", &c);
	printf("它们的和是%d\n", a+b+c);
	

	return 0;
}