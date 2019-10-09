#include <stdio.h>
unsigned rrotate(unsigned x, int n) {
	return x >> n;
}
unsigned lrotate(unsigned x, int n) {

	return x << n;


}
int main (void)
{	int i, j, a;
	printf("请输入一个非负整数。\n");
	printf("a: "); scanf("%u", &a);
	printf("你要左移几位：\n");
	scanf("%d", &i);
	printf("你要右移几位：\n");
	scanf("%d", &j);
	printf("右移%d位的结果是:%u", i, rrotate(a, i));
	printf("\n左移%d位的结果是%u", j, lrotate(a, j)) ;
	printf("\n");


}