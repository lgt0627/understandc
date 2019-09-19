#include <stdio.h>
int main(int argc, char const *rgv[])
{	int i, j;
	for (i = 1; i <= 9; i++)
	{	printf("%d|", i);

		for (j = 1; j <= 9; j++)
			if (j <= i)
			{printf("%2d*%d=%2d", i, j, i * j );}

		putchar('\n');
	}
	for (j = 1; j <= 9; j++) {printf("---%d---", j);}
	putchar('\n');

	return 0;
}