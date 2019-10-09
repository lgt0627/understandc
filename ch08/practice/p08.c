#include <stdio.h>

int gcd(int x, int y)
{
	int m;
	if (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
		m = gcd(x, y);
	}
	else
		m = x;
	return m;




}

int main (int argc, char const *argv[])
{	int i, j;
	printf("输入两个数\n");
	printf("输入整数A：\n");
	scanf("%d", &i);
	printf("输入整数B：\n");
	scanf("%d", &j);
	printf("%d和%d的最大公约数是：%d\n", i, j, gcd(i, j) );
}