#include <stdio.h>

int main()
{
    float physics, chemistry, biology, mathematics, computer;
    float total, average;

    // Input marks
    printf("Enter marks for five subjects:\n");

    printf("Physics: ");
    scanf("%f", &physics);

    printf("Chemistry: ");
    scanf("%f", &chemistry);

    printf("Biology: ");
    scanf("%f", &biology);

    printf("Mathematics: ");
    scanf("%f", &mathematics);

    printf("Computer: ");
    scanf("%f", &computer);

    // Calculate total and average
    total = physics + chemistry + biology + mathematics + computer;
    average = total / 5;

    printf("\nAverage = %.2f\n", average);

    // Grade calculation
    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else if (average >= 50)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

    return 0;
}
