#include <stdio.h>

int main() {
    float cost_price, selling_price, result;
    int choice;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate the difference between selling price and cost price
    result = selling_price - cost_price;

    // Assign choice based on the result
    choice = (result > 0) - (result < 0);

    switch (choice) {
        case 1:  // Profit case
            printf("Profit: %.2f\n", result);
            break;

        case -1:  // Loss case
            printf("Loss: %.2f\n", -result);
            break;

        case 0:  // No profit, no loss
            printf("No Profit, No Loss.\n");
            break;

        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
