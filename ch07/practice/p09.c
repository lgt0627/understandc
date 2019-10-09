#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;

	puts("请输入一个正方形的面积：");
	scanf("%d", &a);
	printf("该正方形的边长为：%.2f", sqrt(a));

	return 0;
}
