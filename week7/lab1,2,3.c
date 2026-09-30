#include <stdio.h>
#include <string.h>

int main(){
    //Decleration of variables
    char supplierName[50];
    char emailAddress[50];
    char phoneNumber[15];
    char town[50];
    //1. ask user for suppier name
    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    //2. ask user for Email address
    printf("Enter email address: ");
    fgets(emailAddress, sizeof(emailAddress), stdin);
    //3. ask user for phone number
    printf("Enter phone number: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);
    //4. ask user for town
    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    //5. display the entered information
    printf("\n--- Supplier Information ---\n");
    printf("Supplier Name: %s", supplierName);
    printf("Email Address: %s", emailAddress);
    printf("Phone Number: %s", phoneNumber);
    printf("Town: %s", town);
    return 0;   
}