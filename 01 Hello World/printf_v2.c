#include <stdio.h>
#include <string.h>

void demo_str()
{
    char *str = "rainbow";
    printf("str = %s\n", str);
}

void demo_address()
{
    int i = 10;
    char *str = "rainbow";
    char str2[] = "rainbow";

    printf("i = %d (%p)\n", i, &i);
    printf("str = %s (%p)\n", str, str);    // point to the first entry of array
    printf("str2 = %s (%p)\n", str2, str2); // point to the first entry of array

    for (int i = 0; i < strlen(str2); ++i)
    {
        printf("str2[%d] = %c (%p)\n", i, str2[i], &str2[i]);
    }
}

int main()
{
    demo_str();
    demo_address();
    return 0;
}