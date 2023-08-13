#include <stdio.h>
/* 输出以下4x5的矩阵
1       2       3       4       5
2       4       6       8       10
3       6       9       12      15
4       8       12      16      20
*/
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 5; j++, n++)
        {
            if (n != 0 && n % 5 == 0)
                printf("\n");
            if (i == 3 && j == 1)
                break;
            printf("%d\t", i * j);
        }
    printf("\n");
    return 0;
}
