#include <stdio.h>

unsigned set(unsigned x, int pos, int n) {

	int  i = 1;
	int j, m = 1;
	if (n == 1) {
		i = 1;
	}
	else {
		for (j = 1; j < n; j++) {

			m *= 2;
		}
		i = m - 1;
	}
	return x | (i << pos);

}


unsigned reset(unsigned x, int pos , int n) {
	int  i = 1;
	int j, m = 1;
	if (n == 1) {
		i = 1;
	}
	else {
		for (j = 1; j < n; j++) {

			m *= 2;
		}
		i = m - 1;
	}
	return x & ~(i << pos);
}


unsigned inverse(unsigned x, int pos, int n) {
	int  i = 1;
	int j, m = 1;
	if (n == 1) {
		i = 1;
	}
	else {
		for (j = 1; j < n; j++) {

			m *= 2;
		}
		i = m - 1;
	}
	return x ^ (i << pos);

}



int main(void) {
	int i, j, a;
	printf("请输入一个非负整数。\n");
	printf("a: "); scanf("%u", &a);

	printf("第几位开始设为反值，(正整数)共几位：");
	scanf("%d", &i);
	scanf("%d", &j);

	printf("结果是：%u\n", inverse(a, i, j));

	printf("第几位设为0，往后几位：");
	scanf("%d", &i);
	scanf("%d", &j);
	printf("结果是：%u\n", reset(a, i, j));

	printf("第几位设为1，往后几位：");
	scanf("%d", &i);
	scanf("%d", &j);

	printf("结果是：%u\n", set(a, i, j));

	return 0;
}
