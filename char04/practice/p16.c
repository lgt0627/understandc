#include <stdio.h>
int main(int argc, char const *rgv[])
{	int j;
	int i = 1;
	printf("输入一个正整数\n");
	scanf("%d", &j);
	printf("\n");
	while (i < j) {
		
		printf("%d\n", i );
		i = i + 2;
	}
}