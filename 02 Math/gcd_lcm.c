#include <stdio.h>

int gcd(int a, int b)
{
    int count = 0;
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {
        count++;
        if (a % i == 0 && b % i == 0)
        {
            printf("counter = %d\n", count);
            return i;
        }
    }
}

int gcdEuclid(int a, int b)
{
    int t;
    int count = 0;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
        count++;
    }
    printf("counter = %d\n", count);
    return a;
}

int main()
{
    int a = 1071;
    int b = 462;
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("gcdEuclid(%d, %d) = %d\n", a, b, gcdEuclid(a, b));
    return 0;
}