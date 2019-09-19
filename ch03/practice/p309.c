#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int n1, n2;

	puts("请输入两个整数：");
	printf("整数1："); scanf("%d", &n1);
	printf("整数2："); scanf("%d", &n2);


	(n1 == n2) ? printf("它们相等") : printf("它们不想等" );
	return 0;
}
