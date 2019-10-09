#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.00; x <= 1.00; x += 0.01)
		printf("x = %.2f", x);


	int i;


	for (i = 0; i <= 100; i++) {
		printf("x = %d  ", i);
		x = i / 100.0;
		printf("x = %f", x);
	}
	return 0;
}