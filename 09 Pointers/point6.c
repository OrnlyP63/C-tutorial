#include <stdio.h>

void display1(char *s[], size_t sz)
{
    for (int i = 0; i < sz; ++i)
    {
        printf("%s\n", s[i]);
    }
}

void demo1()
{
    char *flower[] = {"lily", "rose", "jasmine", "tulip"};
    size_t sz = sizeof(flower) / sizeof(flower[0]);
    display1(flower, sz);
}

int main()
{
    demo1();
    return 0;
}