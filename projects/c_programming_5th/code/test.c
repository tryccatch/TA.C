#include <stdio.h>
int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9},
    };
    printf("%x\n", a);

    printf("%x\n", a[0]);
    printf("%x\n", *(a + 0));
    printf("%x\n", *a);

    printf("%x\n", a + 1);
    printf("%x\n", &a[1]);

    printf("%x\n", a[1]);
    printf("%x\n", *(a + 1));

    printf("%x\n", a[1] + 2);
    printf("%x\n", *(a + 1) + 2);
    printf("%x\n", &a[1][2]);

    int *p = malloc(100);
    calloc(10, 100);
    realloc(p, 200);
    free(p);
    printf("%x\n", &a[1][2]);

    return 0;
}