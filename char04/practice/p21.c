#include <stdio.h>
int main(int argc, char const *rgv[])
{	int i, j, n;
	printf("请给正方形一个边长吧：\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{

		for (j = 1; j <= n; j++)

		{printf("*" );}

		putchar('\n');
	}

	putchar('\n');

	return 0;
}