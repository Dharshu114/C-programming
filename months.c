#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("January has 31 days\n");
        printf("1st Quadrant\n");
    }
    else if (month == 2)
    {
        printf("February has 28 or 29 days\n");
        printf("1st Quadrant\n");
    }
    else if (month == 3)
    {
        printf("March has 31 days\n");
        printf("1st Quadrant\n");
    }
    else if (month == 4)
    {
        printf("April has 30 days\n");
        printf("2nd Quadrant\n");
    }
    else if (month == 5)
    {
        printf("May has 31 days\n");
        printf("2nd Quadrant\n");
    }
    else if (month == 6)
    {
        printf("June has 30 days\n");
        printf("2nd Quadrant\n");
    }
    else if (month == 7)
    {
        printf("July has 31 days\n");
        printf("3rd Quadrant\n");
    }
    else if (month == 8)
    {
        printf("August has 31 days\n");
        printf("3rd Quadrant\n");
    }
    else if (month == 9)
    {
        printf("September has 30 days\n");
        printf("3rd Quadrant\n");
    }
    else if (month == 10)
    {
        printf("October has 31 days\n");
        printf("4th Quadrant\n");
    }
    else if (month == 11)
    {
        printf("November has 30 days\n");
        printf("4th Quadrant\n");
    }
    else if (month == 12)
    {
        printf("December has 31 days\n");
        printf("4th Quadrant\n");
    }
    else
    {
        printf("Invalid month number!\n");
    }

    return 0;
}
