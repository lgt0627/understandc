#include <stdio.h>
#define diff(x,y) (x-y)
int main(int argc, char const *argv[])
{
	double x, y;
	printf("输入两个数:\n");
	printf("整数A：");
	scanf("%lf", &x);
	printf("整数B：");
	scanf("%lf", &y);
	if (x >= y)
		printf("A-B=:%1.f\n", diff(x, y) );
	else

		printf("A-B=:%1.f\n", diff(y, x) );


}