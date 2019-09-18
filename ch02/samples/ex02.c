#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int x;
	printf("请输入一个整数\n");
	scanf("%d",&x);
	printf("它的个位数是%d\n",x%10);

}