#include<stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("字符串为\"%s\"。\n", s);
	s[0] = '\0';
	printf("字符串为\"%s\"。\n", s);

	return 0;
}
