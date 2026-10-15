#include <stdio.h>

// Create the function (fixed typo in name)
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

int main() {
    // Declare variables
    float basic = 15000.00;
    float housing = 3000.00;
    float transport = 2000.00;
    
    // Call functions
    float salary = calculateSalary(basic, housing, transport);
    printf("The calculated salary is: %.2f\n", salary);
    
    return 0;
}