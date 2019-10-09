#include <stdio.h>

void null_string(char s[])
{
s[0]='\0';
}

int main(void){
	int i;
	char str[128];
	
	printf("请存入字符串\n");
	
	scanf("%s",str);
	null_string(str);
	printf("对不起你输入的是空字符串%s\n",str );


}