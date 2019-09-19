#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个正数：");
	scanf("%d", &no);

	while (no >= 5) {
		printf("*****\n");
		no -= 5;
	}
	switch (no) {
	case 0: printf(""); break;
	case 1: printf("*\n"); break;
	case 2: printf("**\n"); break;
	case 3: printf("***\n"); break;
	case 4: printf("****\n"); break;
	}

	return 0;
}