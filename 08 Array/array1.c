#include <stdio.h>

int main()
{
    // int h[5];
    // h[0] = 170;
    // h[1] = 165;
    // h[2] = 175;
    // h[3] = 162;
    // h[4] = 169;
    int h[] = {170, 165, 175, 162, 169};
    double avg = 0.0;
    double sum = 0.0;

    for (int i = 0; i < 5; ++i)
    {
        sum += h[i];
    }

    avg = sum / 5.0;

    printf("avg = %.2f\n", avg);
}