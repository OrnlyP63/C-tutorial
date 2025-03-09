#include <stdio.h>

void rectangle()
{
    double area;
    int w, h;

    printf("enter width: ");
    scanf("%d", &w);
    printf("enter height: ");
    scanf("%d", &h);

    area = w * h;
    printf("rectangle area = %f\n", area);
}

double circle(double r)
{
    double area;
    const double pi = 3.14;

    area = pi * r * r;

    return area;
}

int main()
{
    // rectangle();
    double circle_area;
    double r;

    printf("enter radious: ");
    scanf("%lf", &r);

    circle_area = circle(r);
    printf("The circle area is: %.2f\n", circle_area);

    getchar();
}