#include <stdio.h>
#include <math.h>

int saving(double pv, double rate, double fv)
{
    int i = 0;
    double amount = 0;
    do
    {
        amount = pv * pow(1 + rate, i);
        printf("year %d, amount = %.2f\n", i, amount);
        i++;
    } while (amount <= fv);
    return --i;
}

int main()
{
    printf("year = %d\n", saving(1000, .05, 1500));
}

// gcc your_program.c -o your_program -lm
