#include <stdio.h>
int main (void)
{
	int x[4][3] = {};
	int y[3][4] = {};

	int i, j, n, m, a, b;
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
	for (i = 0; i < 4; i++) {
		n = 0;
		m = 0;
		a = 0;
		b = 0;
		for (j = 0; j < 3; j++) {
			
			n += x[i][j] * y[j][0];
			m += x[i][j] * y[j][1];
			a += x[i][j] * y[j][2];
			b += x[i][j] * y[j][3];


		}
		printf("%2d ", n);
		printf("%2d ", m);
		printf("%2d ", a);
		printf("%2d ", b);

		printf("\n");
	}
	return 0;



}