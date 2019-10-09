#include <stdio.h>


void alert(int n) {
	for (int i = 1; i <= n; i++) {
		printf("\a");
	}
}

int sumup(int n)
{
	int i;
	int x = 0;

	for ( i = 0 ; i <= n; i++) {
		x += i;
	}
	return x;

}

int power(int x)
{
	int i;
	int tmp = 1;

	for (i = 1; i <= 4; i++)
		tmp *= x;
	return tmp;
}

int cube(int x)
{
	return x * x * x;
}

int min2(int a, int b)
{
	int min = a;

	if (b < min) min = b;
	return min;
}

int min3(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

void hello(void)
{
	printf("你好");
	printf("\n");
}



int min_of(const int v[], int n)
{	int min = v[0];
	for (int i = 1; i < n; i++)
	{
		if (min > v[i])
			min = v[i];
	}
	return min;
}

void rev_intary(int v[], int n)
{	int i;
	for (i = 0; i < n; i++) {
		printf("%d ",v[n-1-i] );
	}


}


void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	for (i = 0; i < n; i++) {

		v1[i] = v2[n - 1 - i];

	}
}


int search_idx(const int v[], int idx[], int key, int n) {
	int i;
	int j = 0;
	key = 5;
	printf("{" );
	for (i = 0; i < n; i++) {
		if (v[i] == key) {
			idx[j++] = i;
		}

	}

	return j;



}


void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	int i, k, j;
	for (i = 0; i < 4; i++) {


		for (j = 0; j < 4; j++) {
			for (k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}

		}
	}
}

void mat_add(const int a[4][3], const int b[4][3] , int c[2][4][3])
{	int n, i, j;
	n = 0;
	printf("{");
	if (n == 0)
	{	for (i = 0; i < 4; i++)
		{	printf("{");
			for (j = 0; j < 3; j++) {
				c[0][i][j] = a[i][j];
				printf("%2d ", c[0][i][j]);
			}
			printf("}");
		}

	}
	printf("}");
	printf("{");
	if (!(n == 1))
	{	for (i = 0; i < 4; i++) {
			printf("{");
			for (j = 0; j < 3; j++) {
				c[1][i][j] = b[i][j];
				printf("%2d ", c[1][i][j]);

			}
			printf("}");
		}

	}
	printf("{");
}

void put_count() {
	static int a = 0;
	a++;
	printf("被调用%d次\n", a);
}




















