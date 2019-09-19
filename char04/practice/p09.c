#include <stdio.h>
int main(void)
{
	int no;
	int a;
	a = 1;


	printf("请输入一个正数：");
	scanf("%d", &no);

	while (a <= no)
	{
		putchar('+');
		while (a == 0) {break;}
		a++;
		if (a <= no)
		{	putchar('-');

		}
		a++;

	}

	putchar('\n');
	return 0;
}