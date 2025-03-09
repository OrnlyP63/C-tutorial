#include <stdio.h>
#include <string.h>

void demo1()
{
    // can be changed
    char flower[] = "tulip";
    printf("flower (address: %p)\n", flower); // print array as an address
    flower[0] = 'T';
    printf("%s\n", flower); // print array as an str

    for (int i = 0; i < strlen(flower); ++i)
    {
        printf("flower[%d] = %c (addr = %p)\n", i, flower[i], &flower[i]);
    }

    // can't be changed
    char *planet = "Mercury"; // constant // The adress points to the first char
    printf("%s (addr: %p)\n", planet, planet);

    while (*planet)
    {
        printf("%c (addr: %p)\n", *planet, planet);
        planet++;
    }
}

int main()
{
    demo1();
    return 0;
}