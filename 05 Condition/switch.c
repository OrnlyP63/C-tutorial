#include <stdio.h>

void switch_demo()
{
    char d;
    printf("1 [m]ocha\n");
    printf("2 [l]atte\n");
    printf("3 [e]xpresso\n");
    printf("4 [t]ea\n");
    printf("please select a menu: ");
    scanf(" %c", &d);

    switch (d)
    {
    case 'm':
    case '1':
        printf("40\n");
        break;
    case 'l':
    case '2':
        printf("20\n");
        break;
    case 'e':
    case '3':
        printf("30\n");
        break;
    case 't':
    case '4':
        printf("15\n");
        break;
    default:
        printf("please select a valid menu.\n");
        break;
    }
}

int main()
{
    switch_demo();
}