#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))
int main(int argc, char const *argv[])
{
	double x, y;
	printf("输入两个数:\n");
	printf("整数A：");
	scanf("%lf", &x);
	printf("整数B：");
	scanf("%lf", &y);

	printf("A,B最大值是：%1.f\n", max(x, y) );
}