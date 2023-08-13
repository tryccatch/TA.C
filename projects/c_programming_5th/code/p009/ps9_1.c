#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct Student
    {
        long int num;
        char name[20];
        char sex;
        char addr[20];
    } a = {1010, "Li Lin", 'M', "123 Beijing Road"};
    printf("NO.%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
    return 0;
}