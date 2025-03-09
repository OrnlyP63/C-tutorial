#include <stdio.h>

void condition(int age)
{
    if (age <= 6)
    {
        printf("You are a kid!\n");
    }
    else
    {
        printf("You are an adult!\n");
    }
}

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    condition(age);
}