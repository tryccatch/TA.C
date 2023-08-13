#include <stdio.h>

struct Student
{
    int num;
    char name[20];
    char sex;
    int age;
};

struct Student stu[3] = {
    {10101, "Li Lin", 'M', 18},
    {10102, "Zhang Fang", 'M', 19},
    {10104, "Wang Min", 'F', 20},
};

int main(int argc, char const *argv[])
{
    struct Student *p;
    printf("%-5s %-20s %2s %4s\n", "No.", "Name", "sex", "age");
    for (p = stu; p < stu + 3; p++)
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
    return 0;
}