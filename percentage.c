#include <stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5, mark6;
    float total, percentage;

    // Input 6 subject marks
    printf("Enter marks for 6 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &mark1);

    printf("Subject 2: ");
    scanf("%d", &mark2);

    printf("Subject 3: ");
    scanf("%d", &mark3);

    printf("Subject 4: ");
    scanf("%d", &mark4);

    printf("Subject 5: ");
    scanf("%d", &mark5);

    printf("Subject 6: ");
    scanf("%d", &mark6);

    // Calculate total and percentage
    total = mark1 + mark2 + mark3 + mark4 + mark5 + mark6;
    percentage = total / 6;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    // Grade calculation
    if (percentage >= 95)
        printf("Grade: A\n");
    else if (percentage >= 85)
        printf("Grade: B\n");
    else if (percentage >= 75)
        printf("Grade: C\n");
    else if (percentage >= 65)
        printf("Grade: D\n");
    else if (percentage >= 45)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

    return 0;
}
