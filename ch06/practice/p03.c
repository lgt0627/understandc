#include <stdio.h>
#include <math.h>
#include "util.c"


int main(void)
{
	int x;

	puts("请输入一个整数。");
	printf("整数x:"); scanf("%d", &x);


	printf("x的立方差是%d。\n", cube(x));

	return 0;
}
