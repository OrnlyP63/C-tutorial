// Pointer arithmetic
#include <stdio.h>

void demo1()
{
    int a[] = {10, 15, 20, 25};
    int *p = a;

    printf("sizof(int): %zu\n", sizeof(int));
    printf("*p: %d\n", *p);
    printf("*p + 2: %d\n", *(p + 2));

    for (int i = 0; i < 4; ++i)
    {
        printf("&a[%d]: %p, a[%d]: %d\n", i, &a[i], i, a[i]);
        printf("(p + %d): %p, *(p + %d): %d\n", i, p + i, i, *(p + i));
        printf("----------------------------------------------\n");
    }
}

int main()
{
    demo1();
    return 0;
}