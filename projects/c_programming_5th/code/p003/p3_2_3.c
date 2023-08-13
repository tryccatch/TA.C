#include <stdio.h>

void showInt()
{
    int i_ = 3;
    int i_byte = sizeof(i_);

    short int si = 3;
    int si_byte = sizeof(si);

    long int li = 3;
    int li_byte = sizeof(li);

    long long int lli = 3;
    int lli_byte = sizeof(lli);

    printf("int             %d byte\n", i_byte);
    printf("short int       %d byte\n", si_byte);
    printf("long int        %d byte\n", li_byte);
    printf("long long int   %d byte\n", lli_byte);

    int i_bit = i_byte * 8;
    int si_bit = si_byte * 8;
    int li_bit = li_byte * 8;
    int lli_bit = lli_byte * 8;

    int i_temp = 1;
    for (int i = 0; i < i_bit - 2; i++)
    {
        i_temp = i_temp * 2;
    }
    int i_min = -i_temp - i_temp;
    int i_max = i_temp - 1 + i_temp;

    unsigned int ui_temp = 1;
    for (int i = 0; i < i_bit - 1; i++)
    {
        ui_temp = ui_temp * 2;
    }
    int ui_min = 0;
    int ui_max = ui_temp - 1 + ui_temp;

    int si_temp = 1;
    for (int i = 0; i < si_bit - 2; i++)
    {
        si_temp = si_temp * 2;
    }
    int si_min = -si_temp - si_temp;
    int si_max = si_temp - 1 + si_temp;

    unsigned int usi_temp = 1;
    for (int i = 0; i < i_bit - 1; i++)
    {
        usi_temp = usi_temp * 2;
    }
    int usi_min = 0;
    int usi_max = usi_temp - 1 + usi_temp;

    long int li_temp = 1;
    for (int i = 0; i < li_bit - 2; i++)
    {
        li_temp = li_temp * 2;
    }
    long int li_min = -li_temp - li_temp;
    long int li_max = li_temp - 1 + li_temp;

    unsigned long int uli_temp = 1;
    for (int i = 0; i < li_bit - 1; i++)
    {
        uli_temp = uli_temp * 2;
    }
    unsigned long int uli_min = 0;
    unsigned long int uli_max = uli_temp - 1 + uli_temp;

    long long int lli_temp = 1;
    for (int i = 0; i < lli_bit - 2; i++)
    {
        lli_temp = lli_temp * 2;
    }
    long long int lli_min = -lli_temp - lli_temp;
    long long int lli_max = lli_temp - 1 + lli_temp;

    unsigned long long int ulli_temp = 1;
    for (int i = 0; i < lli_bit - 1; i++)
    {
        ulli_temp = ulli_temp * 2;
    }
    unsigned long long int ulli_min = 0;
    unsigned long long int ulli_max = ulli_temp - 1 + ulli_temp;

    printf("%-30s   %d ~ %d\n", "int", i_min, i_max);
    printf("%-30s   %u ~ %u\n", "unsigned int", ui_min, ui_max);
    printf("%-30s   %hd ~ %hd\n", "short int", si_min, si_max);
    printf("%-30s   %hu ~ %hu\n", "unsigned short int", usi_min, usi_max);
    printf("%-30s   %ld ~ %ld\n", "long int", li_min, li_max);
    printf("%-30s   %lu ~ %lu\n", "unsigned long int", uli_min, uli_max);
    printf("%-30s   %lld ~ %lld\n", "long long int", lli_min, lli_max);
    printf("%-30s   %llu ~ %llu\n", "unsigned long long int", ulli_min, ulli_max);
}

int main()
{
    showInt();
    return 0;
}