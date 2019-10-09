#include <stdio.h>


char *str_chr( const char *s, int c) {
	char *p;
	while (*s) {
		if (*s == 'c') {
			p = s;
			break;

		}
		else (p = NULL);
		s++;
	}
	return p;

}




int main(void)
{	char s[128];

	printf("输入有c字符串：\n");
	scanf("%s", s);

	char *p = str_chr(s, 'c');
	if (p == NULL)printf("%p\n", NULL );


	else printf("%p\n", str_chr(s, 'c'));

	return 0;
}


