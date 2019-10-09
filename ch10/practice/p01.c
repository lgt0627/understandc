#include <stdio.h>

void adjust_point(int *n) {
	if (*n < 0) {printf("0\n");}
	else if (*n > 100) {printf("100\n");}
	else {printf("*n\n");}


}
int main(void)
{	int n;
	puts("输入一个数：");
	scanf("%d", &n);

	printf("你输入的数是：");
	adjust_point(&n);

	return 0;
}