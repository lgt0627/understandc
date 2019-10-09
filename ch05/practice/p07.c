#include <stdio.h>
# define NUM 80
int main (void) {
	int i, j, k;
	int x[NUM];
	printf("请在0～80的范围内选择数据个数：\n");
	scanf("%d", &i);
	for (j = 0; j < i; j++) {
		printf("请输入一个值：\n");
		scanf("%d", &x[i]);


	}
	printf("{\n");
	for (j = 0; j < i; j++) {
		printf(" %d,", x[i]);
	}
	printf("\n}\n");
	return 0;

}