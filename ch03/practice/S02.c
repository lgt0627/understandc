#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char const *rgv[])
{	int c = 9;
	do {
		int a, b;

		printf("请输入：1.剪刀 2.石头 3.布\n");

		if (scanf("%d", &a) != 1) {
			printf("异常的输入！！！\n");

			while (getchar() != '\n');

			continue;
		} else {
			while (getchar() != '\n');
		}
		if (a > 3 || a < 1)
		{printf("请输入1，2，3.\n");}
		else if (a > 0 && a < 4) {
			srand((unsigned)time(NULL));
			b = 1 + rand() % 3;
			switch (a) {
			case 1: printf("你出的是剪刀\n"); break;
			case 2: printf("你出的是石头\n"); break;
			case 3: printf("你出的是布\n"); break;
			}
			switch (b) {
			case 1: printf("计算机出的是剪刀\n"); break;
			case 2: printf("计算机出的是石头\n"); break;
			case 3: printf("计算机出的是布\n"); break;
			}

			if (a == b)
			{printf("平局\n");}
			else if (a > b)
			{printf("计算机哭了\n");}
			else { printf("你个臭弟弟\n");}
		}
		printf("还要继续吗?\n继续---1 退出---0\n");
		if (scanf("%d", &c) != 1) {
			printf("异常的输入！！！\n");

			while (getchar() != '\n');

			continue;
		} else {
			while (getchar() != '\n');
		}
	} while (c != 0);
	return 0;
}