#include <stdio.h>
#include <string.h>

int main() {
    int choice = 0;

    while (choice != 8) {
        printf("\n====================================================");
        printf("\n              RULE ENGINE APPLICATION");
        printf("\n====================================================");
        printf("\n1. Bank Loan Eligibility (Salary & Credit Score)");
        printf("\n2. Electricity Bill Calculation (Unit-based)");
        printf("\n3. Ticket Pricing (Age-based)");
        printf("\n4. Login Validation (Attempts-based)");
        printf("\n5. Password Strength Checker");
        printf("\n6. Simple Discount Calculator");
        printf("\n7. Weather Advisory");
        printf("\n8. Exit");
        printf("\n====================================================");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: {
                int salary, credit;

                printf("\n---------- BANK LOAN ELIGIBILITY ----------\n");
                printf("Enter your salary: ");
                scanf("%d", &salary);
                printf("Enter your credit score: ");
                scanf("%d", &credit);

                if (salary >= 50000 && credit >= 700) {
                    printf("\nLoan Approved Successfully!\n");
                    printf("Reason: Salary >= 50000 and Credit Score >= 700\n");
                }
                else if (salary >= 30000) {
                    printf("\nConditionally Approved.\n");
                    printf("Reason: Salary is above 30000 but credit score is low.\n");
                }
                else {
                    printf("\nLoan Rejected.\n");
                    printf("Reason: Salary below 30000.\n");
                }
                break;
            }

            case 2: {
                int units;
                float bill;

                printf("\n---------- ELECTRICITY BILL CALCULATOR ----------\n");
                printf("Enter units consumed: ");
                scanf("%d", &units);

                if (units <= 100) {
                    bill = units * 2;
                    printf("\nRate Applied: Rs. 2 per unit\n");
                }
                else if (units <= 300) {
                    bill = units * 5;
                    printf("\nRate Applied: Rs. 5 per unit\n");
                }
                else {
                    bill = units * 8;
                    printf("\nRate Applied: Rs. 8 per unit\n");
                }

                printf("Total Electricity Bill = Rs. %.2f\n", bill);
                break;
            }

            case 3: {
                int age;

                printf("\n---------- TICKET PRICING ----------\n");
                printf("Enter age: ");
                scanf("%d", &age);

                if (age < 12) {
                    printf("\nChild Ticket Price = Rs. 100\n");
                }
                else if (age <= 60) {
                    printf("\nAdult Ticket Price = Rs. 200\n");
                }
                else {
                    printf("\nSenior Citizen Ticket Price = Rs. 150\n");
                }
                break;
            }

            case 4: {
                int password;
                int correctPassword = 1234;
                int success = 0;

                printf("\n---------- LOGIN VALIDATION ----------\n");

                for (int i = 1; i <= 3; i++) {
                    printf("Attempt %d - Enter Password: ", i);
                    scanf("%d", &password);

                    if (password == correctPassword) {
                        printf("\nLogin Successful! Access Granted.\n");
                        success = 1;
                        break;
                    }
                    else {
                        printf("Invalid Password!\n");
                    }
                }

                if (success == 0) {
                    printf("\nUser Blocked after 3 failed attempts.\n");
                }
                break;
            }

            case 5: {
                char pass[100];
                int len;

                printf("\n---------- PASSWORD STRENGTH CHECKER ----------\n");
                printf("Enter password: ");
                scanf("%s", pass);

                len = strlen(pass);

                if (len >= 8) {
                    printf("\nStrong Password\n");
                }
                else {
                    printf("\nWeak Password (Minimum 8 characters required)\n");
                }
                break;
            }

            case 6: {
                float purchase, finalPrice;

                printf("\n---------- DISCOUNT CALCULATOR ----------\n");
                printf("Enter purchase amount: Rs. ");
                scanf("%f", &purchase);

                if (purchase >= 5000) {
                    finalPrice = purchase - (purchase * 0.20);
                    printf("\nDiscount Applied: 20%%\n");
                    printf("Final Price = Rs. %.2f\n", finalPrice);
                }
                else if (purchase >= 2000) {
                    finalPrice = purchase - (purchase * 0.10);
                    printf("\nDiscount Applied: 10%%\n");
                    printf("Final Price = Rs. %.2f\n", finalPrice);
                }
                else {
                    printf("\nNo Discount Applied.\n");
                    printf("Final Price = Rs. %.2f\n", purchase);
                }
                break;
            }

            case 7: {
                int temp;

                printf("\n---------- WEATHER ADVISORY ----------\n");
                printf("Enter temperature (in Celsius): ");
                scanf("%d", &temp);

                if (temp > 35) {
                    printf("\nWeather Status: HOT\n");
                    printf("Advice: Stay hydrated and avoid direct sunlight.\n");
                }
                else if (temp < 15) {
                    printf("\nWeather Status: COLD\n");
                    printf("Advice: Wear warm clothes.\n");
                }
                else {
                    printf("\nWeather Status: MODERATE\n");
                    printf("Advice: Pleasant weather.\n");
                }
                break;
            }

            case 8: {
                printf("\nThank you for using the Rule Engine Application.\n");
                printf("Exiting Program...\n");
                break;
            }

            default: {
                printf("\nInvalid Choice! Please enter a valid option (1-8).\n");
                break;
            }
        }
    }

    return 0;
}