#include <stdio.h>
#include <float.h>
#include <math.h>

void showFloat()
{
    float f = 3.0f;
    double d = 3.0;
    long double ld = 3.0l;

    int f_byte = sizeof(f);
    int d_byte = sizeof(d);
    int ld_byte = sizeof(ld);

    int f_bit = f_byte * 8;
    int d_bit = d_byte * 8;
    int ld_bit = ld_byte * 8;

    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%Lf\n", ld);

    printf("%-16s %-16s %-16s %-16s %-16s %-16s\n", "类型", "位数", "精度", "尾数", "指数", "范围");

    printf("%-14s %-14d %-14d %-14d %-14d %15g ~ %-15g\n", "float", f_byte, FLT_DIG, FLT_MANT_DIG - 1, FLT_MAX_EXP, -FLT_MAX, FLT_MAX);

    printf("%-14s %-14d %-14d %-14d %-14d %15g ~ %-15g\n", "double", d_byte, DBL_DIG, DBL_MANT_DIG - 1, DBL_MAX_EXP, -DBL_MAX, DBL_MAX);

    printf("%-14s %-14d %-14d %-14d %-14d %15Lg ~ %-15Lg\n", "long double", ld_byte, LDBL_DIG, LDBL_MANT_DIG - 1, LDBL_MAX_EXP, -LDBL_MAX, LDBL_MAX);
}

int main()
{
    showFloat();
    return 0;
}