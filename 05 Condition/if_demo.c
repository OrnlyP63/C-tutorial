#include <stdio.h>

int main()
{
    int h, age;
    printf("enter your height (cm): ");
    scanf("%d", &h);
    printf("enter your age (year): ");
    scanf("%d", &age);

    if (h > 160 && age > 20 && age < 25)
    {
        printf("you are pass\n");
    }
    else
    {
        printf("you are not pass\n");
    }
}