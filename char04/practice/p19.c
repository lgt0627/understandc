#include <stdio.h>

int main(void)
{
	int i , n, j;
	j = 0;

	printf("整数值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++) {
		if (n % i == 0) {
			j = j + 1;
			printf("%d ", i);
		}
	}
	printf("约数有%d个\n", j );

	return 0;
}