#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *name[] = {
        "Follow me",
        "BASIC",
        "Great Wall",
        "FORTRAN",
        "Computer design",
    };
    char **p;
    int i;
    for (i = 0; i < 5; i++)
    {
        p = name + i;
        printf("%s\n", *p);
    }
    return 0;
}