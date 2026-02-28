#include <stdio.h>

int main()
{
    int frequency;

    scanf("%d", &frequency);

    if(frequency < 0)
    {
        printf("Invalid");
    }
    else if(frequency < 20)
    {
        printf("Infrasound: %.2f Hz", (float)frequency);
    }
    else if(frequency <= 20000)
    {
        printf("Audible sound: %.2f Hz", (float)frequency);
    }
    else
    {
        printf("Ultrasound: %.2f Hz", (float)frequency);
    }

    return 0;
}
