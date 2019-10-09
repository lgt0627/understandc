#include <stdio.h>
int main (void)
{
	int x[6][2] = {};
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;
	double d, e, f;
	for (int i = 0; i < 6; i++) {
		printf("分别输入第%d名学生的数学和语文成绩：\n", i + 1);
		for (int j = 0; j < 2; j++) {
			scanf("%d", &x[i][j]);
			c = x[i][0] + x[i][1];
		}
		d = (double)c / 2;
		a += x[i][0];
		b += x[i][1];
		e = (double)a / 6;
		f = (double)b / 6;

		printf("第%d名学生的总分是：%d\n", i + 1, c);
		printf("第%d名学生的平均分是：%.2f\n", i + 1, d);




	}
	printf("数学总分是：%d\n", a);
	printf("语文总分是：%d\n", b);
	printf("数学平均分是：%.2f\n", e);
	printf("语文平均分是：%.2f\n", f);



}