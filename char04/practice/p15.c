#include <stdio.h>
int main(int  argc, char const *rgv[])
{
	int height;


	printf("开始数值（cm）：155\n" );
	printf("结束数值（cm）：190\n" );
	printf("间隔数值（cm）：5\n");
	for (height = 155; height <= 190; height += 5) {

		printf("%dcm.  %.2fkg\n", height, (double)(height - 100) * 0.9);

	}







}