#include <stdio.h>

void repetion(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    printf("result = %d\n", sum);
}

int main()
{
    int N;
    printf("Enter sumation number: ");
    scanf("%d", &N);
    repetion(N);
}