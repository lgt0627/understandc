
#include <stdio.h>

int main(void)
{
	int a;
	static double i[5];

	for (a = 0; a < 5; a++)
		printf("i[%d] = %.1f\n", a, i[a]);

	return 0;
}
