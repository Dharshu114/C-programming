#include <stdio.h>

int main()
{
    float hoursWorked, hourlyRate, totalSalary, overtimePay;

    printf("Enter number of hours worked: ");
    scanf("%f", &hoursWorked);

    printf("Enter hourly rate: ");
    scanf("%f", &hourlyRate);

    // Check for invalid input
    if (hoursWorked < 0 || hourlyRate < 0)
    {
        printf("Invalid input! Values cannot be negative.\n");
    }
    else
    {
        if (hoursWorked <= 40)
        {
            totalSalary = hoursWorked * hourlyRate;
        }
        else
        {
            overtimePay = (hoursWorked - 40) * (1.5 * hourlyRate);
            totalSalary = (40 * hourlyRate) + overtimePay;
        }

        printf("Total Salary: %.2f\n", totalSalary);
    }

    return 0;
}
