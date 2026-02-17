#include <stdio.h>

int main()
{
    int steps;
    float time;

    printf("Enter number of steps taken: ");
    scanf("%d", &steps);

    printf("Enter time taken (in minutes): ");
    scanf("%f", &time);

    if (steps >= 10000 && time >= 60)
    {
        printf("Fitness Level: Excellent\n");
    }
    else if (steps >= 8000 && time >= 45)
    {
        printf("Fitness Level: Very Good\n");
    }
    else if (steps >= 5000 && time >= 30)
    {
        printf("Fitness Level: Good\n");
    }
    else if (steps >= 3000 && time >= 20)
    {
        printf("Fitness Level: Average\n");
    }
    else
    {
        printf("Fitness Level: Needs Improvement\n");
    }

    return 0;
}
