#include <stdio.h>

void showBit(int n)
{
    // int n = 65;

    char s[] = "00000000";
    // printf("%s\n", s);

    for (int i = 7; i >= 0; i--)
    {
        if (n % 2 == 0)
            s[i] = '0';
        else
            s[i] = '1';
        n = n / 2;
    }
    printf("%s\n", s);
}

void showCharacter()
{
    int n = '0';
    for (int i = 0; i < 17; i++)
    {
        printf("%c\t%d\t", n + i, n + i);
        showBit(n + i);
    }

    int A = 'A';
    for (int i = 0; i < 26; i++)
    {
        printf("%c\t%d\t", A + i, A + i);
        showBit(A + i);
    }

    int a = 'a';
    for (int i = 0; i < 26; i++)
    {
        printf("%c\t%d\t", a + i, a + i);
        showBit(a + i);
    }
}

void showAllCharacter()
{

    for (int i = 0; i <= 127; i++)
    {
        printf("%c\t%d\t", i, i);
        showBit(i);
    }

    char c = 128;

    printf("%d\n", sizeof(c));

    unsigned char uc = 255;

    printf("%d\n", sizeof(uc));
}

int main()
{
    // showCharacter();
    showAllCharacter();
    return 0;
}