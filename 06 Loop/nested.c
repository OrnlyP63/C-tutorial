#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 12; i++)
    // {
    //     printf("%d x %2d = %d\n", 9, i, 9 * i);
    // }
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 9; j <= 11; j++)
        {
            printf("%2d x %2d = %3d   ", j, i, j * i);
        }
        printf("\n");
    }
}