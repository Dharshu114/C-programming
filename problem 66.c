#include <stdio.h>

int main()
{
    int age;
    char gender;
    float height;

    scanf("%d %c %f", &age, &gender, &height);

    if (height >= 1.80 || (gender == 'M' || gender == 'm') && age >= 18)
    {
        printf("Selected");
    }
    else
    {
        printf("Not Selected");
    }

    return 0;
}
