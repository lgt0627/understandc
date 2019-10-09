
#include <stdio.h>
#define NUMBER  128
#define ELEMENT 2

void rev_string(char s[][128], int n)
{
	int i = 0;
	int j = 0;
	int num = 0;
	char t[2][NUMBER];
	for (i = 0; i < n; i++)
	{
		while (s[i][j] != '\0')
		{
			num++;
			j++;
		}
		for (j = 0; j < num; j++)
		{
			t[i][j] = s[i][num - 1 - j];
		}
		for (j = 0; j < num; j++)
		{
			s[i][j] = t[i][j];
		}
	}
	return;
}
int main(void)
{
	char str[ELEMENT][NUMBER];
	int i = 0;
	printf("请输入字符串:");
	printf("\n");
	for (i = 0; i < ELEMENT; i++)
	{
		printf("str[%d]", i);
		scanf("%s", str[i]);

	}

	rev_string(str, ELEMENT);
	printf("该字符串颠倒后为:\n");
	for (i = 0; i < ELEMENT; i++)
	{
		printf("%s\n", str[i]);
	}
	printf("\n");


}