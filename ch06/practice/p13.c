#include <stdio.h>
#include "util.c"

int main(void)
{
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[2][4][3];



    puts("两次考试分数是");
    printf("{");
    mat_add(tensu1, tensu2, sum);
    printf("}");
    return 0;
}