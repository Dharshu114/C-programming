#include <stdio.h>

int main()
{
    int day, month, year;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDays = 0, i;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Leap year check
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        daysInMonth[1] = 29;

    // Validate month
    if(month < 1 || month > 12)
    {
        printf("Invalid month");
        return 0;
    }

    // Validate day
    if(day < 1 || day > daysInMonth[month-1])
    {
        printf("Invalid day");
        return 0;
    }

    // Calculate days passed in the quarter
    int startMonth;
    if(month >=1 && month <=3) startMonth = 1;
    else if(month <=6) startMonth = 4;
    else if(month <=9) startMonth = 7;
    else startMonth = 10;

    for(i = startMonth; i < month; i++)
        totalDays += daysInMonth[i-1];

    totalDays += day;

    // Determine Season
    if((month == 3 && day >= 1) || month == 4 || month == 5)
        printf("Season: Spring\n");
    else if(month == 6 || month == 7 || month == 8)
        printf("Season: Summer\n");
    else if(month == 9 || month == 10 || month == 11)
        printf("Season: Autumn\n");
    else
        printf("Season: Winter\n");

    printf("Days passed in the quarter: %d\n", totalDays);

    return 0;
}
