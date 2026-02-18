#include <stdio.h>

int main()
{
    float salary, bonus, finalSalary;
    char gender;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);   // space before %c to avoid input issue

    if (salary < 0)
    {
        printf("Invalid salary amount!\n");
    }
    else
    {
        if (gender == 'M' || gender == 'm')
        {
            bonus = 0.05 * salary;   // 5% bonus
        }
        else if (gender == 'F' || gender == 'f')
        {
            bonus = 0.10 * salary;   // 10% bonus
        }
        else
        {
            printf("Invalid gender entered!\n");
            return 0;
        }

        finalSalary = salary + bonus;

        printf("Bonus Amount: %.2f\n", bonus);
        printf("Final Salary: %.2f\n", finalSalary);
    }

    return 0;
}
