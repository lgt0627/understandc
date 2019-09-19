#include <stdio.h>
int main(int argc, char const *rgv[])
{	int input;
	do {
		int a;
		printf("输入一个整数\n");

		scanf("%d", &a);
		if (a > 0) {
			printf("输入的数是正数\n");

		}
		else if (a < 0) {
			printf("输入的是负数\n");

		}
		else {
			printf("输出值为0\n");
		}
		printf("还要继续吗[继续---1  退出---0]\n");
		scanf("%d", &input);



	} while (input != 0);


	return 0;
}