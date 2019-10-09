#include <stdio.h>
#include "util.c"

// #define NUM 80

 // int main(int argc, char const *argv[])
int main(void)
{
	int x[4][3] = {};
	int y[3][4] = {};
	int m[4][4] = {};

	int i, j,  k;
	for (i = 0; i < 4; i++) {
		printf("输入4行3列矩阵第%d行数字\n", i + 1);
		for (j = 0; j < 3; j++) {

			scanf("%d", &x[i][j]);

		}

	}
	for (i = 0; i < 3; i++) {
		printf("输入3行4列第%d行数字\n", i + 1);
		for (j = 0; j < 4; j++) {

			scanf("%d", &y[i][j]);
		}
	}
	printf("它们的乘积是：\n");

	mat_mul(x, y, m);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%2d ", m[i][j] );
		}
		printf("\n");
	}
	return 0;
}