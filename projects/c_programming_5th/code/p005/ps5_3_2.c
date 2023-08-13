#include <stdio.h>
// input:1|11
int main()
{
    int i, sum = 0;
    printf("please enter i,i=?");
    scanf("%d", &i);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("sum=%d\n", sum);
    return 0;
}
