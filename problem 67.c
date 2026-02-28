#include <stdio.h>

int main()
{
    char size, fuel, purpose;

    scanf(" %c %c %c", &size, &fuel, &purpose);

    // Validate Size
    if(size!='S' && size!='M' && size!='L')
    {
        printf("Invalid Size");
        return 0;
    }

    // Validate Fuel
    if(fuel!='G' && fuel!='D' && fuel!='E')
    {
        printf("Invalid Fuel Type");
        return 0;
    }

    // Validate Purpose
    if(purpose!='P' && purpose!='C' && purpose!='T')
    {
        printf("Invalid Purpose");
        return 0;
    }

    // Display Size
    if(size=='S') printf("Small Vehicle\n");
    else if(size=='M') printf("Medium Vehicle\n");
    else printf("Large Vehicle\n");

    // Display Fuel
    if(fuel=='G') printf("Fuel Type: Gasoline\n");
    else if(fuel=='D') printf("Fuel Type: Diesel\n");
    else printf("Fuel Type: Electric\n");

    // Display Purpose
    if(purpose=='P') printf("Personal Use\n");
    else if(purpose=='C') printf("Commercial Use\n");
    else printf("Public Transport\n");

    return 0;
}
