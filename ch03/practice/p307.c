#include <stdio.h>
int main(int argc, char const *rgv[])
{	int inputFirst, inputSec, inputThird, D;
	printf("输入四个整数");
	printf("整数A:");
	scanf("%d", &inputFirst);
	printf("整数B:");
	scanf("%d", &inputSec);
	printf("整数c:");
	scanf("%d", &inputThird);
	printf("整数d:");
	scanf("%d", &D);
	if (inputFirst > inputThird && inputFirst > inputSec && inputFirst > D)
	{printf("最大值是%d\n", inputFirst);}
	else if (inputSec > inputThird && inputSec > inputFirst && inputSec > D)
	{printf("最大值是%d\n", inputSec);}
	else if (inputThird > inputFirst && inputThird > inputSec && inputThird > D)
	{printf("最大值是%d\n", inputThird);}
	else {printf("最大值是%d\n", D );}




	return 0;
}