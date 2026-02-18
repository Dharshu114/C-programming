#include <stdio.h>

int main()
{
    int age;
    float tuitionFee, totalExpenses;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check age condition
    if (age < 18 || age > 25)
    {
        printf("You are not eligible (Age must be between 18 and 25).\n");
    }
    else
    {
        printf("Enter annual tuition fee: ");
        scanf("%f", &tuitionFee);

        printf("Enter total annual expenses: ");
        scanf("%f", &totalExpenses);

        if (tuitionFee > totalExpenses)
        {
            printf("Tuition fee is greater than total annual expenses.\n");
        }
        else if (tuitionFee < totalExpenses)
        {
            printf("Total annual expenses are greater than tuition fee.\n");
        }
        else
        {
            printf("Tuition fee and total annual expenses are equal.\n");
        }
    }

    return 0;
}
