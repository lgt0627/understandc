#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int inputFirst,inputSec;
	printf("请输入两个整数\n");
	printf("第一个整数\n");
	scanf("%d",&inputFirst);
	printf("第二个整数\n");
	scanf("%d",&inputSec);
	printf("这两个数的平均值是%.1f\n",((double)(inputFirst+inputSec))/2);

}