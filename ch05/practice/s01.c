#include <stdio.h>
# define NUM 80
int main(void) {
	int i[NUM];
	int j;
	int m = 0;
	int k;
	printf("班上有几个学生，请输入\n");
	scanf("%d", &k);
	for (int n = 1; n <= k; n++) {
		printf("输入第%d名学生的分数\n", n);
		scanf("%d", &j);
		i[n] = j;
		if (j <= 60) {m++;}
	}
	printf("一共有%d人不及格\n", m );
}