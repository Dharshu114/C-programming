#include <stdio.h>

int main()
{
    float age;

    printf("Enter lion's age: ");
    scanf("%f", &age);

    if(age < 0 || age > 26)
    {
        printf("Invalid age. Maximum age is 26 years.");
    }
    else if(age <= 2)
    {
        printf("Age: %.2f\nCategory: Cub", age);
    }
    else if(age <= 4)
    {
        printf("Age: %.2f\nCategory: Juvenile", age);
    }
    else if(age <= 6)
    {
        printf("Age: %.2f\nCategory: Subadult", age);
    }
    else if(age <= 15)
    {
        printf("Age: %.2f\nCategory: Young adult", age);
    }
    else
    {
        printf("Age: %.2f\nCategory: Old adult", age);
    }

    return 0;
}
