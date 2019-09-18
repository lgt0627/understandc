#include <stdio.h>
int main(int argc, char const *rgv[])
{
	
	double height,weight;
	
	printf("请输入你的身高\n");
	
	scanf("%lf",&height);
	weight=(height-100)*0.9;

	printf("您的标准体重是%.1f\n",weight);
	}