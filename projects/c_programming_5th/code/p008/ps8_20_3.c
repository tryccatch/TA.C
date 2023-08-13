#include <stdio.h>
int main(int argc, char const *argv[])
{
    void copy_string(char *from, char *to);
    char *a = "I am a teacher.";
    char b[] = "You are a student.";
    char *p = b;
    printf("string a = %s\nstring b = %s\n", a, b);
    printf("copy string a to string b:\n");
    copy_string(a, p);
    printf("string a = %s\nstring b = %s\n", a, b);
    return 0;
}

void copy_string(char *from, char *to)
{
    for (; *from != '\0'; from++, to++)
        *to = *from;
    *to = '\0';
}

void copy_string1(char *from, char *to)
{
    while ((*to = *from) != '\0')
    {
        to++;
        from++;
    }
}

void copy_string2(char *from, char *to)
{
    while ((*to++ = *from++) != '\0')
        ;
}

void copy_string3(char *from, char *to)
{
    while (*from != '\0')
        *to++ = *from++;
    *to = '\0';
}

void copy_string4(char *from, char *to)
{
    while (*from)
        *to++ = *from++;
    *to = '\0';
}

void copy_string5(char *from, char *to)
{
    while (*to++ = *from++)
        ;
}

void copy_string6_1(char *from, char *to)
{
    for (; (*to++ = *from++) != '\0';)
        ;
}

void copy_string6_2(char *from, char *to)
{
    for (; *to++ = *from++;)
        ;
}

void copy_string7(char from[], char to[])
{
    char *p1, *p2;
    p1 = from;
    p2 = to;
    while ((*p2++ = *p1++) != '\0')
        ;
}