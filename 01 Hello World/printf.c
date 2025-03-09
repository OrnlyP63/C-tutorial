#include <stdio.h>

void demo_int()
{
    int n = 1;
    int m = 2;
    printf("n = %d\nm = %d\n", n, m);
}

void demo_float()
{
    double n = 3.14159;
    float e = 2.718;
    printf("%lf\n", n);
    printf("%f\n", e);
    printf("%.2f\n", e);
}

void demo_char()
{
    char c = 'Z';
    char *zoo = "Zoo";
    printf("c = %d %c %x %X %#X\n", c, c, c, c, c);
    printf("%s\n", zoo);
}

int main()
{
    demo_int();
    demo_float();
    demo_char();
}