#include <stdio.h>

void demo1()
{
    int sum = 0;
    int n;
    printf("enter a number: ");
    scanf(" %d", &n);
    while (n != 0)
    {
        sum += n;
        printf("enter a number: ");
        scanf(" %d", &n);
    }
    printf("summation = %d\n", sum);
}

void demo2()
{
    int sum = 0;
    int n;

    do
    {
        printf("enter a number: ");
        scanf(" %d", &n);
        sum += n;
    } while (n != 0);
    printf("summation = %d\n", sum);
}
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("i = %d\n", i);
        ++i;
    }
    // demo1();
    demo2();
}