#include <stdio.h>
#include "util.c"
#define NUM 80


int main(int argc, char const *argv[])
{
	int i, n, v1[NUM], v2[NUM];
	printf("请输入数组A的元素个数:");
	scanf("%d", &n);

	printf("请输入数组各元素的值:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v2[i]);
	}


	intary_rcpy(v1, v2, n);

	printf("数组倒序后为:");
	printf("数组B{");
	for (i = 0; i < n; i++) {
		printf("%d ", v1[i]);
	}
	printf("}");
	return 0;
}

