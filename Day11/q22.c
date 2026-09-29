#include <stdio.h>
int main() {
    float cost_price, selling_price, amount, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        percentage = (amount / cost_price) * 100;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cost_price > selling_price) {
        amount = cost_price - selling_price;
        percentage = (amount / cost_price) * 100;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}