#include <stdio.h>


int str_char(const char s[], int c) {

	int i = 0;
	while (*s) {
		if (*s == 'c') {
			i++;
		}
		s++;
	}

	return i;
}


int main(void)
{	char s[128];
	int i;
	printf("输入字符串：\n");
	scanf("%s", s);
	i = str_char(s, 'c');
	if (i == 0)
		printf("没有输入'c'\n");
	else
		printf("'c'出现了%d次\n", i);
	return 0;
}


