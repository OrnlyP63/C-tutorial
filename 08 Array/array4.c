#include <stdio.h>
#include <math.h>

typedef struct
{
    char *name;
    int height, weight;
    char gender;
} Person;

double bmi(int height, int weight)
{
    return weight / pow(height / 100.0, 2);
}

void demo()
{
    // Person p[5];
    // p[0].height = 170;
    // p[0].weight = 70;
    // p[0].gender = 'M';

    // p[1] = {.height = 165, .weight = 55, .gender = 'F'};

    // p[2] = {175, 72, 'M'};

    Person p[] = {
        {"Noon", 170, 70, 'M'},
        {"Bow", 165, 55, 'F'},
        {"Jan", 175, 72, 'M'},
        {"Man", 162, 48, 'F'},
        {"Cee", 169, 50, 'F'},
    };

    int size = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < size; ++i)
    {
        printf("%7s: height = %d, weight = %d, bmi = %.2f\n", p[i].name, p[i].height, p[i].weight, bmi(p[i].height, p[i].weight));
    }
}

int main()
{
    demo();
    return 0;
}
