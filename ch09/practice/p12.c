#include <stdio.h>
#include <string.h>
#define NUM 3
void rev_string(char s[][128], int n) {

    int i, j, m = 0;

    for (i = 0; i < n; i++) {

        while (s[i][j]) {
            m++;
        }


        for (j = 0; j < m / 2; j++)

        {   int k;
            k = s[i][j];
            s[i][j] = s[i][m - j - 1];
            s[i][m - j - 1] = k;
        }

    }
    return;
}
int main (void) {
    char s[NUM][128];
    int i, j, k;
    printf("你要输入几个字符串：\n");
    scanf("%d", &i);
    for (j = 0; j < NUM; j++)
    {

        scanf("%s", s[j]);
    }

    rev_string(s, NUM);


    printf("{" );
    for (j = 0; j < NUM; j++) {
        printf("%s\n", s[j]);
    }
    printf("}\n");
    return 0;
}