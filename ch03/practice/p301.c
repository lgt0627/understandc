#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int inputFirst,inputSec;
	printf("请输入俩个整数\n");
	printf("整数A:\n");
	scanf("%d",&inputFirst);
	printf("整数B:\n");
	scanf("%d",&inputSec);
	if(inputSec&inputFirst){
    puts("B不是A的约数");}
    else 
    {puts("B是A的约数");}
		
	
	return 0;
   

}