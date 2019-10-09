#include <stdio.h>
#define swap(int, a,b)int c;c=a;a=b;b=c;
int main(int argc, char const *argv[])
{
	int x, y, z;
	printf("输入两个数:\n");
	printf("整数A：");
	scanf("%d", &x);
	printf("整数B：");
	scanf("%d", &y);
	swap(int, x, y);

	printf("A,B换值后,A:%d B:%d\n", x, y );
}