#include <stdio.h>
void del_digit(char s[])
{	while (*s) {
		if (*s < '0' || *s > '9')
			putchar(*s);
		s++;

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