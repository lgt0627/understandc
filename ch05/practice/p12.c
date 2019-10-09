
#include <stdio.h>

int main(void)
{
    int i, j, n;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[2][4][3];


    printf("{" );
    n = 0;

    if (n == 0)
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++) {
                sum[0][i][j] = tensu1[i][j];

                printf("%2d ", sum[0][i][j]);

            }

        }

    }


    if (!(n == 1))
    {

        for (i = 0; i < 4; i++)

        {
            for (j = 0; j < 3; j++) {
                sum[1][i][j] = tensu2[i][j];
                printf("%2d ", sum[1][i][j]);

            }
        }

    }

    printf("}" );


    return 0;
}