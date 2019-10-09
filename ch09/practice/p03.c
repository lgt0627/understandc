k

#include <stdio.h>
#define NUM 20

int main(void)
{
	int i, j, ch;
	char s[NUM][128];

	do {
		int i = 0;
		if (i < NUM) {
			i++;
			printf("输入\n");
			printf("s[%d] : ", i);
			scanf("%s", s[i]);
		}

	}

	while ((ch = getchar()) != '$');


// 	break;}
// }
// while(1){           /*无限循环*/
//     ch=getchar();   /*将读取的字符赋值给ch*/
//     if(ch=='$')     /*如果发生错误*/
//         break;      /*则强行退出while语句*/
//     putchar(ch);    /*显示字符ch*/
// }



	for (i = 0; i < j; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);

	return 0;

}