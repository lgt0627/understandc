#include <stdio.h>
#include "util.c"
// #define NUM 80
int main (void)
// int main(int argc, char const *argv[])
{
int i, n, v1[n], v2[n],key;
	printf("请输入数组A的元素个数:");
	scanf("%d", &n);

	printf("请输入数组各元素的值:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v2[i]);
	}
	n = search_idx(v2,v1,key,n);
	for(i=0;i<n;i++)
	printf("%d ",v1[i] );
printf("}\n");
return 0;


}