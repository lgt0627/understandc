#include <stdio.h>
#include <string.h>
void put_stringr(const char s[]) {
	int i;
	for (i = 0; i < strlen(s) ; i++) {
		putchar(s[strlen(s) - 1 - i]);

	}
}


int main (void) {
	char s[128];
	int i;
	printf("输入字符串：\n");
	scanf("%s", s);
	printf("它的倒序是：\n");
	printf("{");
	put_stringr(s);
	printf("}\n");

}