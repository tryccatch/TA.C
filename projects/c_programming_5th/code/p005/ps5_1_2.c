#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("sum=%d\n", sum);
    return 0;
}