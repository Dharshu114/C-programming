#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    if(height <= 0)
    {
        printf("Invalid height");
        return 0;
    }

    bmi = weight / (height * height);

    if(bmi < 0 || bmi > 100)
    {
        printf("BMI out of valid range (0-100)");
        return 0;
    }

    printf("BMI = %.2f\n", bmi);

    if(bmi < 18.5)
        printf("Underweight");
    else if(bmi < 25)
        printf("Normal weight");
    else if(bmi < 30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}
