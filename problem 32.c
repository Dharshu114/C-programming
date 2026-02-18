#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if sides are positive
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid input! Sides must be positive.\n");
    }
    // Check triangle validity using triangle inequality rule
    else if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Triangle is VALID.\n");

        // Check type of triangle
        if (a == b && b == c)
        {
            printf("It is an Equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("It is an Isosceles Triangle.\n");
        }
        else
        {
            printf("It is a Scalene Triangle.\n");
        }
    }
    else
    {
        printf("Triangle is NOT valid.\n");
    }

    return 0;
}
