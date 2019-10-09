#include <stdio.h>
#include <string.h>

int str_char(const char s[], int c) {

	int i, j;


	for (i = 0; i < strlen(s); i++) {

		if (s[i] == 'c')

			break;
		

	}
	return i;
}


int main(void)
{	char s[128];
	int i;
	printf("输入字符串：\n");
	scanf("%s", s);
	i = str_char(s, 'c');
	if (i == -1)
		printf("没有输入'c'");
	else
		printf("第一个'c'出现在s[%d]\n", i );
	return 0;
}




