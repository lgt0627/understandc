#include <stdio.h>


int combination(int n, int r)

{	int m;
	if (r == 0 || r == n)
		return m = 1;
	else if (r == 1)
		return m = n;
	else {
		m = combination(n - 1, r - 1) + combination(n - 1, r);
		return m;
	}


}

int main(void)
{
	int num, num1;

	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("你想取出几个数？\n");
	scanf("%d", &num1);

	printf("从%d个不同整数中取出%d个整数的组合数:%d\n", num, num1, combination(num, num1));

	return 0;
}