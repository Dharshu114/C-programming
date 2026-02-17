#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("Day: Monday\n");
        printf("It is a Weekday\n");
    }
    else if (day == 2)
    {
        printf("Day: Tuesday\n");
        printf("It is a Weekday\n");
    }
    else if (day == 3)
    {
        printf("Day: Wednesday\n");
        printf("It is a Weekday\n");
    }
    else if (day == 4)
    {
        printf("Day: Thursday\n");
        printf("It is a Weekday\n");
    }
    else if (day == 5)
    {
        printf("Day: Friday\n");
        printf("It is a Weekday\n");
    }
    else if (day == 6)
    {
        printf("Day: Saturday\n");
        printf("It is a Holiday\n");
    }
    else if (day == 7)
    {
        printf("Day: Sunday\n");
        printf("It is a Holiday\n");
    }
    else
    {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
