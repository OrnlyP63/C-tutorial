#include <stdio.h>

// input + process + output
int main()
{
    int area;
    int w, h;
    printf("enter width = ");
    scanf("%d", &w);

    printf("enter height = ");
    scanf("%d", &h);

    area = w * h;
    printf("rectangle are = %d\n", area);

    // getchar();
}