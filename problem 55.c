#include <stdio.h>

int main()
{
    float salary, increment;
    int rating;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);

    if(rating == 1)
        increment = salary * 0.05;
    else if(rating == 2)
        increment = salary * 0.08;
    else if(rating == 3)
        increment = salary * 0.10;
    else if(rating == 4)
        increment = salary * 0.15;
    else if(rating == 5)
        increment = salary * 0.20;
    else
    {
        printf("Invalid Rating");
        return 0;
    }

    printf("Increment Amount = %.2f\n", increment);
    printf("New Salary = %.2f\n", salary + increment);

    return 0;
}
