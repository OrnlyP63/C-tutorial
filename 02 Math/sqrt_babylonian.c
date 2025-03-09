#include <stdio.h>
#include <math.h>

double sqroot(double s)
{
    double x0 = s / 2.0;
    double x1;
    double precision = 1e-4;
    double delta = 1;
    while (delta > precision)
    {
        x1 = .5 * (x0 + s / x0);
        delta = fabs(x1 - x0);
        printf("x0 = %.7f, x1 = %.7f, delta = %.7f\n", x0, x1, delta);
        x0 = x1;
    }

    return x1;
}
int main()
{
    double s = 125348;
    double x = sqroot(s);
    printf("x = %.7f, x * x = %.7f\n", x, x * x);

    return 0;
}