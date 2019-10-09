#include <stdio.h>
#include <string.h>

void put_stringn(const char s[], int n)
{	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", s);

}

int main(void)
{	char s[128];
	int i;
	printf("输入字符串：\n");
	scanf("%s", s);
	printf("你想要几次重复\n");
	scanf("%d", &i);

	put_stringn(s, i);
	return 0;
}