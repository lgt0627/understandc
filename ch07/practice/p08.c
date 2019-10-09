
#include <stdio.h>
 
int main(void)
{
	float fl;
	double db;
	long double ldb;
	
	printf("float length %d\ndoble length %d\nlong double length %d", 
		(unsigned)sizeof(fl), (unsigned)sizeof(db), (unsigned)sizeof(ldb));
	
	return 0;

}