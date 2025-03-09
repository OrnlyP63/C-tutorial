#include <stdio.h>
#include <ctype.h>

void strupper(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        s[i] = toupper(s[i]);
        i++;
    }
}

void strupper2(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        s[i] = toupper(s[i]);
        i++;
    }
}

int strlenght(char *s)
{
    int i = 0;
    while (*s)
    {
        s++;
        i++;
    }
    return i;
}
int main()
{
    char flower[] = "popy";
    strupper2(flower);
    printf("%s\n", flower);
    char *flower2 = "lily"; // constant
    int l1 = strlenght(flower);
    int l2 = strlenght(flower2);
    printf("length of flower1: %d, length of flower2: %d\n", l1, l2);

    printf("flower2: %s (%p)\n", flower2, flower2);
    flower2 = "jassmine";
    printf("flower2: %s (%p)\n", flower2, flower2);
    return 0;
}