#include <stdio.h>

int main()
{
    float height;

    printf("Enter height in centimeters: ");
    scanf("%f", &height);

    if (height < 150)
    {
        printf("Category: Short");
    }
    else if (height >= 150 && height < 165)
    {
        printf("Category: Average Height");
    }
    else if (height >= 165 && height < 180)
    {
        printf("Category: Tall");
    }
    else
    {
        printf("Category: Very Tall");
    }

    return 0;
}


