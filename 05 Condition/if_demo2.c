#include <stdio.h>

void demo1()
{
    char d;
    printf("[m]ocha\n");
    printf("[l]atte\n");
    printf("[e]xpresso\n");
    printf("[t]ea\n");
    printf("please select a menu: ");
    scanf(" %c", &d);

    if (d == 'm')
    {
        printf("40\n");
    }
    else if (d == 'l')
    {
        printf("30\n");
    }
    else if (d == 'e')
    {
        printf("20\n");
    }
    else if (d == 't')
    {
        printf("15\n");
    }
    else
    {
        printf("please select a valid menu.\n");
    }
}

void demo2()
{
    int age;
    int ticket;
    printf("enter your age: ");
    scanf(" %d", &age);

    if (age < 5 || age >= 60)
    {
        ticket = 0;
    }
    else
    {
        ticket = 50;
    }

    printf("ticket = %d\n", ticket);
}

int main()
{
    demo2();
}