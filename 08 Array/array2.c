#include <stdio.h>

void demo1()
{
    char grade[4];
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    printf("%c\n", grade[2]);
}

void demo2()
{
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%c\n", grade[2]);
}

void demo3()
{
    char grade[] = "ABCD"; // {'A', 'B', 'C', 'D', '\0'}
    printf("%c\n", grade[2]);
}

int main()
{
    demo1();
    demo2();
    return 0;
}