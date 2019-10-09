#include <stdio.h>
#include "util.c"



int main(int argc, char const *argv[]) {
	
	int i, n, v[n];
	
	printf("请输入数组的元素个数:");
	scanf("%d", &n);

	printf("请输入数组各元素的值:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	printf("\n");
	
	printf("%d\n", min_of(v, n));

	return 0;
}