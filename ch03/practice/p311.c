#include <stdio.h>
int main (int argc, char const *rgv[])
{
	int a,b;
	printf("输入两个整数\n");
	printf("整数A：");
	scanf("%d",&a);
	printf("整数B：");
	scanf("%d",&b);
	(((a-b)*(a-b))>100)?printf("它们的差大于10"):printf("它们的差小于10");
}