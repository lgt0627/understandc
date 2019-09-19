#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int x, y;
	double z;

	printf("请输入两个整数\n");
	printf("第一个整数\n");
	scanf("%d", &x);
	printf("第一个整数\n");
	scanf("%d", &y);
	z = 1.0 * (x * 100) / y;

	printf("前者是后者的%.2f%%\n", z);

}