#include <stdio.h>

int main() {
    int totalChocolates, perDay, plannedDays;
    int required;

    printf("Enter total chocolates: ");
    scanf("%d", &totalChocolates);

    printf("Enter chocolates consumed per day: ");
    scanf("%d", &perDay);

    printf("Enter planned number of days: ");
    scanf("%d", &plannedDays);

    // Calculate required chocolates
    required = perDay * plannedDays;

    if (totalChocolates >= required) {
        printf("1");   // Chocolates will last
    } else {
        printf("0");   // Chocolates will run out
    }

    return 0;
}
