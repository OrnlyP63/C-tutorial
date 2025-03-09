#include <stdio.h>

double rectangle(double w, double h)
{
    return w * h;
}

// function declaration / prototype
double triangle(double b, double h);

int main()
{
    printf("rectangle area = %.2f\n", rectangle(3, 5));
    printf("triangle area = %.2f\n", triangle(3, 5));
    return 0;
}

double triangle(double b, double h)
{
    return .5 * b * h;
}