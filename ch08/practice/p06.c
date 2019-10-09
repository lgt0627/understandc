#include <stdio.h>


int factorial(int n)

{
	int j = 1;
	for (int i = 1; i <= n; i++) {
		j *= i;
	}
	return j;
}

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d的阶乘为%d\n", num, factorial(num));

	return 0;
}