#include <stdio.h>

int main() {
    float budgets[10];
    int n = 10;
    float sum = 0;
    int i, j;

    printf("Enter %d department budgets:\n", n);
    for (i = 0; i < n; i++) {
        printf("Budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
        sum += budgets[i];
    }

    printf("\n--- Department Budgets ---\n");
    for (i = 0; i < n; i++) {
        printf("Budget %d: $%.2f\n", i + 1, budgets[i]);
    }

    float average = sum / n;
    printf("\nTotal Budget: $%.2f\n", sum);
    printf("Average Budget: $%.2f\n", average);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                float temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Budgets Sorted (Lowest to Highest) ---\n");
    for (i = 0; i < n; i++) {
        printf("$%.2f\n", budgets[i]);
    }

    return 0;
}