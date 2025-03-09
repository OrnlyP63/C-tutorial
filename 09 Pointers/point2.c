#include <stdio.h>

void demo1(int a, int *b)
{
    a = a + 1;
    *b = *b + 1;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int m = 5, n = 10;
    printf("before\nm = %d, n = %d\n", m, n);
    demo1(m, &n);
    printf("afeter\nm = %d, n = %d\n", m, n);
    swap(&m, &n);
    printf("swap\nm = %d, n = %d\n", m, n);
    return 0;
}
