#include <stdio.h>

void demo1()
{
    int a = 10, b = 7;
    int max;
    // if (a > b)
    // {
    //     max = a;
    // }
    // else
    // {
    //     max = b;
    // }

    max = a > b ? a : b;
    printf("max = %d\n", max);
}

int max(int a, int b)
{
    return a > b ? a : b;
}

void demo2()
{
    int age = 10;
    int ticket;
    // if (age < 5 || age > 60)
    // {
    //     ticket = 0;
    // }
    // else
    // {
    //     ticket = 50;
    // }
    ticket = age < 5 || age > 60 ? 0 : 50;
    printf("ticket = %d\n", ticket);
    // age < 5 || age > 60 ? printf("ticket = 0") : printf("ticket = 50");
}

int main()
{
    demo2();
}