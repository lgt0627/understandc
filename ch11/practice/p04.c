#include <stdio.h>
void put_string(const char *s)
{
	while (*s) {printf("%c", *s++);}
}
int main(void)
{	char s[128];
	printf("输入一个字符串\n");
	scanf("%s", s);
	put_string(s);
	return 0;
}
