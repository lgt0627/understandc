#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正数：");
	scanf("%d", &no);

	do {
		if (no < 1) {break;}

		putchar('*');
		putchar('\n');

	} while (no-- > 0);




	return 0;
}