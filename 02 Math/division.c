#include <stdio.h>

int leapYear(int year)
{
    if (year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int demo()
{
    int a = 7, b = 3;
    int q, r;
    q = a / b; // quotient
    r = a % b; // remainder
    printf("q = %d, r = %d\n", q, r);
    return 0;
}

int main()
{
    printf("%d\n", leapYear(2026));
    demo();
}