#include <stdio.h>
#include "util.c"
#define NUM 80


int main(int argc, char const *argv[])
{
	int i, n, v[NUM];
	printf("请输入数组的元素个数:");
	scanf("%d", &n);

	printf("请输入数组各元素的值:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}



	printf("数组倒序后为:");
	printf("{");
	rev_intary(v, n);

	printf("}");
	return 0;
}

