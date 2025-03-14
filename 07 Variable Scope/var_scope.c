// global vs local variables

#include <stdio.h>
int v = 777; // global variable

void fn1()
{
    int v = 99; // local variable
    printf("v (fn1) = %d\n", v);
}

void fn2()
{
    int v = 20; // local variable
    printf("v (fn2) = %d\n", v);
}

void fn3()
{
    printf("v (fn3) = %d\n", v);
}

void fn4()
{
    char c = 'A';
    printf("address of c = %p\n", &c);

    for (int i = 0; i < 5; ++i)
    {
        char c = 'X'; // c value and address are poped after finish loop
        printf("%d: %c (%p)\n", i, c, &c);
    }
    printf("%c (outside for loop) %p\n", c, &c);
}

int main()
{
    int v = 10; // local variable
    printf("v (main) = %d\n", v);
    fn1();
    fn2();
    fn3();
    fn4();
}
