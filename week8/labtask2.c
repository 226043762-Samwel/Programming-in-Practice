#include <stdio.h>

// Create function
float calculateVAT(float amount, float taxrate) {
    return amount * (taxrate / 100.0f);
}

int main() {
    // Declare variables
    float price = 1000.00;
    float tax = 15.0f; // Tax rate percentage

    // Call functions 
    float vat = calculateVAT(price, tax);
    printf("The VAT for the amount %.2f is: %.2f\n", price, vat);

    return 0;
}