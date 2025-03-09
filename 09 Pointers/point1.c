#include <stdio.h>

int main()
{
    int n = 7;
    int m = 20;
    printf("n = %d, &n = %p\n", n, &n);
    printf("m = %d, &m = %p\n", m, &m);

    // Pointer variables
    int *p1; // p1 is a pointer to int
    // char *c1; // c1 is a pointer to char

    p1 = &m;
    printf("p1 = %p\n", p1);
    printf("*p = %d\n", *p1); // *p1 dereferencing

    printf("--------------------\n");
    m = 99;
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);

    int price = 15;
    int *coke, *fanta, *sprite;
    coke = &price;
    fanta = &price;
    sprite = &price;
    printf("--------------------\n");
    printf("price = %d\n", price);
    printf("%d, %d, %d\n", *coke, *fanta, *sprite);
    printf("--------------------\n");
    // Change value on dereferencing
    *fanta = 19;
    printf("price = %d\n", price);
    printf("%d, %d, %d\n", *coke, *fanta, *sprite);
    return 0;
}