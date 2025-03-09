#include <stdio.h>
#include <ctype.h>

void demo1()
{
    int n = 17;
    int *p;
    p = &n;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);
}

void demo2()
{
    int n[] = {2, 4, 10};
    int *p[3];

    p[0] = &n[0];
    p[1] = &n[1];
    p[2] = &n[3];

    for (int i = 0; i < 3; ++i)
    {
        printf(" n[%d]: %d\n", i, n[i]);
        printf("&n[%d]: %p\n", i, &n[i]);
        printf("*p[%d]: %d\n", i, *p[i]);
        printf(" p[%d]: %p\n", i, p[i]);
        printf("---------------------\n");
    }
}

void demo3()
{
    char *s[] = {"lily", "rose", "tulip", "jasmine"};
    for (int i = 0; i < 4; ++i)
    {
        printf("%10s (%p)\n", s[i], s[i]);
    }
}

void demo4()
{
    char fa[][10] = {"lily", "rose", "tulip", "jasmine"};
    for (int i = 0; i < 3; ++i)
    {
        fa[i][0] = toupper(fa[i][0]);
        printf("%s\n", fa[i]);
    }
}
int main()
{
    // demo1();
    // demo2();
    // demo3();
    demo4();
    return 0;
}