#include <stdio.h>
int main(int argc, char const *rgv[])
{	int C;


	do {
		double a, b;
		printf("输入两个整数\n");
		printf("A:\n");
		scanf("%lf", &a);
		printf("B:\n");
		scanf("%lf", &b);
		printf("它们的平均值是%.1f\n", (a + b) / 2 );
		printf("还要继续吗[继续---1  退出---0]\n");
		scanf("%d", &C);

	} while (C != 0);


	return 0;
}