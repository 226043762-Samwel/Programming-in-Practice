#include <stdio.h>
int main() {
	
 int departments;
 double revenue;
 double expenses;
 double balance;
 
 printf("---------------------------\n");
 printf("MUNICIPAL BUDGET CALCULATOR\n");
 printf("---------------------------\n");
 printf("Enter Departments:");
 scanf("%lf", &departments );
 printf("Enter total revenue: ");
 scanf("%lf", &revenue);
 printf("Enter total expenses: ");
 scanf("%lf", &expenses);

  balance = revenue - expenses;
  
 printf("Departments: 2\n", departments);
 printf("\nRevenue: %.2f\n", revenue);
 printf("Expenses: %.2f\n", expenses);
 if (balance > 0) {
 printf("Surplus: %.2f\n", balance);
 }
 else if (balance < 0) {
 printf("Deficit: %.2f\n", -balance);
 }
 else {
 printf("The budget is balanced.\n");
 printf("---------------------------\n");
 }
 return 0;
}
