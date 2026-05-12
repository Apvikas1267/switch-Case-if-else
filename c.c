
#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    
    // Variables for the various rule engines
    float salary, units, bill, purchase, discount, final_amount;
    int credit_score, age, attempts;
    char password[100];

    // Display the menu
    printf("\n===============================================\n");
    printf("          RULE ENGINE CONTROL PANEL            \n");
    printf("===============================================\n");
    printf("1: Bank Loan Eligibility\n");
    printf("2: Electricity Bill Calculation\n");
    printf("3: Ticket Pricing\n");
    printf("4: Login Validation\n");
    printf("5: Password Strength\n");
    printf("6: Simple Discount\n");
    printf("7: Exit\n");
    printf("-----------------------------------------------\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    // Process the user's choice
    switch (choice) {
        case 1:
            printf("\n--- Bank Loan Eligibility ---\n");
            printf("Enter monthly salary: ");
            scanf("%f", &salary);
            printf("Enter credit score: ");
            scanf("%d", &credit_score);

            if (salary >= 50000 && credit_score >= 700) {
                printf("Result: Approved\n");
            } else if (salary >= 30000) {
                printf("Result: Conditional Approval\n");
            } else {
                printf("Result: Rejected\n");
            }
            break;

        case 2:
            printf("\n--- Electricity Bill Calculation ---\n");
            printf("Enter number of units consumed: ");
            scanf("%f", &units);

            if (units <= 100) {
                bill = units * 2.0;
            } else if (units <= 300) {
                bill = units * 5.0;
            } else {
                bill = units * 8.0;
            }
            printf("Result: Total Bill is ₹%.2f\n", bill);
            break;

        case 3:
            printf("\n--- Ticket Pricing ---\n");
            printf("Enter age: ");
            scanf("%d", &age);

            if (age < 12) {
                printf("Result: Child (₹100)\n");
            } else if (age <= 60) {
                printf("Result: Adult (₹200)\n");
            } else {
                printf("Result: Senior Citizen (₹150)\n");
            }
            break;

        case 4:
            printf("\n--- Login Validation ---\n");
            printf("Enter number of login attempts: ");
            scanf("%d", &attempts);

            if (attempts <= 3) {
                printf("Result: Allow login\n");
            } else {
                printf("Result: Block user\n");
            }
            break;

        case 5:
            printf("\n--- Password Strength Checker ---\n");
            printf("Enter password: ");
            scanf("%99s", password); // Reads a string up to 99 characters

            if (strlen(password) >= 8) {
                printf("Result: Strong password\n");
            } else {
                printf("Result: Weak password\n");
            }
            break;

        case 6:
            printf("\n--- Simple Discount ---\n");
            printf("Enter purchase amount: ");
            scanf("%f", &purchase);

            if (purchase >= 5000) {
                discount = purchase * 0.20;
                final_amount = purchase - discount;
                printf("Result: 20%% discount applied. Final amount: ₹%.2f\n", final_amount);
            } else if (purchase >= 2000) {
                discount = purchase * 0.10;
                final_amount = purchase - discount;
                printf("Result: 10%% discount applied. Final amount: ₹%.2f\n", final_amount);
            } else {
                printf("Result: No discount. Final amount: ₹%.2f\n", purchase);
            }
            break;

        case 7:
            printf("\nExiting the Rule Engine Control Panel. Goodbye!\n");
            break;

        default:
            printf("\nInvalid choice! Please ect a valid optionsel from 1 to 7.\n");
    }

    // The program reaches this point right after the switch-case and naturally terminates.
    return 0;
}