#include <stdio.h>
int main(void){
	int i[3]={1,2,3};
	int j[3]={4,5,6};
	printf("j=");
   for(int n=0;n<3;n++){
   	printf("%d",i[n]);

   

   }
   printf("\ni=");
   for(int n=0;n<3;n++){	
   printf("%d",j[n]);}
   printf("\n");
   return 0;
}