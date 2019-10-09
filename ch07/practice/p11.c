#include <stdio.h>
int main (void)
{



	int i;
	float x1, x2;
	float y1, y2;

	for (i = 0; i <= 100; i++) {
		x1 = i / 100.0;
		y1 += x1;


	}
	for (x2 = 0.0; x2 <= 1.0; x2 += 0.01)
	{	y2 += x2;

	}
	printf("y1 = %f\n", y1);
	printf("y2 = %f\n", y2);
	return 0;
}