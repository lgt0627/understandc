#include <stdio.h>
int main(int argc, char const *rgv[])
{	int a, b;
	printf("输入一个整数\n");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		b += i;
	}
	printf("1到%d的和是%d\n", a, b );
	return 0;
}