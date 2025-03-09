#include <stdio.h>

void demo()
{
    int n = 1;
    static int sv = 1; // It stays until finisth main function
    printf("n = %d, sv = %d\n", n, sv);
    n++;
    sv++;
}

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        demo();
    }

    return 0;
}