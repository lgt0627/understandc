#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数A：\n");
	
	scanf("%d",&a);
	printf("整数B：\n");
	
	scanf("%d",&b);
	if(a>b){
    puts("A>B");
}
    else{
		
	puts("B>A");
	
    }
    return 0;

}