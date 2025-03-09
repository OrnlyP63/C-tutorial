#include <stdio.h>
#include <math.h>

double bmi(int height, int weight)
{
    return weight / pow(height / 100.0, 2);
}

void demo()
{
    // int p[3][5];
    int p[3][5] = {
        {170, 165, 175, 165, 169},
        {70, 55, 72, 48, 50},
        {'M', 'F', 'M', 'F', 'F'}};

    for (int i = 0; i < 5; ++i)
    {
        printf("h[%d] = %d, w[%d] = %d, bmi = %.2f\n", i, p[0][i], i, p[1][i], bmi(p[0][i], p[1][i]));
    }
}

int main()
{
    demo();
    return 0;
}

// gcc array4.c -o array4 -lm
