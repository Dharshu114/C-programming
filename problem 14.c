#include <stdio.h>

int main() {
    int penQty, notebookQty, pencilQty;
    int totalAmount;

    // Prices
    int penPrice = 20;
    int notebookPrice = 70;
    int pencilPrice = 9;

    printf("Enter quantity of pens: ");
    scanf("%d", &penQty);

    printf("Enter quantity of notebooks: ");
    scanf("%d", &notebookQty);

    printf("Enter quantity of pencils: ");
    scanf("%d", &pencilQty);

    // Calculate total amount
    totalAmount = (penQty * penPrice) +
                  (notebookQty * notebookPrice) +
                  (pencilQty * pencilPrice);

    printf("Total Amount = %d units\n", totalAmount);

    return 0;
}
