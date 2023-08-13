#include <stdio.h>

void showInt()
{
    int d1 = 123;
    printf("d1 = %d\n", d1);
}

void showDecimal()
{
    float f1 = 0.345;
    printf("f1 = %f\n", f1);

    float e1 = 12.34e3, e2 = 3.14E3;
    printf("e1 = %f\ne2 = %f\n", e1, e2);
}

void showCharacter()
{
    char c1 = 'c';
    printf("%d\n", c1); // ascii
    printf("%c\n", c1);
}

void showEscapeCharacter()
{
    printf("testword[\\\' :\']end\n");
    printf("testword[\\\" :\"]end\n");
    printf("testword[\\\? :\?]end\n");
    printf("testword[\\a :\a]end\n");
    printf("testword[\\b :\b]end\n");
    printf("testword[\\f :\f]end\n");
    printf("testword[\\n :\n]end\n");
    printf("testword[\\r :\r]end\n");
    printf("testword[\\t :\t]end\n");
    printf("testword[\\v :\v]end\n");
    printf("testword[\\143 :\143]end\n");
    printf("testword[\\x63 :\x63]end\n");
}

void showString()
{
    char s[] = "string";
    printf("%s\n", s);
}

void showSymbolicConstant()
{
#define PI 3.14
    printf("%f", PI);
}

int main()
{
    // showInt();
    // showDecimal();
    // showCharacter();
    showEscapeCharacter();
    // showString();
    // showSymbolicConstant();
}