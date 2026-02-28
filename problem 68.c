#include <stdio.h>

int main()
{
    char size, fuel, purpose;

    scanf(" %c %c %c", &size, &fuel, &purpose);

    if(size=='S')
        printf("Small ");
    else if(size=='M')
        printf("Medium ");
    else if(size=='L')
        printf("Large ");
    else
    {
        printf("Invalid Input");
        return 0;
    }

    if(fuel=='G')
        printf("Gasoline ");
    else if(fuel=='D')
        printf("Diesel ");
    else if(fuel=='E')
        printf("Electric ");
    else
    {
        printf("Invalid Input");
        return 0;
    }

    if(purpose=='P')
        printf("Personal Use");
    else if(purpose=='C')
        printf("Commercial Use");
    else if(purpose=='T')
        printf("Public Transport");
    else
        printf("Invalid Input");

    return 0;
}
