#include <stdio.h>
int main(int argc,char const *rgv[])
{
	double a, b;
	printf("请分别给出长方形的长和高\n");
	printf("长：\n");
	scanf("%lf",&a);
	printf("高：");
	scanf("%lf",&b);
	printf("它们的面积是%.1f",a*b);
}