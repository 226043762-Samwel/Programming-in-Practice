#include <stdio.h>

// Create the calculateBudget function
float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int main() {
    // Declare variables (you can change these values to test)
    float revenue = 55000.00f;
    float expenses = 40000.00f;

    // Call the function
    float result = calculateBudget(revenue, expenses);

    // Display the net amount
    printf("Net Budget Amount: %.2f\n", result);

    // Display status based on the result
    if (result > 0) {
        printf("SURPLUS\n");
    } else if (result < 0) {
        printf("DEFICIT\n");
    } else {
        printf("BALANCED\n");
    }

    return 0;
}