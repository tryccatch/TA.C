#include <stdio.h>
int main()
{
    void inv(int* x, int n);
    int i, * arr;
    printf("The original array:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", arr + i);
    inv(arr, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", *(arr + i));
    printf("\n");
    return 0;
}

void inv(int* x, int n)
{
    int* p, temp, * i, * j, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return;
}