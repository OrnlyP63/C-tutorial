#include <stdio.h>

// function + variables
int main()
{
    printf("hello world\n");
    printf("don't worry be happy\n");

    int age; // interger
    double price;

    age = 29;
    price = 199.99;

    int score = 80;

    price = price * 1.1;

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%.2f\n", price);

    char *hero = "superman";
    printf("%s\n", hero);

    char country[] = "Thailand";
    printf("%s\n", country);
}