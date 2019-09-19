#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc,char const *rgv[])
{   int a,b;
	printf("请输入：1.剪刀 2.石头 3.布\n");
	scanf("%d",&a);
	srand((unsigned)time(NULL));
	b=1+rand()%3;
	switch(a){
		case 1:printf("你出的是剪刀\n");break;
		case 2:printf("你出的是石头\n");break;
		case 3:printf("你出的是布\n");break;
	}
	switch(b){
		case 1:printf("计算机出的是剪刀\n");break;
		case 2:printf("计算机出的是石头\n");break;
		case 3:printf("计算机出的是布\n");break;
	}

	if(a==b)
		{printf("平局");}
else if (a>b)
	{printf("计算机哭了");}
else { printf("你牛逼");}
return 0;
}