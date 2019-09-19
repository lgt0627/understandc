#include <stdio.h>
int main(int argc, char const *rgv[])
{	int j;
	int i = 0;
	printf("输入一个正整数\n");
	scanf("%d", &j);
	printf("\n");
	while (i < j) {
		i++;

		printf("%d\n", i * i );
	}
}