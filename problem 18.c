#include <stdio.h>

int main()
{
    float basicSalary, hra, da, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 0)
    {
        printf("Invalid input! Salary cannot be negative.\n");
    }
    else if (basicSalary <= 70000)
    {
        hra = basicSalary * 0.30;   // 30% HRA
        da  = basicSalary * 0.80;   // 80% DA
    }
    else
    {
        hra = basicSalary * 0.40;   // 40% HRA
        da  = basicSalary * 0.90;   // 90% DA
    }

    if (basicSalary >= 0)
    {
        grossSalary = basicSalary + hra + da;

        printf("HRA = %.2f\n", hra);
        printf("DA = %.2f\n", da);
        printf("Gross Salary = %.2f\n", grossSalary);
    }

    return 0;
}
