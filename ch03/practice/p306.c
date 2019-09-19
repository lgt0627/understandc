#include <stdio.h>
int main(int argc, char const *rgv[])
{	int inputFirst, inputSec, inputThird;
	printf("输入三个整数");
	printf("整数A:");
	scanf("%d", &inputFirst);
	printf("整数B:");
	scanf("%d", &inputSec);
	printf("整数c:");
	scanf("%d", &inputThird);
	if (inputFirst < inputThird && inputFirst < inputSec)
	{printf("最小值是%d\n", inputFirst);}
	else if (inputSec < inputThird && inputSec < inputFirst)
	{printf("最小值是%d\n", inputSec);}
	else {printf("最小值是%d\n", inputThird);}




	return 0;
}