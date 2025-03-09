#include <stdio.h>
#include "area_lib.h"

int main()
{
    printf("rectangle area = %.2f\n", rectangle(3, 5));
    printf("triangle area = %.2f\n", triangle(3, 5));
    return 0;
}
// gcc area_lib.c area_code.c -o area_program
