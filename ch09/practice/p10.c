#include <stdio.h>
#include <string.h>
void del_digit(char s[])
{	int i;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] < '0' || s[i] > '9')
			putchar(s[i]);
	}

}

int main(void)
{
	char s[128];
	printf("给个字符串:");
	scanf("%s", s);
	del_digit(s);
	printf("\n");
	return 0;

}