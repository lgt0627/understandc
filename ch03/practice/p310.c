#include <stdio.h>
int main(int argc, char const *rgv[])
{	int inputFirst, inputSec, inputThird;
	printf("输入三个整数\n");
	printf("整数A:");
	scanf("%d", &inputFirst);
	printf("整数B:");
	scanf("%d", &inputSec);
	printf("整数c:");
	scanf("%d", &inputThird);
	if (inputFirst == inputThird && inputFirst == inputSec)
	{printf("三值相等");}
	else if (inputSec == inputThird || inputSec == inputFirst || inputThird == inputFirst)
	{printf("两值相等");}
	else {printf("三值各不相同");}




	return 0;
}