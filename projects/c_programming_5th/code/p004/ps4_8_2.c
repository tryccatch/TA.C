#include <stdio.h>
// 写一程序,判断某一年是否为闰年
// 2012|2000|2100
int main()
{
    int year, leap;
    printf("enter year:");
    scanf("%d", &year);

    if (year % 4 != 0)
        leap = 0;
    else if (year % 100 != 0)
        leap = 1;
    else if (year % 400 != 0)
        leap = 0;
    else
        leap = 1;

    if (leap)
        printf("%d is", year);
    else
        printf("%d is not", year);
    printf(" a leap year.\n");
    return 0;
}