#include <stdio.h>
int main(int argc, char const *rgv[])
{	int isRepeat;
	do {
		int input;
		printf("输入一个整数\n");
		scanf("%d", &input);
		if (input % 2 == 0) {
			printf("输入的数是偶数\n");
		}
		else {
			printf("输入的是奇数\n");
		}
		printf("好了吗，哥哥？\n");
		scanf("%d", &isRepeat);
	} while (isRepeat != 0);
	printf("哥哥，辛苦了，好舒服啊\n");
	return 0;
}