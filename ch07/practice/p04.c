#include <stdio.h>

unsigned set(unsigned x, int pos) {

	int i = 1;
	return x | (i << pos);

}


unsigned reset(unsigned x, int pos) {
	int i = 1;
	return x & ~(i << pos);
}


unsigned inverse(unsigned x, int pos) {
	int i = 1;
	return x ^ (i << pos);

}



int main(void) {
	int i, j, a;
	printf("请输入一个非负整数。\n");
	printf("a: "); scanf("%u", &a);

	printf("第几位设为反值：");
	scanf("%d", &i);
	printf("结果是：%u\n", inverse(a, i));

	printf("第几位设为0：");
	scanf("%d", &i);
	printf("结果是：%u\n", reset(a, i));

	printf("第几位设为1：");
	scanf("%d", &i);

	printf("结果是：%u\n", set(a, i));

	return 0;
}








