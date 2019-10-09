#include <stdio.h>
#include <string.h>

int str_char(const char s[], int c) {

	int i, j;

	j = 0;
	for (i = 0; i < strlen(s); i++) {

		if (s[i] == 'c')
		{	j++;

		}
		// else {j = 0; break;}
	}

	return j;
}


int main(void)
{	char s[128];
	int i;
	printf("输入字符串：\n");
	scanf("%s", s);
	i = str_char(s, 'c');
	if (i < 1)
		printf("没有输入'c'\n");
	else
		printf("'c'出现了%d次\n", i);
	return 0;
}


