#include <stdio.h>
#include <stdlib.h>

// --- Task Functions ---
float calculateVAT(float amount, float taxrate) {
    return amount * (taxrate / 100.0f);
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

// --- Reusable Menu Function ---
void displayMenu() {
    printf("==================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("Page 23 of 32\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: {
                float price, taxRate;
                printf("Enter amount: ");
                scanf("%f", &price);
                printf("Enter tax rate (%%): ");
                scanf("%f", &taxRate);

                float vat = calculateVAT(price, taxRate);
                printf("The calculated VAT is: %.2f\n\n", vat);
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);

                float totalSalary = calculateSalary(basic, housing, transport);
                printf("The calculated salary is: %.2f\n\n", totalSalary);
                break;
            }
            case 3: {
                float revenue, expenses;
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);

                float netBudget = calculateBudget(revenue, expenses);
                printf("Net Budget Amount: %.2f\n", netBudget);

                if (netBudget > 0) {
                    printf("Status: SURPLUS\n\n");
                } else if (netBudget < 0) {
                    printf("Status: DEFICIT\n\n");
                } else {
                    printf("Status: BALANCED\n\n");
                }
                break;
            }
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select an option between 1 and 4.\n\n");
        }
    } while (choice != 4);

    return 0;
}