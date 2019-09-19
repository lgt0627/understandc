#include <stdio.h>
int main(int argc, char const *rgv[])
{
    int    n1, n2 , n3 , n4;
    double d1, d2 , d3 , d4;

    n1 = 5;
    n2 = 5.0 ;


    d1 =  2;
    d2 = 2.0;



    printf("n1 = %d\n", n1 + d2);
    printf("n2 = %d\n", n1 - d1);
    printf("n3 = %d\n", n1 * d2);
    printf("n4 = %d\n", n2 / d1);

    printf("d1 = %f\n", n2 + d1);
    printf("d2 = %f\n", n1 + d2);
    printf("d3 = %f\n", n2 * d1);
    printf("d4 = %f\n", n1 / d2);

    return 0;
}