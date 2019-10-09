#include <stdio.h>

int main(void)
{
	int i;
	char a[][5] = {"LISP", "C", "Ada"};
	i = sizeof(a) / sizeof (a[0]);
	printf("%d\n", i );
}